/* Copyright (c) 2018, Google Inc.
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

#ifndef OPENSSL_HEADER_CHACHA_INTERNAL
#define OPENSSL_HEADER_CHACHA_INTERNAL

#include <openssl/base.h>

#include "../fipsmodule/cpucap/internal.h"
#include "../internal.h"

#if defined(__cplusplus)
extern "C" {
#endif


// CRYPTO_hchacha20 computes the HChaCha20 function, which should only be used
// as part of XChaCha20.
void CRYPTO_hchacha20(uint8_t out[32], const uint8_t key[32],
                      const uint8_t nonce[16]);

#if !defined(OPENSSL_NO_ASM) && \
    (defined(OPENSSL_X86) || defined(OPENSSL_X86_64) || defined(OPENSSL_ARM))

#define CHACHA20_ASM

#elif !defined(OPENSSL_NO_ASM) && defined(OPENSSL_AARCH64)

#define CHACHA20_ASM_NOHW

#define CHACHA20_ASM_NEON
OPENSSL_INLINE int ChaCha20_ctr32_neon_capable(size_t len) {
  return (len >= 192) && CRYPTO_is_NEON_capable();
}
void ChaCha20_ctr32_neon(uint8_t *out, const uint8_t *in, size_t in_len,
                         const uint32_t key[8], const uint32_t counter[4]);
#endif

#if defined(CHACHA20_ASM)
// ChaCha20_ctr32 encrypts |in_len| bytes from |in| and writes the result to
// |out|. If |in| and |out| alias, they must be equal.
//
// |counter[0]| is the initial 32-bit block counter, and the remainder is the
// 96-bit nonce. If the counter overflows, the output is undefined. The function
// will produce output, but the output may vary by machine and may not be
// self-consistent. (On some architectures, the assembly implements a mix of
// 64-bit and 32-bit counters.)
void ChaCha20_ctr32(uint8_t *out, const uint8_t *in, size_t in_len,
                    const uint32_t key[8], const uint32_t counter[4]);
#endif

#if defined(CHACHA20_ASM_NOHW)
// ChaCha20_ctr32_nohw is like |ChaCha20_ctr32| except |in_len| must be nonzero.
void ChaCha20_ctr32_nohw(uint8_t *out, const uint8_t *in, size_t in_len,
                         const uint32_t key[8], const uint32_t counter[4]);
#endif


#if defined(__cplusplus)
}  // extern C
#endif

#endif  // OPENSSL_HEADER_CHACHA_INTERNAL
