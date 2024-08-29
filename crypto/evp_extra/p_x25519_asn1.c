/* Copyright (c) 2019, Google Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE. */

#include <openssl/evp.h>

#include <openssl/bytestring.h>
#include <openssl/curve25519.h>
#include <openssl/err.h>
#include <openssl/mem.h>

#include "../fipsmodule/evp/internal.h"
#include "../internal.h"
#include "internal.h"


static void x25519_free(EVP_PKEY *pkey) {
  OPENSSL_free(pkey->pkey.ptr);
  pkey->pkey.ptr = NULL;
}

static int x25519_set_priv_raw(EVP_PKEY *pkey, const uint8_t *privkey, size_t privkey_len, const uint8_t* pubkey, size_t pubkey_len) {
  if (privkey_len != X25519_PRIVATE_KEY_LEN) {
    OPENSSL_PUT_ERROR(EVP, EVP_R_DECODE_ERROR);
    return 0;
  }

  if (pubkey && pubkey_len != X25519_PUBLIC_VALUE_LEN) {
    OPENSSL_PUT_ERROR(EVP, EVP_R_DECODE_ERROR);
    return 0;
  }

  X25519_KEY *key = OPENSSL_malloc(sizeof(X25519_KEY));
  if (key == NULL) {
    return 0;
  }

  OPENSSL_memcpy(key->priv, privkey, X25519_PRIVATE_KEY_LEN);
  X25519_public_from_private(key->pub, key->priv);
  key->has_private = 1;

  // If a public key was provided, validate that it matches the computed value.
  if(pubkey && OPENSSL_memcmp(key->pub, pubkey, pubkey_len) != 0) {
    OPENSSL_free(key);
    OPENSSL_PUT_ERROR(EVP, EVP_R_DECODE_ERROR);
    return 0;
  }

  x25519_free(pkey);
  pkey->pkey.ptr = key;
  return 1;
}

static int x25519_set_pub_raw(EVP_PKEY *pkey, const uint8_t *in, size_t len) {
  if (len != 32) {
    OPENSSL_PUT_ERROR(EVP, EVP_R_DECODE_ERROR);
    return 0;
  }

  X25519_KEY *key = OPENSSL_malloc(sizeof(X25519_KEY));
  if (key == NULL) {
    return 0;
  }

  OPENSSL_memcpy(key->pub, in, 32);
  key->has_private = 0;

  x25519_free(pkey);
  pkey->pkey.ptr = key;
  return 1;
}

static int x25519_get_priv_raw(const EVP_PKEY *pkey, uint8_t *out,
                                size_t *out_len) {
  const X25519_KEY *key = pkey->pkey.ptr;
  if (!key->has_private) {
    OPENSSL_PUT_ERROR(EVP, EVP_R_NOT_A_PRIVATE_KEY);
    return 0;
  }

  if (out == NULL) {
    *out_len = 32;
    return 1;
  }

  if (*out_len < 32) {
    OPENSSL_PUT_ERROR(EVP, EVP_R_BUFFER_TOO_SMALL);
    return 0;
  }

  OPENSSL_memcpy(out, key->priv, 32);
  *out_len = 32;
  return 1;
}

static int x25519_get_pub_raw(const EVP_PKEY *pkey, uint8_t *out,
                               size_t *out_len) {
  const X25519_KEY *key = pkey->pkey.ptr;
  if (out == NULL) {
    *out_len = 32;
    return 1;
  }

  if (*out_len < 32) {
    OPENSSL_PUT_ERROR(EVP, EVP_R_BUFFER_TOO_SMALL);
    return 0;
  }

  OPENSSL_memcpy(out, key->pub, 32);
  *out_len = 32;
  return 1;
}

static int x25519_pub_decode(EVP_PKEY *out, CBS *params, CBS *key) {
  // See RFC 8410, section 4.

  // The parameters must be omitted. Public keys have length 32.
  if (CBS_len(params) != 0) {
    OPENSSL_PUT_ERROR(EVP, EVP_R_DECODE_ERROR);
    return 0;
  }

  return x25519_set_pub_raw(out, CBS_data(key), CBS_len(key));
}

static int x25519_pub_encode(CBB *out, const EVP_PKEY *pkey) {
  const X25519_KEY *key = pkey->pkey.ptr;

  // See RFC 8410, section 4.
  CBB spki, algorithm, oid, key_bitstring;
  if (!CBB_add_asn1(out, &spki, CBS_ASN1_SEQUENCE) ||
      !CBB_add_asn1(&spki, &algorithm, CBS_ASN1_SEQUENCE) ||
      !CBB_add_asn1(&algorithm, &oid, CBS_ASN1_OBJECT) ||
      !CBB_add_bytes(&oid, x25519_asn1_meth.oid, x25519_asn1_meth.oid_len) ||
      !CBB_add_asn1(&spki, &key_bitstring, CBS_ASN1_BITSTRING) ||
      !CBB_add_u8(&key_bitstring, 0 /* padding */) ||
      !CBB_add_bytes(&key_bitstring, key->pub, 32) ||
      !CBB_flush(out)) {
    OPENSSL_PUT_ERROR(EVP, EVP_R_ENCODE_ERROR);
    return 0;
  }

  return 1;
}

static int x25519_pub_cmp(const EVP_PKEY *a, const EVP_PKEY *b) {
  const X25519_KEY *a_key = a->pkey.ptr;
  const X25519_KEY *b_key = b->pkey.ptr;
  return OPENSSL_memcmp(a_key->pub, b_key->pub, 32) == 0;
}

static int x25519_priv_decode(EVP_PKEY *out, CBS *params, CBS *key, CBS *pubkey) {
  // See RFC 8410, section 7.

  // Parameters must be empty. The key is a 32-byte value wrapped in an extra
  // OCTET STRING layer.
  CBS inner;
  if (CBS_len(params) != 0 ||
      !CBS_get_asn1(key, &inner, CBS_ASN1_OCTETSTRING) ||
      CBS_len(key) != 0) {
    OPENSSL_PUT_ERROR(EVP, EVP_R_DECODE_ERROR);
    return 0;
  }

  const uint8_t *public= NULL;
  size_t public_len = 0;
  if (pubkey) {
    uint8_t padding;
    if (!CBS_get_u8(pubkey, &padding) || padding != 0) {
      OPENSSL_PUT_ERROR(EVP, EVP_R_DECODE_ERROR);
      return 0;
    }
    public = CBS_data(pubkey);
    public_len = CBS_len(pubkey);
  }

  return x25519_set_priv_raw(out, CBS_data(&inner), CBS_len(&inner), public, public_len);
}

static int x25519_priv_encode(CBB *out, const EVP_PKEY *pkey) {
  X25519_KEY *key = pkey->pkey.ptr;
  if (!key->has_private) {
    OPENSSL_PUT_ERROR(EVP, EVP_R_NOT_A_PRIVATE_KEY);
    return 0;
  }

  // See RFC 8410, section 7.
  CBB pkcs8, algorithm, oid, private_key, inner;
  if (!CBB_add_asn1(out, &pkcs8, CBS_ASN1_SEQUENCE) ||
      !CBB_add_asn1_uint64(&pkcs8, PKCS8_VERSION_ONE /* version */) ||
      !CBB_add_asn1(&pkcs8, &algorithm, CBS_ASN1_SEQUENCE) ||
      !CBB_add_asn1(&algorithm, &oid, CBS_ASN1_OBJECT) ||
      !CBB_add_bytes(&oid, x25519_asn1_meth.oid, x25519_asn1_meth.oid_len) ||
      !CBB_add_asn1(&pkcs8, &private_key, CBS_ASN1_OCTETSTRING) ||
      !CBB_add_asn1(&private_key, &inner, CBS_ASN1_OCTETSTRING) ||
      // The PKCS#8 encoding stores only the 32-byte seed which is the first 32
      // bytes of the private key.
      !CBB_add_bytes(&inner, key->priv, 32) ||
      !CBB_flush(out)) {
    OPENSSL_PUT_ERROR(EVP, EVP_R_ENCODE_ERROR);
    return 0;
  }

  return 1;
}

static int x25519_priv_encode_v2(CBB *out, const EVP_PKEY *pkey) {
  X25519_KEY *key = pkey->pkey.ptr;
  if (!key->has_private) {
    OPENSSL_PUT_ERROR(EVP, EVP_R_NOT_A_PRIVATE_KEY);
    return 0;
  }

  // See RFC 8410, section 7.
  CBB pkcs8, algorithm, oid, private_key, inner, public_key;
  if (!CBB_add_asn1(out, &pkcs8, CBS_ASN1_SEQUENCE) ||
      !CBB_add_asn1_uint64(&pkcs8, PKCS8_VERSION_TWO /* version */) ||
      !CBB_add_asn1(&pkcs8, &algorithm, CBS_ASN1_SEQUENCE) ||
      !CBB_add_asn1(&algorithm, &oid, CBS_ASN1_OBJECT) ||
      !CBB_add_bytes(&oid, x25519_asn1_meth.oid, x25519_asn1_meth.oid_len) ||
      !CBB_add_asn1(&pkcs8, &private_key, CBS_ASN1_OCTETSTRING) ||
      !CBB_add_asn1(&private_key, &inner, CBS_ASN1_OCTETSTRING) ||
      // The PKCS#8 encoding stores only the 32-byte seed which is the first 32
      // bytes of the private key.
      !CBB_add_bytes(&inner, key->priv, 32) ||
      !CBB_add_asn1(&pkcs8, &public_key, CBS_ASN1_CONTEXT_SPECIFIC|1) ||
      !CBB_add_u8(&public_key, 0 /*no padding required*/) ||
      !CBB_add_bytes(&public_key, key->pub, 32) ||
      !CBB_flush(out)) {
    OPENSSL_PUT_ERROR(EVP, EVP_R_ENCODE_ERROR);
    return 0;
  }

  return 1;
}

static int x25519_size(const EVP_PKEY *pkey) { return 32; }

static int x25519_bits(const EVP_PKEY *pkey) { return 253; }

const EVP_PKEY_ASN1_METHOD x25519_asn1_meth = {
    EVP_PKEY_X25519,
    {0x2b, 0x65, 0x6e},
    3,

    "X25519",
    "OpenSSL X25519 algorithm",

    x25519_pub_decode,
    x25519_pub_encode,
    x25519_pub_cmp,
    x25519_priv_decode,
    x25519_priv_encode,
    x25519_priv_encode_v2,
    x25519_set_priv_raw,
    x25519_set_pub_raw,
    x25519_get_priv_raw,
    x25519_get_pub_raw,
    NULL /* pkey_opaque */,
    x25519_size,
    x25519_bits,
    NULL /* param_missing */,
    NULL /* param_copy */,
    NULL /* param_cmp */,
    x25519_free,
};
