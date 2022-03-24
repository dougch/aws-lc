/* Copyright (c) 2015, Google Inc.
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

 /* This file was generated by err_data_generate.go. */

#include <openssl/base.h>
#include <openssl/err.h>
#include <openssl/type_check.h>


OPENSSL_STATIC_ASSERT(ERR_LIB_NONE == 1, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_SYS == 2, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_BN == 3, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_RSA == 4, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_DH == 5, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_EVP == 6, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_BUF == 7, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_OBJ == 8, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_PEM == 9, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_DSA == 10, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_X509 == 11, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_ASN1 == 12, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_CONF == 13, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_CRYPTO == 14, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_EC == 15, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_SSL == 16, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_BIO == 17, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_PKCS7 == 18, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_PKCS8 == 19, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_X509V3 == 20, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_RAND == 21, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_ENGINE == 22, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_OCSP == 23, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_UI == 24, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_COMP == 25, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_ECDSA == 26, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_ECDH == 27, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_HMAC == 28, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_DIGEST == 29, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_CIPHER == 30, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_HKDF == 31, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_TRUST_TOKEN == 32, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_LIB_USER == 33, library_value_changed)
OPENSSL_STATIC_ASSERT(ERR_NUM_LIBS == 34, number_of_libraries_changed)

const uint32_t kOpenSSLReasonValues[] = {
    0xc320862,
    0xc32887c,
    0xc33088b,
    0xc33889b,
    0xc3408aa,
    0xc3488c3,
    0xc3508cf,
    0xc3588ec,
    0xc36090c,
    0xc36891a,
    0xc37092a,
    0xc378937,
    0xc380947,
    0xc388952,
    0xc390968,
    0xc398977,
    0xc3a098b,
    0xc3a886f,
    0xc3b00f7,
    0xc3b88fe,
    0x1032086f,
    0x10329740,
    0x1033174c,
    0x10339765,
    0x10341778,
    0x10348f4f,
    0x10350c88,
    0x1035978b,
    0x103617b5,
    0x103697c8,
    0x103717e7,
    0x10379800,
    0x10381815,
    0x10389833,
    0x10391842,
    0x1039985e,
    0x103a1879,
    0x103a9888,
    0x103b18a4,
    0x103b98bf,
    0x103c18e5,
    0x103c80f7,
    0x103d18f6,
    0x103d990a,
    0x103e1929,
    0x103e9938,
    0x103f194f,
    0x103f9962,
    0x10400c4c,
    0x10409975,
    0x10411993,
    0x104199a6,
    0x104219c0,
    0x104299d0,
    0x104319e4,
    0x104399fa,
    0x10441a12,
    0x10449a27,
    0x10451a3b,
    0x10459a4d,
    0x10460625,
    0x10468977,
    0x10471a62,
    0x10479a79,
    0x10481a8e,
    0x10489a9c,
    0x10490e9b,
    0x104998d6,
    0x104a17a0,
    0x107c0f5d,
    0x14320c2f,
    0x14328c3d,
    0x14330c4c,
    0x14338c5e,
    0x143400b9,
    0x143480f7,
    0x18320090,
    0x18328fba,
    0x183300b9,
    0x18338fd0,
    0x18340fe4,
    0x183480f7,
    0x18351003,
    0x1835901b,
    0x18361030,
    0x18369044,
    0x1837107c,
    0x18379092,
    0x183810a6,
    0x183890b6,
    0x18390a9d,
    0x183990c6,
    0x183a10fb,
    0x183a9150,
    0x183b0ca7,
    0x183b919f,
    0x183c11b1,
    0x183c91bc,
    0x183d11cc,
    0x183d91dd,
    0x183e11ee,
    0x183e9200,
    0x183f1229,
    0x183f9242,
    0x1840125a,
    0x184086fd,
    0x18411173,
    0x1841913e,
    0x1842115d,
    0x18428c94,
    0x184310db,
    0x18439185,
    0x18440ff9,
    0x18449068,
    0x18fa10ec,
    0x18fa910f,
    0x18fb1124,
    0x20321294,
    0x20329281,
    0x243213a8,
    0x243289bd,
    0x243313ba,
    0x243393c7,
    0x243413d4,
    0x243493e6,
    0x243513f5,
    0x24359412,
    0x2436141f,
    0x2436942d,
    0x2437143b,
    0x24379449,
    0x24381452,
    0x2438945f,
    0x24391472,
    0x28320c7c,
    0x28328ca7,
    0x28330c4c,
    0x28338cba,
    0x28340c88,
    0x283480b9,
    0x283500f7,
    0x28358c94,
    0x2c323478,
    0x2c329489,
    0x2c333486,
    0x2c33b498,
    0x2c3434ac,
    0x2c34b4be,
    0x2c3534d9,
    0x2c35b4eb,
    0x2c36351b,
    0x2c36833a,
    0x2c373528,
    0x2c37b554,
    0x2c383579,
    0x2c38b590,
    0x2c3935ae,
    0x2c39b5be,
    0x2c3a35d0,
    0x2c3ab5e4,
    0x2c3b35f5,
    0x2c3bb614,
    0x2c3c149b,
    0x2c3c94b1,
    0x2c3d3628,
    0x2c3d94ca,
    0x2c3e3645,
    0x2c3eb653,
    0x2c3f366b,
    0x2c3fb683,
    0x2c4036ad,
    0x2c409294,
    0x2c4136be,
    0x2c41b6d1,
    0x2c42125a,
    0x2c42b6e2,
    0x2c43074a,
    0x2c43b606,
    0x2c443567,
    0x2c44b690,
    0x2c4534fe,
    0x2c45b53a,
    0x2c46359e,
    0x30320000,
    0x30328015,
    0x3033001f,
    0x30338038,
    0x30340057,
    0x30348071,
    0x30350078,
    0x30358090,
    0x303600a1,
    0x303680b9,
    0x303700c6,
    0x303780d5,
    0x303800f7,
    0x30388104,
    0x30390117,
    0x30398132,
    0x303a0147,
    0x303a815b,
    0x303b016f,
    0x303b8180,
    0x303c0199,
    0x303c81b6,
    0x303d01c4,
    0x303d81d8,
    0x303e01e8,
    0x303e8201,
    0x303f0211,
    0x303f8224,
    0x30400233,
    0x3040823f,
    0x30410254,
    0x30418264,
    0x3042027b,
    0x30428288,
    0x3043029b,
    0x304382aa,
    0x304402bf,
    0x304482e0,
    0x304502f3,
    0x30458306,
    0x3046031f,
    0x3046833a,
    0x30470372,
    0x30478384,
    0x30480392,
    0x304883a3,
    0x304903b2,
    0x304983ca,
    0x304a03dc,
    0x304a83f0,
    0x304b0408,
    0x304b841b,
    0x304c0426,
    0x304c8437,
    0x304d0443,
    0x304d8459,
    0x304e0467,
    0x304e847d,
    0x304f048f,
    0x304f84a1,
    0x305004c4,
    0x305084d7,
    0x305104e8,
    0x305184f8,
    0x30520510,
    0x30528525,
    0x3053053d,
    0x30538551,
    0x30540569,
    0x30548582,
    0x3055059b,
    0x305585b8,
    0x305605c3,
    0x305685db,
    0x305705eb,
    0x305785fc,
    0x3058060f,
    0x30588625,
    0x3059062e,
    0x30598643,
    0x305a0656,
    0x305a8665,
    0x305b0685,
    0x305b8694,
    0x305c06b5,
    0x305c86d1,
    0x305d06dd,
    0x305d86fd,
    0x305e0719,
    0x305e872a,
    0x305f0740,
    0x305f874a,
    0x306004b4,
    0x3060804a,
    0x30610357,
    0x34320b8d,
    0x34328ba1,
    0x34330bbe,
    0x34338bd1,
    0x34340be0,
    0x34348c19,
    0x34350bfd,
    0x3c320090,
    0x3c328ce4,
    0x3c330cfd,
    0x3c338d18,
    0x3c340d35,
    0x3c348d5f,
    0x3c350d7a,
    0x3c358da0,
    0x3c360db9,
    0x3c368dd1,
    0x3c370de2,
    0x3c378df0,
    0x3c380dfd,
    0x3c388e11,
    0x3c390ca7,
    0x3c398e34,
    0x3c3a0e48,
    0x3c3a8937,
    0x3c3b0e58,
    0x3c3b8e73,
    0x3c3c0e85,
    0x3c3c8eb8,
    0x3c3d0ec2,
    0x3c3d8ed6,
    0x3c3e0ee4,
    0x3c3e8f09,
    0x3c3f0cd0,
    0x3c3f8ef2,
    0x3c4000b9,
    0x3c4080f7,
    0x3c410d50,
    0x3c418d8f,
    0x3c420e9b,
    0x3c428e25,
    0x40321b2e,
    0x40329b44,
    0x40331b72,
    0x40339b7c,
    0x40341b93,
    0x40349bb1,
    0x40351bc1,
    0x40359bd3,
    0x40361be0,
    0x40369bec,
    0x40371c01,
    0x40379c13,
    0x40381c1e,
    0x40389c30,
    0x40390f4f,
    0x40399c40,
    0x403a1c53,
    0x403a9c74,
    0x403b1c85,
    0x403b9c95,
    0x403c0071,
    0x403c8090,
    0x403d1cf6,
    0x403d9d0c,
    0x403e1d1b,
    0x403e9d53,
    0x403f1d6d,
    0x403f9d95,
    0x40401daa,
    0x40409dbe,
    0x40411df9,
    0x40419e14,
    0x40421e2d,
    0x40429e40,
    0x40431e54,
    0x40439e82,
    0x40441e99,
    0x404480b9,
    0x40451eae,
    0x40459ec0,
    0x40461ee4,
    0x40469f04,
    0x40471f12,
    0x40479f39,
    0x40481faa,
    0x4048a064,
    0x4049207b,
    0x4049a095,
    0x404a20ac,
    0x404aa0ca,
    0x404b20e2,
    0x404ba10f,
    0x404c2125,
    0x404ca137,
    0x404d2158,
    0x404da191,
    0x404e21a5,
    0x404ea1b2,
    0x404f224c,
    0x404fa2c2,
    0x40502319,
    0x4050a32d,
    0x40512360,
    0x40522370,
    0x4052a394,
    0x405323ac,
    0x4053a3bf,
    0x405423d4,
    0x4054a3f7,
    0x40552422,
    0x4055a45f,
    0x40562484,
    0x4056a49d,
    0x405724b5,
    0x4057a4c8,
    0x405824dd,
    0x4058a504,
    0x40592533,
    0x4059a560,
    0x405a2574,
    0x405aa584,
    0x405b259c,
    0x405ba5ad,
    0x405c25c0,
    0x405ca5ff,
    0x405d260c,
    0x405da631,
    0x405e266f,
    0x405e8adb,
    0x405f26aa,
    0x405fa6b7,
    0x406026c5,
    0x4060a6e7,
    0x40612748,
    0x4061a780,
    0x40622797,
    0x4062a7a8,
    0x406327f5,
    0x4063a80a,
    0x40642821,
    0x4064a84d,
    0x40652868,
    0x4065a87f,
    0x40662897,
    0x4066a8c1,
    0x406728ec,
    0x4067a9c8,
    0x40682a10,
    0x4068aa31,
    0x40692a63,
    0x4069aa91,
    0x406a2ab2,
    0x406aaad2,
    0x406b2c5a,
    0x406bac7d,
    0x406c2c93,
    0x406caf9d,
    0x406d2fcc,
    0x406daff4,
    0x406e3022,
    0x406eb06f,
    0x406f30c8,
    0x406fb100,
    0x40703113,
    0x4070b130,
    0x4071082a,
    0x4071b142,
    0x40723155,
    0x4072b18b,
    0x407331a3,
    0x4073969b,
    0x407431b7,
    0x4074b1d1,
    0x407531e2,
    0x4075b1f6,
    0x40763204,
    0x4076945f,
    0x40773229,
    0x4077b269,
    0x40783284,
    0x4078b2bd,
    0x407932d4,
    0x4079b2ea,
    0x407a3316,
    0x407ab329,
    0x407b333e,
    0x407bb350,
    0x407c3381,
    0x407cb38a,
    0x407d2a4c,
    0x407da2d2,
    0x407e3299,
    0x407ea514,
    0x407f1f26,
    0x407fa0f9,
    0x4080225c,
    0x40809f4e,
    0x40812382,
    0x4081a200,
    0x4082300d,
    0x40829ca1,
    0x408324ef,
    0x4083a832,
    0x40841f62,
    0x4084a54c,
    0x408525d1,
    0x4085a70f,
    0x40862651,
    0x4086a2ec,
    0x40873053,
    0x4087a75d,
    0x40881cdf,
    0x4088a9db,
    0x40891d2e,
    0x40899cbb,
    0x408a2ccb,
    0x408a9ab3,
    0x408b3365,
    0x408bb0dd,
    0x408c25e1,
    0x408c9aeb,
    0x408d204a,
    0x408d9f94,
    0x408e217a,
    0x408ea43f,
    0x408f29ef,
    0x408fa72b,
    0x4090290d,
    0x4090a623,
    0x40912cb3,
    0x40919b11,
    0x40921d7b,
    0x4092b08e,
    0x4093316e,
    0x4093a2fd,
    0x40941f76,
    0x4094ace4,
    0x409527b9,
    0x4095b2f6,
    0x4096303a,
    0x4096a275,
    0x40972348,
    0x4097a1c9,
    0x40981ddb,
    0x4098a7cd,
    0x409930aa,
    0x4099a46c,
    0x409a2405,
    0x409a9acf,
    0x409b1fd0,
    0x409b9ffb,
    0x409c324b,
    0x409ca023,
    0x409d2231,
    0x409da216,
    0x409e1e6c,
    0x409ea2aa,
    0x409f2292,
    0x409f9fc3,
    0x40a02690,
    0x40a0a1e3,
    0x40fa29ae,
    0x40faa931,
    0x40fb298d,
    0x40fba94b,
    0x40fca96c,
    0x41f42b85,
    0x41f92c17,
    0x41fe2b0a,
    0x41feadc0,
    0x41ff2eee,
    0x42032b9e,
    0x42082bc0,
    0x4208abfc,
    0x42092aee,
    0x4209ac36,
    0x420a2b45,
    0x420aab25,
    0x420b2b65,
    0x420babde,
    0x420c2f0a,
    0x420cacf4,
    0x420d2da7,
    0x420dadde,
    0x42122e11,
    0x42172ed1,
    0x4217ae53,
    0x421c2e75,
    0x421f2e30,
    0x42212f82,
    0x42262eb4,
    0x422b2f60,
    0x422bad82,
    0x422c2f42,
    0x422cad35,
    0x422d2d0e,
    0x422daf21,
    0x422e2d61,
    0x42302e90,
    0x4230adf8,
    0x44320755,
    0x44328764,
    0x44330770,
    0x4433877e,
    0x44340791,
    0x443487a2,
    0x443507a9,
    0x443587b3,
    0x443607c6,
    0x443687dc,
    0x443707ee,
    0x443787fb,
    0x4438080a,
    0x44388812,
    0x4439082a,
    0x44398838,
    0x443a084b,
    0x48321489,
    0x4832949b,
    0x483314b1,
    0x483394ca,
    0x4c3214ef,
    0x4c3294ff,
    0x4c331512,
    0x4c339532,
    0x4c3400b9,
    0x4c3480f7,
    0x4c35153e,
    0x4c35954c,
    0x4c361568,
    0x4c36958e,
    0x4c37159d,
    0x4c3795ab,
    0x4c3815c0,
    0x4c3895cc,
    0x4c3915ec,
    0x4c399616,
    0x4c3a162f,
    0x4c3a9648,
    0x4c3b0625,
    0x4c3b9661,
    0x4c3c1673,
    0x4c3c9682,
    0x4c3d169b,
    0x4c3d8c6f,
    0x4c3e1708,
    0x4c3e96aa,
    0x4c3f172a,
    0x4c3f945f,
    0x4c4016c0,
    0x4c4094db,
    0x4c4116f8,
    0x4c41957b,
    0x4c4216e4,
    0x503236f4,
    0x5032b703,
    0x5033370e,
    0x5033b71e,
    0x50343737,
    0x5034b751,
    0x5035375f,
    0x5035b775,
    0x50363787,
    0x5036b79d,
    0x503737b6,
    0x5037b7c9,
    0x503837e1,
    0x5038b7f2,
    0x50393807,
    0x5039b81b,
    0x503a383b,
    0x503ab851,
    0x503b3869,
    0x503bb87b,
    0x503c3897,
    0x503cb8ae,
    0x503d38c7,
    0x503db8dd,
    0x503e38ea,
    0x503eb900,
    0x503f3912,
    0x503f83a3,
    0x50403925,
    0x5040b935,
    0x5041394f,
    0x5041b95e,
    0x50423978,
    0x5042b995,
    0x504339a5,
    0x5043b9b5,
    0x504439d2,
    0x50448459,
    0x504539e6,
    0x5045ba04,
    0x50463a17,
    0x5046ba2d,
    0x50473a3f,
    0x5047ba54,
    0x50483a7a,
    0x5048ba88,
    0x50493a9b,
    0x5049bab0,
    0x504a3ac6,
    0x504abad6,
    0x504b3af6,
    0x504bbb09,
    0x504c3b2c,
    0x504cbb5a,
    0x504d3b87,
    0x504dbba4,
    0x504e3bbf,
    0x504ebbdb,
    0x504f3bed,
    0x504fbc04,
    0x50503c13,
    0x50508719,
    0x50513c26,
    0x5051b9c4,
    0x50523b6c,
    0x58320fa2,
    0x5c3292a0,
    0x5c3312b9,
    0x5c3392c4,
    0x5c3412de,
    0x5c3492f1,
    0x5c36130a,
    0x5c379329,
    0x5c38134e,
    0x5c3a9362,
    0x5c3b1374,
    0x5c3b9391,
    0x5c3c1294,
    0x5c41131b,
    0x68320f4f,
    0x68328ca7,
    0x68330cba,
    0x68338f72,
    0x68340f82,
    0x683480f7,
    0x68668f5d,
    0x6c320f15,
    0x6c328c5e,
    0x6c330f20,
    0x6c338f39,
    0x74320a43,
    0x743280b9,
    0x74330c6f,
    0x783209a8,
    0x783289bd,
    0x783309c9,
    0x78338090,
    0x783409d8,
    0x783489ed,
    0x78350a0c,
    0x78358a2e,
    0x78360a43,
    0x78368a59,
    0x78370a69,
    0x78378a8a,
    0x78380a9d,
    0x78388aaf,
    0x78390abc,
    0x78398adb,
    0x783a0af0,
    0x783a8afe,
    0x783b0b08,
    0x783b8b1c,
    0x783c0b33,
    0x783c8b48,
    0x783d0b5f,
    0x783d8b74,
    0x783e0aca,
    0x783e8a7c,
    0x7c321270,
    0x8032158e,
    0x80328090,
    0x80333447,
    0x803380b9,
    0x80343456,
    0x8034b3be,
    0x803533dc,
    0x8035b46a,
    0x8036341e,
    0x8036b3cd,
    0x80373410,
    0x8037b3ab,
    0x80383431,
    0x8038b3ed,
    0x80393402,
};

const size_t kOpenSSLReasonValuesLen = sizeof(kOpenSSLReasonValues) / sizeof(kOpenSSLReasonValues[0]);

const char kOpenSSLReasonStringData[] =
    "ASN1_LENGTH_MISMATCH\0"
    "AUX_ERROR\0"
    "BAD_GET_ASN1_OBJECT_CALL\0"
    "BAD_OBJECT_HEADER\0"
    "BAD_TEMPLATE\0"
    "BMPSTRING_IS_WRONG_LENGTH\0"
    "BN_LIB\0"
    "BOOLEAN_IS_WRONG_LENGTH\0"
    "BUFFER_TOO_SMALL\0"
    "CONTEXT_NOT_INITIALISED\0"
    "DECODE_ERROR\0"
    "DEPTH_EXCEEDED\0"
    "DIGEST_AND_KEY_TYPE_NOT_SUPPORTED\0"
    "ENCODE_ERROR\0"
    "ERROR_GETTING_TIME\0"
    "EXPECTING_AN_ASN1_SEQUENCE\0"
    "EXPECTING_AN_INTEGER\0"
    "EXPECTING_AN_OBJECT\0"
    "EXPECTING_A_BOOLEAN\0"
    "EXPECTING_A_TIME\0"
    "EXPLICIT_LENGTH_MISMATCH\0"
    "EXPLICIT_TAG_NOT_CONSTRUCTED\0"
    "FIELD_MISSING\0"
    "FIRST_NUM_TOO_LARGE\0"
    "HEADER_TOO_LONG\0"
    "ILLEGAL_BITSTRING_FORMAT\0"
    "ILLEGAL_BOOLEAN\0"
    "ILLEGAL_CHARACTERS\0"
    "ILLEGAL_FORMAT\0"
    "ILLEGAL_HEX\0"
    "ILLEGAL_IMPLICIT_TAG\0"
    "ILLEGAL_INTEGER\0"
    "ILLEGAL_NESTED_TAGGING\0"
    "ILLEGAL_NULL\0"
    "ILLEGAL_NULL_VALUE\0"
    "ILLEGAL_OBJECT\0"
    "ILLEGAL_OPTIONAL_ANY\0"
    "ILLEGAL_OPTIONS_ON_ITEM_TEMPLATE\0"
    "ILLEGAL_TAGGED_ANY\0"
    "ILLEGAL_TIME_VALUE\0"
    "INTEGER_NOT_ASCII_FORMAT\0"
    "INTEGER_TOO_LARGE_FOR_LONG\0"
    "INVALID_BIT_STRING_BITS_LEFT\0"
    "INVALID_BIT_STRING_PADDING\0"
    "INVALID_BMPSTRING\0"
    "INVALID_DIGIT\0"
    "INVALID_MODIFIER\0"
    "INVALID_NUMBER\0"
    "INVALID_OBJECT_ENCODING\0"
    "INVALID_SEPARATOR\0"
    "INVALID_TIME_FORMAT\0"
    "INVALID_UNIVERSALSTRING\0"
    "INVALID_UTF8STRING\0"
    "LIST_ERROR\0"
    "MISSING_ASN1_EOS\0"
    "MISSING_EOC\0"
    "MISSING_SECOND_NUMBER\0"
    "MISSING_VALUE\0"
    "MSTRING_NOT_UNIVERSAL\0"
    "MSTRING_WRONG_TAG\0"
    "NESTED_ASN1_ERROR\0"
    "NESTED_ASN1_STRING\0"
    "NESTED_TOO_DEEP\0"
    "NON_HEX_CHARACTERS\0"
    "NOT_ASCII_FORMAT\0"
    "NOT_ENOUGH_DATA\0"
    "NO_MATCHING_CHOICE_TYPE\0"
    "NULL_IS_WRONG_LENGTH\0"
    "OBJECT_NOT_ASCII_FORMAT\0"
    "ODD_NUMBER_OF_CHARS\0"
    "SECOND_NUMBER_TOO_LARGE\0"
    "SEQUENCE_LENGTH_MISMATCH\0"
    "SEQUENCE_NOT_CONSTRUCTED\0"
    "SEQUENCE_OR_SET_NEEDS_CONFIG\0"
    "SHORT_LINE\0"
    "STREAMING_NOT_SUPPORTED\0"
    "STRING_TOO_LONG\0"
    "STRING_TOO_SHORT\0"
    "TAG_VALUE_TOO_HIGH\0"
    "TIME_NOT_ASCII_FORMAT\0"
    "TOO_LONG\0"
    "TYPE_NOT_CONSTRUCTED\0"
    "TYPE_NOT_PRIMITIVE\0"
    "UNEXPECTED_EOC\0"
    "UNIVERSALSTRING_IS_WRONG_LENGTH\0"
    "UNKNOWN_FORMAT\0"
    "UNKNOWN_MESSAGE_DIGEST_ALGORITHM\0"
    "UNKNOWN_SIGNATURE_ALGORITHM\0"
    "UNKNOWN_TAG\0"
    "UNSUPPORTED_ANY_DEFINED_BY_TYPE\0"
    "UNSUPPORTED_PUBLIC_KEY_TYPE\0"
    "UNSUPPORTED_TYPE\0"
    "WRONG_PUBLIC_KEY_TYPE\0"
    "WRONG_TAG\0"
    "WRONG_TYPE\0"
    "BAD_FOPEN_MODE\0"
    "BROKEN_PIPE\0"
    "CONNECT_ERROR\0"
    "ERROR_SETTING_NBIO\0"
    "INVALID_ARGUMENT\0"
    "IN_USE\0"
    "KEEPALIVE\0"
    "NBIO_CONNECT_ERROR\0"
    "NO_HOSTNAME_SPECIFIED\0"
    "NO_PORT_SPECIFIED\0"
    "NO_SUCH_FILE\0"
    "NULL_PARAMETER\0"
    "SYS_LIB\0"
    "UNABLE_TO_CREATE_SOCKET\0"
    "UNINITIALIZED\0"
    "UNSUPPORTED_METHOD\0"
    "WRITE_TO_READ_ONLY_BIO\0"
    "ARG2_LT_ARG3\0"
    "BAD_ENCODING\0"
    "BAD_RECIPROCAL\0"
    "BIGNUM_TOO_LONG\0"
    "BITS_TOO_SMALL\0"
    "CALLED_WITH_EVEN_MODULUS\0"
    "DIV_BY_ZERO\0"
    "EXPAND_ON_STATIC_BIGNUM_DATA\0"
    "INPUT_NOT_REDUCED\0"
    "INVALID_INPUT\0"
    "INVALID_RANGE\0"
    "NEGATIVE_NUMBER\0"
    "NOT_A_SQUARE\0"
    "NOT_INITIALIZED\0"
    "NO_INVERSE\0"
    "PRIVATE_KEY_TOO_LARGE\0"
    "P_IS_NOT_PRIME\0"
    "TOO_MANY_ITERATIONS\0"
    "TOO_MANY_TEMPORARY_VARIABLES\0"
    "AES_KEY_SETUP_FAILED\0"
    "BAD_DECRYPT\0"
    "BAD_KEY_LENGTH\0"
    "CTRL_NOT_IMPLEMENTED\0"
    "CTRL_OPERATION_NOT_IMPLEMENTED\0"
    "DATA_NOT_MULTIPLE_OF_BLOCK_LENGTH\0"
    "INITIALIZATION_ERROR\0"
    "INPUT_NOT_INITIALIZED\0"
    "INVALID_AD_SIZE\0"
    "INVALID_KEY_LENGTH\0"
    "INVALID_NONCE\0"
    "INVALID_NONCE_SIZE\0"
    "INVALID_OPERATION\0"
    "IV_TOO_LARGE\0"
    "NO_CIPHER_SET\0"
    "NO_DIRECTION_SET\0"
    "OUTPUT_ALIASES_INPUT\0"
    "TAG_TOO_LARGE\0"
    "TOO_LARGE\0"
    "UNSUPPORTED_AD_SIZE\0"
    "UNSUPPORTED_INPUT_SIZE\0"
    "UNSUPPORTED_KEY_SIZE\0"
    "UNSUPPORTED_NONCE_SIZE\0"
    "UNSUPPORTED_TAG_SIZE\0"
    "WRONG_FINAL_BLOCK_LENGTH\0"
    "LIST_CANNOT_BE_NULL\0"
    "MISSING_CLOSE_SQUARE_BRACKET\0"
    "MISSING_EQUAL_SIGN\0"
    "NO_CLOSE_BRACE\0"
    "UNABLE_TO_CREATE_NEW_SECTION\0"
    "VARIABLE_EXPANSION_TOO_LONG\0"
    "VARIABLE_HAS_NO_VALUE\0"
    "BAD_GENERATOR\0"
    "INVALID_PUBKEY\0"
    "MODULUS_TOO_LARGE\0"
    "NO_PRIVATE_VALUE\0"
    "UNKNOWN_HASH\0"
    "BAD_Q_VALUE\0"
    "BAD_VERSION\0"
    "INVALID_PARAMETERS\0"
    "MISSING_PARAMETERS\0"
    "NEED_NEW_SETUP_VALUES\0"
    "BIGNUM_OUT_OF_RANGE\0"
    "COORDINATES_OUT_OF_RANGE\0"
    "D2I_ECPKPARAMETERS_FAILURE\0"
    "EC_GROUP_NEW_BY_NAME_FAILURE\0"
    "GROUP2PKPARAMETERS_FAILURE\0"
    "GROUP_MISMATCH\0"
    "I2D_ECPKPARAMETERS_FAILURE\0"
    "INCOMPATIBLE_OBJECTS\0"
    "INVALID_COFACTOR\0"
    "INVALID_COMPRESSED_POINT\0"
    "INVALID_COMPRESSION_BIT\0"
    "INVALID_ENCODING\0"
    "INVALID_FIELD\0"
    "INVALID_FORM\0"
    "INVALID_GROUP_ORDER\0"
    "INVALID_PRIVATE_KEY\0"
    "INVALID_SCALAR\0"
    "MISSING_PRIVATE_KEY\0"
    "NON_NAMED_CURVE\0"
    "PKPARAMETERS2GROUP_FAILURE\0"
    "POINT_AT_INFINITY\0"
    "POINT_IS_NOT_ON_CURVE\0"
    "PUBLIC_KEY_VALIDATION_FAILED\0"
    "SLOT_FULL\0"
    "UNDEFINED_GENERATOR\0"
    "UNKNOWN_GROUP\0"
    "UNKNOWN_ORDER\0"
    "WRONG_CURVE_PARAMETERS\0"
    "WRONG_ORDER\0"
    "KDF_FAILED\0"
    "POINT_ARITHMETIC_FAILURE\0"
    "UNKNOWN_DIGEST_LENGTH\0"
    "BAD_SIGNATURE\0"
    "MISMATCHED_SIGNATURE\0"
    "NOT_IMPLEMENTED\0"
    "RANDOM_NUMBER_GENERATION_FAILED\0"
    "OPERATION_NOT_SUPPORTED\0"
    "COMMAND_NOT_SUPPORTED\0"
    "DIFFERENT_KEY_TYPES\0"
    "DIFFERENT_PARAMETERS\0"
    "EMPTY_PSK\0"
    "EXPECTING_AN_EC_KEY_KEY\0"
    "EXPECTING_AN_RSA_KEY\0"
    "EXPECTING_A_DSA_KEY\0"
    "ILLEGAL_OR_UNSUPPORTED_PADDING_MODE\0"
    "INVALID_BUFFER_SIZE\0"
    "INVALID_DIGEST_LENGTH\0"
    "INVALID_DIGEST_TYPE\0"
    "INVALID_KEYBITS\0"
    "INVALID_MGF1_MD\0"
    "INVALID_PADDING_MODE\0"
    "INVALID_PEER_KEY\0"
    "INVALID_PSS_MD\0"
    "INVALID_PSS_SALTLEN\0"
    "INVALID_PSS_SALT_LEN\0"
    "INVALID_PSS_TRAILER_FIELD\0"
    "INVALID_SIGNATURE\0"
    "KEYS_NOT_SET\0"
    "MEMORY_LIMIT_EXCEEDED\0"
    "NOT_A_PRIVATE_KEY\0"
    "NOT_XOF_OR_INVALID_LENGTH\0"
    "NO_DEFAULT_DIGEST\0"
    "NO_KEY_SET\0"
    "NO_MDC2_SUPPORT\0"
    "NO_NID_FOR_CURVE\0"
    "NO_OPERATION_SET\0"
    "NO_PARAMETERS_SET\0"
    "OPERATION_NOT_SUPPORTED_FOR_THIS_KEYTYPE\0"
    "OPERATON_NOT_INITIALIZED\0"
    "UNKNOWN_PUBLIC_KEY_TYPE\0"
    "UNSUPPORTED_ALGORITHM\0"
    "OUTPUT_TOO_LARGE\0"
    "INVALID_OID_STRING\0"
    "UNKNOWN_NID\0"
    "CERTIFICATE_VERIFY_ERROR\0"
    "DIGEST_ERR\0"
    "MISSING_OCSPSIGNING_USAGE\0"
    "NOT_BASIC_RESPONSE\0"
    "NO_CERTIFICATES_IN_CHAIN\0"
    "NO_RESPONSE_DATA\0"
    "NO_SIGNER_KEY\0"
    "RESPONSE_CONTAINS_NO_REVOCATION_DATA\0"
    "ROOT_CA_NOT_TRUSTED\0"
    "SIGNATURE_FAILURE\0"
    "SIGNER_CERTIFICATE_NOT_FOUND\0"
    "UNKNOWN_MESSAGE_DIGEST\0"
    "BAD_BASE64_DECODE\0"
    "BAD_END_LINE\0"
    "BAD_IV_CHARS\0"
    "BAD_PASSWORD_READ\0"
    "CIPHER_IS_NULL\0"
    "ERROR_CONVERTING_PRIVATE_KEY\0"
    "NOT_DEK_INFO\0"
    "NOT_ENCRYPTED\0"
    "NOT_PROC_TYPE\0"
    "NO_START_LINE\0"
    "READ_KEY\0"
    "SHORT_HEADER\0"
    "UNSUPPORTED_CIPHER\0"
    "UNSUPPORTED_ENCRYPTION\0"
    "BAD_PKCS7_VERSION\0"
    "NOT_PKCS7_SIGNED_DATA\0"
    "NO_CERTIFICATES_INCLUDED\0"
    "NO_CRLS_INCLUDED\0"
    "BAD_ITERATION_COUNT\0"
    "BAD_PKCS12_DATA\0"
    "BAD_PKCS12_VERSION\0"
    "CIPHER_HAS_NO_OBJECT_IDENTIFIER\0"
    "CRYPT_ERROR\0"
    "ENCRYPT_ERROR\0"
    "ERROR_SETTING_CIPHER_PARAMS\0"
    "INCORRECT_PASSWORD\0"
    "INVALID_CHARACTERS\0"
    "KEYGEN_FAILURE\0"
    "KEY_GEN_ERROR\0"
    "METHOD_NOT_SUPPORTED\0"
    "MISSING_MAC\0"
    "MULTIPLE_PRIVATE_KEYS_IN_PKCS12\0"
    "PKCS12_PUBLIC_KEY_INTEGRITY_NOT_SUPPORTED\0"
    "PKCS12_TOO_DEEPLY_NESTED\0"
    "PRIVATE_KEY_DECODE_ERROR\0"
    "PRIVATE_KEY_ENCODE_ERROR\0"
    "UNKNOWN_ALGORITHM\0"
    "UNKNOWN_CIPHER\0"
    "UNKNOWN_CIPHER_ALGORITHM\0"
    "UNKNOWN_DIGEST\0"
    "UNSUPPORTED_KEYLENGTH\0"
    "UNSUPPORTED_KEY_DERIVATION_FUNCTION\0"
    "UNSUPPORTED_OPTIONS\0"
    "UNSUPPORTED_PRF\0"
    "UNSUPPORTED_PRIVATE_KEY_ALGORITHM\0"
    "UNSUPPORTED_SALT_TYPE\0"
    "BAD_E_VALUE\0"
    "BAD_FIXED_HEADER_DECRYPT\0"
    "BAD_PAD_BYTE_COUNT\0"
    "BAD_RSA_PARAMETERS\0"
    "BLOCK_TYPE_IS_NOT_01\0"
    "BLOCK_TYPE_IS_NOT_02\0"
    "BN_NOT_INITIALIZED\0"
    "CANNOT_RECOVER_MULTI_PRIME_KEY\0"
    "CRT_PARAMS_ALREADY_GIVEN\0"
    "CRT_VALUES_INCORRECT\0"
    "DATA_LEN_NOT_EQUAL_TO_MOD_LEN\0"
    "DATA_TOO_LARGE\0"
    "DATA_TOO_LARGE_FOR_KEY_SIZE\0"
    "DATA_TOO_LARGE_FOR_MODULUS\0"
    "DATA_TOO_SMALL\0"
    "DATA_TOO_SMALL_FOR_KEY_SIZE\0"
    "DIGEST_TOO_BIG_FOR_RSA_KEY\0"
    "D_E_NOT_CONGRUENT_TO_1\0"
    "D_OUT_OF_RANGE\0"
    "EMPTY_PUBLIC_KEY\0"
    "FIRST_OCTET_INVALID\0"
    "INCONSISTENT_SET_OF_CRT_VALUES\0"
    "INTERNAL_ERROR\0"
    "INVALID_MESSAGE_LENGTH\0"
    "KEY_SIZE_TOO_SMALL\0"
    "LAST_OCTET_INVALID\0"
    "MUST_HAVE_AT_LEAST_TWO_PRIMES\0"
    "NO_PUBLIC_EXPONENT\0"
    "NULL_BEFORE_BLOCK_MISSING\0"
    "N_NOT_EQUAL_P_Q\0"
    "OAEP_DECODING_ERROR\0"
    "ONLY_ONE_OF_P_Q_GIVEN\0"
    "OUTPUT_BUFFER_TOO_SMALL\0"
    "PADDING_CHECK_FAILED\0"
    "PKCS_DECODING_ERROR\0"
    "SLEN_CHECK_FAILED\0"
    "SLEN_RECOVERY_FAILED\0"
    "UNKNOWN_ALGORITHM_TYPE\0"
    "UNKNOWN_PADDING_TYPE\0"
    "VALUE_MISSING\0"
    "WRONG_SIGNATURE_LENGTH\0"
    "ALPN_MISMATCH_ON_EARLY_DATA\0"
    "ALPS_MISMATCH_ON_EARLY_DATA\0"
    "APPLICATION_DATA_INSTEAD_OF_HANDSHAKE\0"
    "APPLICATION_DATA_ON_SHUTDOWN\0"
    "APP_DATA_IN_HANDSHAKE\0"
    "ATTEMPT_TO_REUSE_SESSION_IN_DIFFERENT_CONTEXT\0"
    "BAD_ALERT\0"
    "BAD_CHANGE_CIPHER_SPEC\0"
    "BAD_DATA_RETURNED_BY_CALLBACK\0"
    "BAD_DH_P_LENGTH\0"
    "BAD_DIGEST_LENGTH\0"
    "BAD_ECC_CERT\0"
    "BAD_ECPOINT\0"
    "BAD_HANDSHAKE_RECORD\0"
    "BAD_HELLO_REQUEST\0"
    "BAD_LENGTH\0"
    "BAD_PACKET_LENGTH\0"
    "BAD_RSA_ENCRYPT\0"
    "BAD_SRTP_MKI_VALUE\0"
    "BAD_SRTP_PROTECTION_PROFILE_LIST\0"
    "BAD_SSL_FILETYPE\0"
    "BAD_WRITE_RETRY\0"
    "BIO_NOT_SET\0"
    "BLOCK_CIPHER_PAD_IS_WRONG\0"
    "CANNOT_HAVE_BOTH_PRIVKEY_AND_METHOD\0"
    "CANNOT_PARSE_LEAF_CERT\0"
    "CA_DN_LENGTH_MISMATCH\0"
    "CA_DN_TOO_LONG\0"
    "CCS_RECEIVED_EARLY\0"
    "CERTIFICATE_AND_PRIVATE_KEY_MISMATCH\0"
    "CERTIFICATE_VERIFY_FAILED\0"
    "CERT_CB_ERROR\0"
    "CERT_DECOMPRESSION_FAILED\0"
    "CERT_LENGTH_MISMATCH\0"
    "CHANNEL_ID_NOT_P256\0"
    "CHANNEL_ID_SIGNATURE_INVALID\0"
    "CIPHER_MISMATCH_ON_EARLY_DATA\0"
    "CIPHER_OR_HASH_UNAVAILABLE\0"
    "CLIENTHELLO_PARSE_FAILED\0"
    "CLIENTHELLO_TLSEXT\0"
    "CONNECTION_REJECTED\0"
    "CONNECTION_TYPE_NOT_SET\0"
    "COULD_NOT_PARSE_HINTS\0"
    "CUSTOM_EXTENSION_ERROR\0"
    "DATA_LENGTH_TOO_LONG\0"
    "DECRYPTION_FAILED\0"
    "DECRYPTION_FAILED_OR_BAD_RECORD_MAC\0"
    "DH_PUBLIC_VALUE_LENGTH_IS_WRONG\0"
    "DH_P_TOO_LONG\0"
    "DIGEST_CHECK_FAILED\0"
    "DOWNGRADE_DETECTED\0"
    "DTLS_MESSAGE_TOO_BIG\0"
    "DUPLICATE_EXTENSION\0"
    "DUPLICATE_KEY_SHARE\0"
    "DUPLICATE_SIGNATURE_ALGORITHM\0"
    "EARLY_DATA_NOT_IN_USE\0"
    "ECC_CERT_NOT_FOR_SIGNING\0"
    "ECH_REJECTED\0"
    "ECH_SERVER_CONFIG_AND_PRIVATE_KEY_MISMATCH\0"
    "ECH_SERVER_CONFIG_UNSUPPORTED_EXTENSION\0"
    "ECH_SERVER_WOULD_HAVE_NO_RETRY_CONFIGS\0"
    "EMPTY_HELLO_RETRY_REQUEST\0"
    "EMS_STATE_INCONSISTENT\0"
    "ENCRYPTED_LENGTH_TOO_LONG\0"
    "ERROR_ADDING_EXTENSION\0"
    "ERROR_IN_RECEIVED_CIPHER_LIST\0"
    "ERROR_PARSING_EXTENSION\0"
    "EXCESSIVE_MESSAGE_SIZE\0"
    "EXCESS_HANDSHAKE_DATA\0"
    "EXTRA_DATA_IN_MESSAGE\0"
    "FRAGMENT_MISMATCH\0"
    "GOT_NEXT_PROTO_WITHOUT_EXTENSION\0"
    "HANDSHAKE_FAILURE_ON_CLIENT_HELLO\0"
    "HANDSHAKE_NOT_COMPLETE\0"
    "HTTPS_PROXY_REQUEST\0"
    "HTTP_REQUEST\0"
    "INAPPROPRIATE_FALLBACK\0"
    "INCONSISTENT_CLIENT_HELLO\0"
    "INCONSISTENT_ECH_NEGOTIATION\0"
    "INVALID_ALPN_PROTOCOL\0"
    "INVALID_ALPN_PROTOCOL_LIST\0"
    "INVALID_CLIENT_HELLO_INNER\0"
    "INVALID_COMMAND\0"
    "INVALID_COMPRESSION_LIST\0"
    "INVALID_DELEGATED_CREDENTIAL\0"
    "INVALID_ECH_CONFIG_LIST\0"
    "INVALID_ECH_PUBLIC_NAME\0"
    "INVALID_MESSAGE\0"
    "INVALID_OUTER_RECORD_TYPE\0"
    "INVALID_SCT_LIST\0"
    "INVALID_SIGNATURE_ALGORITHM\0"
    "INVALID_SSL_SESSION\0"
    "INVALID_TICKET_KEYS_LENGTH\0"
    "KEY_USAGE_BIT_INCORRECT\0"
    "LENGTH_MISMATCH\0"
    "MISSING_EXTENSION\0"
    "MISSING_KEY_SHARE\0"
    "MISSING_RSA_CERTIFICATE\0"
    "MISSING_TMP_DH_KEY\0"
    "MISSING_TMP_ECDH_KEY\0"
    "MIXED_SPECIAL_OPERATOR_WITH_GROUPS\0"
    "MTU_TOO_SMALL\0"
    "NEGOTIATED_ALPS_WITHOUT_ALPN\0"
    "NEGOTIATED_BOTH_NPN_AND_ALPN\0"
    "NEGOTIATED_TB_WITHOUT_EMS_OR_RI\0"
    "NESTED_GROUP\0"
    "NO_APPLICATION_PROTOCOL\0"
    "NO_CERTIFICATES_RETURNED\0"
    "NO_CERTIFICATE_ASSIGNED\0"
    "NO_CERTIFICATE_SET\0"
    "NO_CIPHERS_AVAILABLE\0"
    "NO_CIPHERS_PASSED\0"
    "NO_CIPHERS_SPECIFIED\0"
    "NO_CIPHER_MATCH\0"
    "NO_COMMON_SIGNATURE_ALGORITHMS\0"
    "NO_COMPRESSION_SPECIFIED\0"
    "NO_GROUPS_SPECIFIED\0"
    "NO_METHOD_SPECIFIED\0"
    "NO_P256_SUPPORT\0"
    "NO_PRIVATE_KEY_ASSIGNED\0"
    "NO_RENEGOTIATION\0"
    "NO_REQUIRED_DIGEST\0"
    "NO_SHARED_CIPHER\0"
    "NO_SHARED_GROUP\0"
    "NO_SUPPORTED_VERSIONS_ENABLED\0"
    "NULL_SSL_CTX\0"
    "NULL_SSL_METHOD_PASSED\0"
    "OCSP_CB_ERROR\0"
    "OLD_SESSION_CIPHER_NOT_RETURNED\0"
    "OLD_SESSION_PRF_HASH_MISMATCH\0"
    "OLD_SESSION_VERSION_NOT_RETURNED\0"
    "OUTER_EXTENSION_NOT_FOUND\0"
    "PARSE_TLSEXT\0"
    "PATH_TOO_LONG\0"
    "PEER_DID_NOT_RETURN_A_CERTIFICATE\0"
    "PEER_ERROR_UNSUPPORTED_CERTIFICATE_TYPE\0"
    "PRE_SHARED_KEY_MUST_BE_LAST\0"
    "PRIVATE_KEY_OPERATION_FAILED\0"
    "PROTOCOL_IS_SHUTDOWN\0"
    "PSK_IDENTITY_BINDER_COUNT_MISMATCH\0"
    "PSK_IDENTITY_NOT_FOUND\0"
    "PSK_NO_CLIENT_CB\0"
    "PSK_NO_SERVER_CB\0"
    "QUIC_INTERNAL_ERROR\0"
    "QUIC_TRANSPORT_PARAMETERS_MISCONFIGURED\0"
    "READ_TIMEOUT_EXPIRED\0"
    "RECORD_LENGTH_MISMATCH\0"
    "RECORD_TOO_LARGE\0"
    "RENEGOTIATION_EMS_MISMATCH\0"
    "RENEGOTIATION_ENCODING_ERR\0"
    "RENEGOTIATION_MISMATCH\0"
    "REQUIRED_CIPHER_MISSING\0"
    "RESUMED_EMS_SESSION_WITHOUT_EMS_EXTENSION\0"
    "RESUMED_NON_EMS_SESSION_WITH_EMS_EXTENSION\0"
    "SCSV_RECEIVED_WHEN_RENEGOTIATING\0"
    "SECOND_SERVERHELLO_VERSION_MISMATCH\0"
    "SERIALIZATION_INVALID_SSL\0"
    "SERIALIZATION_INVALID_SSL3_STATE\0"
    "SERIALIZATION_INVALID_SSL_BUFFER\0"
    "SERIALIZATION_INVALID_SSL_CONFIG\0"
    "SERIALIZATION_UNSUPPORTED\0"
    "SERVERHELLO_TLSEXT\0"
    "SERVER_CERT_CHANGED\0"
    "SERVER_ECHOED_INVALID_SESSION_ID\0"
    "SESSION_ID_CONTEXT_UNINITIALIZED\0"
    "SESSION_MAY_NOT_BE_CREATED\0"
    "SHUTDOWN_WHILE_IN_INIT\0"
    "SIGNATURE_ALGORITHMS_EXTENSION_SENT_BY_SERVER\0"
    "SRTP_COULD_NOT_ALLOCATE_PROFILES\0"
    "SRTP_UNKNOWN_PROTECTION_PROFILE\0"
    "SSL3_EXT_INVALID_SERVERNAME\0"
    "SSLV3_ALERT_BAD_CERTIFICATE\0"
    "SSLV3_ALERT_BAD_RECORD_MAC\0"
    "SSLV3_ALERT_CERTIFICATE_EXPIRED\0"
    "SSLV3_ALERT_CERTIFICATE_REVOKED\0"
    "SSLV3_ALERT_CERTIFICATE_UNKNOWN\0"
    "SSLV3_ALERT_CLOSE_NOTIFY\0"
    "SSLV3_ALERT_DECOMPRESSION_FAILURE\0"
    "SSLV3_ALERT_HANDSHAKE_FAILURE\0"
    "SSLV3_ALERT_ILLEGAL_PARAMETER\0"
    "SSLV3_ALERT_NO_CERTIFICATE\0"
    "SSLV3_ALERT_UNEXPECTED_MESSAGE\0"
    "SSLV3_ALERT_UNSUPPORTED_CERTIFICATE\0"
    "SSL_CTX_HAS_NO_DEFAULT_SSL_VERSION\0"
    "SSL_HANDSHAKE_FAILURE\0"
    "SSL_SESSION_ID_CONTEXT_TOO_LONG\0"
    "SSL_SESSION_ID_TOO_LONG\0"
    "TICKET_ENCRYPTION_FAILED\0"
    "TLS13_DOWNGRADE\0"
    "TLSV1_ALERT_ACCESS_DENIED\0"
    "TLSV1_ALERT_BAD_CERTIFICATE_HASH_VALUE\0"
    "TLSV1_ALERT_BAD_CERTIFICATE_STATUS_RESPONSE\0"
    "TLSV1_ALERT_CERTIFICATE_REQUIRED\0"
    "TLSV1_ALERT_CERTIFICATE_UNOBTAINABLE\0"
    "TLSV1_ALERT_DECODE_ERROR\0"
    "TLSV1_ALERT_DECRYPTION_FAILED\0"
    "TLSV1_ALERT_DECRYPT_ERROR\0"
    "TLSV1_ALERT_ECH_REQUIRED\0"
    "TLSV1_ALERT_EXPORT_RESTRICTION\0"
    "TLSV1_ALERT_INAPPROPRIATE_FALLBACK\0"
    "TLSV1_ALERT_INSUFFICIENT_SECURITY\0"
    "TLSV1_ALERT_INTERNAL_ERROR\0"
    "TLSV1_ALERT_NO_APPLICATION_PROTOCOL\0"
    "TLSV1_ALERT_NO_RENEGOTIATION\0"
    "TLSV1_ALERT_PROTOCOL_VERSION\0"
    "TLSV1_ALERT_RECORD_OVERFLOW\0"
    "TLSV1_ALERT_UNKNOWN_CA\0"
    "TLSV1_ALERT_UNKNOWN_PSK_IDENTITY\0"
    "TLSV1_ALERT_UNRECOGNIZED_NAME\0"
    "TLSV1_ALERT_UNSUPPORTED_EXTENSION\0"
    "TLSV1_ALERT_USER_CANCELLED\0"
    "TLS_PEER_DID_NOT_RESPOND_WITH_CERTIFICATE_LIST\0"
    "TLS_RSA_ENCRYPTED_VALUE_LENGTH_IS_WRONG\0"
    "TOO_MANY_EMPTY_FRAGMENTS\0"
    "TOO_MANY_KEY_UPDATES\0"
    "TOO_MANY_WARNING_ALERTS\0"
    "TOO_MUCH_READ_EARLY_DATA\0"
    "TOO_MUCH_SKIPPED_EARLY_DATA\0"
    "UNABLE_TO_FIND_ECDH_PARAMETERS\0"
    "UNCOMPRESSED_CERT_TOO_LARGE\0"
    "UNEXPECTED_COMPATIBILITY_MODE\0"
    "UNEXPECTED_EXTENSION\0"
    "UNEXPECTED_EXTENSION_ON_EARLY_DATA\0"
    "UNEXPECTED_MESSAGE\0"
    "UNEXPECTED_OPERATOR_IN_GROUP\0"
    "UNEXPECTED_RECORD\0"
    "UNKNOWN_ALERT_TYPE\0"
    "UNKNOWN_CERTIFICATE_TYPE\0"
    "UNKNOWN_CERT_COMPRESSION_ALG\0"
    "UNKNOWN_CIPHER_RETURNED\0"
    "UNKNOWN_CIPHER_TYPE\0"
    "UNKNOWN_KEY_EXCHANGE_TYPE\0"
    "UNKNOWN_PROTOCOL\0"
    "UNKNOWN_SSL_VERSION\0"
    "UNKNOWN_STATE\0"
    "UNSAFE_LEGACY_RENEGOTIATION_DISABLED\0"
    "UNSUPPORTED_COMPRESSION_ALGORITHM\0"
    "UNSUPPORTED_ECH_SERVER_CONFIG\0"
    "UNSUPPORTED_ELLIPTIC_CURVE\0"
    "UNSUPPORTED_PROTOCOL\0"
    "UNSUPPORTED_PROTOCOL_FOR_CUSTOM_KEY\0"
    "WRONG_CERTIFICATE_TYPE\0"
    "WRONG_CIPHER_RETURNED\0"
    "WRONG_CURVE\0"
    "WRONG_ENCRYPTION_LEVEL_RECEIVED\0"
    "WRONG_MESSAGE_TYPE\0"
    "WRONG_SIGNATURE_TYPE\0"
    "WRONG_SSL_VERSION\0"
    "WRONG_VERSION_NUMBER\0"
    "WRONG_VERSION_ON_EARLY_DATA\0"
    "X509_LIB\0"
    "X509_VERIFICATION_SETUP_PROBLEMS\0"
    "BAD_VALIDITY_CHECK\0"
    "DECODE_FAILURE\0"
    "INVALID_KEY_ID\0"
    "INVALID_METADATA\0"
    "INVALID_METADATA_KEY\0"
    "INVALID_PROOF\0"
    "INVALID_TOKEN\0"
    "NO_KEYS_CONFIGURED\0"
    "NO_SRR_KEY_CONFIGURED\0"
    "OVER_BATCHSIZE\0"
    "SRR_SIGNATURE_ERROR\0"
    "TOO_MANY_KEYS\0"
    "AKID_MISMATCH\0"
    "BAD_X509_FILETYPE\0"
    "BASE64_DECODE_ERROR\0"
    "CANT_CHECK_DH_KEY\0"
    "CERT_ALREADY_IN_HASH_TABLE\0"
    "CRL_ALREADY_DELTA\0"
    "CRL_VERIFY_FAILURE\0"
    "DELTA_CRL_WITHOUT_CRL_NUMBER\0"
    "IDP_MISMATCH\0"
    "INVALID_DIRECTORY\0"
    "INVALID_FIELD_FOR_VERSION\0"
    "INVALID_FIELD_NAME\0"
    "INVALID_PARAMETER\0"
    "INVALID_PSS_PARAMETERS\0"
    "INVALID_TRUST\0"
    "INVALID_VERSION\0"
    "ISSUER_MISMATCH\0"
    "KEY_TYPE_MISMATCH\0"
    "KEY_VALUES_MISMATCH\0"
    "LOADING_CERT_DIR\0"
    "LOADING_DEFAULTS\0"
    "NAME_TOO_LONG\0"
    "NEWER_CRL_NOT_NEWER\0"
    "NO_CERT_SET_FOR_US_TO_VERIFY\0"
    "NO_CRL_NUMBER\0"
    "PUBLIC_KEY_DECODE_ERROR\0"
    "PUBLIC_KEY_ENCODE_ERROR\0"
    "SHOULD_RETRY\0"
    "SIGNATURE_ALGORITHM_MISMATCH\0"
    "UNKNOWN_KEY_TYPE\0"
    "UNKNOWN_PURPOSE_ID\0"
    "UNKNOWN_TRUST_ID\0"
    "WRONG_LOOKUP_TYPE\0"
    "BAD_IP_ADDRESS\0"
    "BAD_OBJECT\0"
    "BN_DEC2BN_ERROR\0"
    "BN_TO_ASN1_INTEGER_ERROR\0"
    "CANNOT_FIND_FREE_FUNCTION\0"
    "DIRNAME_ERROR\0"
    "DISTPOINT_ALREADY_SET\0"
    "DUPLICATE_ZONE_ID\0"
    "ERROR_CONVERTING_ZONE\0"
    "ERROR_CREATING_EXTENSION\0"
    "ERROR_IN_EXTENSION\0"
    "EXPECTED_A_SECTION_NAME\0"
    "EXTENSION_EXISTS\0"
    "EXTENSION_NAME_ERROR\0"
    "EXTENSION_NOT_FOUND\0"
    "EXTENSION_SETTING_NOT_SUPPORTED\0"
    "EXTENSION_VALUE_ERROR\0"
    "ILLEGAL_EMPTY_EXTENSION\0"
    "ILLEGAL_HEX_DIGIT\0"
    "INCORRECT_POLICY_SYNTAX_TAG\0"
    "INVALID_BOOLEAN_STRING\0"
    "INVALID_EXTENSION_STRING\0"
    "INVALID_MULTIPLE_RDNS\0"
    "INVALID_NAME\0"
    "INVALID_NULL_ARGUMENT\0"
    "INVALID_NULL_NAME\0"
    "INVALID_NULL_VALUE\0"
    "INVALID_NUMBERS\0"
    "INVALID_OBJECT_IDENTIFIER\0"
    "INVALID_OPTION\0"
    "INVALID_POLICY_IDENTIFIER\0"
    "INVALID_PROXY_POLICY_SETTING\0"
    "INVALID_PURPOSE\0"
    "INVALID_SECTION\0"
    "INVALID_SYNTAX\0"
    "INVALID_VALUE\0"
    "ISSUER_DECODE_ERROR\0"
    "NEED_ORGANIZATION_AND_NUMBERS\0"
    "NO_CONFIG_DATABASE\0"
    "NO_ISSUER_CERTIFICATE\0"
    "NO_ISSUER_DETAILS\0"
    "NO_POLICY_IDENTIFIER\0"
    "NO_PROXY_CERT_POLICY_LANGUAGE_DEFINED\0"
    "NO_PUBLIC_KEY\0"
    "NO_SUBJECT_DETAILS\0"
    "ODD_NUMBER_OF_DIGITS\0"
    "OPERATION_NOT_DEFINED\0"
    "OTHERNAME_ERROR\0"
    "POLICY_LANGUAGE_ALREADY_DEFINED\0"
    "POLICY_PATH_LENGTH\0"
    "POLICY_PATH_LENGTH_ALREADY_DEFINED\0"
    "POLICY_WHEN_PROXY_LANGUAGE_REQUIRES_NO_POLICY\0"
    "SECTION_NOT_FOUND\0"
    "TRAILING_DATA_IN_EXTENSION\0"
    "UNABLE_TO_GET_ISSUER_DETAILS\0"
    "UNABLE_TO_GET_ISSUER_KEYID\0"
    "UNKNOWN_BIT_STRING_ARGUMENT\0"
    "UNKNOWN_EXTENSION\0"
    "UNKNOWN_EXTENSION_NAME\0"
    "UNKNOWN_OPTION\0"
    "UNSUPPORTED_OPTION\0"
    "USER_TOO_LONG\0"
    "";

