#include <stddef.h>
#include <stdint.h>
#include <endomorphism_action.h>
#if 0
#elif 8*DIGIT_LEN == 16
const ec_basis_t BASIS_EVEN = {{{{0xdcb71453252e32fa, 0xdfb21fb227ad42b, 0xb653b3a0d9262c15, 0x2c0f72021779487}, {0xb9dc820ba32c6164, 0x832fae47cf32b860, 0x6362c5a64d0a3ff6, 0x2df2884d6111e15}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x2405dbabb781998e, 0x9c3eec3e3f6e9545, 0x6a588020db8da63a, 0x251ab5990b61bcf}, {0xc71266cb7bd277e9, 0x6d887b7d4e5584b2, 0xe3613e17caeb1a86, 0x61eb6a860f9048}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x1dc76ecacd8a4677, 0xda43e18bbc8a7e0c, 0x7bc43e578f1fc191, 0x43c760a2521eaef}, {0xb6d0441dfdbdfbaf, 0xdb717c355f3c4592, 0xed4b1431946deebd, 0x18daa21d6fa029d}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_basis_t BASIS_THREE = {{{{0x65173790c83b2efe, 0xe984ca78cf599d78, 0xde26b809861bd785, 0x3701f4ae558bfb5}, {0x1e2a3dd9d11702ec, 0x807e649e07db1bdb, 0x869ff9356657d771, 0xd7a5eb724c5995}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0xf90a555d23d3e02f, 0x77dac10a388a7b40, 0x4074e19e03a4f326, 0x313002fa53a5778}, {0xe2bd93b1d45c0be2, 0x65bbc764b3f74e99, 0xff2880864926df0e, 0x26275a16dc4d3b7}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x4bebd3d346cb5a3d, 0xaaea8e7d4bb08184, 0xbcebecf8af49158a, 0xe2975e6c189542}, {0x532586c1cc140d20, 0x173d145c177eedee, 0xa374eda1e34f1542, 0x42790c8dd0f0267}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_basis_t BASIS_ODD_PLUS = {{{{0xc7892e8c5f0d8b58, 0x1acd728188450800, 0x3e8979cc5aff0680, 0x1d2eabf79fbe62}, {0x0, 0x0, 0x0, 0x0}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x87892e8c5f0d8b58, 0x1acd7281884507ff, 0x528979cc5aff0680, 0x1d2eabf79fbe62}, {0x0, 0x0, 0x0, 0x0}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0xe81e528deffce199, 0x805d62264b98c7a0, 0x27892e8c5f0d8b5, 0x4acd72818845080}, {0x87d3c08d27853678, 0xcd956a53e9eee7d0, 0x2581065a9077ef9a, 0x4e502ea08120771}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_basis_t BASIS_ODD_MINUS = {{{{0x65173790c83b2efe, 0xe984ca78cf599d78, 0xde26b809861bd785, 0x3701f4ae558bfb5}, {0x1e2a3dd9d11702ec, 0x807e649e07db1bdb, 0x869ff9356657d771, 0xd7a5eb724c5995}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0xf90a555d23d3e02f, 0x77dac10a388a7b40, 0x4074e19e03a4f326, 0x313002fa53a5778}, {0xe2bd93b1d45c0be2, 0x65bbc764b3f74e99, 0xff2880864926df0e, 0x26275a16dc4d3b7}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x4bebd3d346cb5a3d, 0xaaea8e7d4bb08184, 0xbcebecf8af49158a, 0xe2975e6c189542}, {0x532586c1cc140d20, 0x173d145c177eedee, 0xa374eda1e34f1542, 0x42790c8dd0f0267}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_basis_t BASIS_COMMITMENT_PLUS = {{{{0xc7892e8c5f0d8b58, 0x1acd728188450800, 0x3e8979cc5aff0680, 0x1d2eabf79fbe62}, {0x0, 0x0, 0x0, 0x0}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x87892e8c5f0d8b58, 0x1acd7281884507ff, 0x528979cc5aff0680, 0x1d2eabf79fbe62}, {0x0, 0x0, 0x0, 0x0}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0xe81e528deffce199, 0x805d62264b98c7a0, 0x27892e8c5f0d8b5, 0x4acd72818845080}, {0x87d3c08d27853678, 0xcd956a53e9eee7d0, 0x2581065a9077ef9a, 0x4e502ea08120771}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_basis_t BASIS_COMMITMENT_MINUS = {{{{0x65173790c83b2efe, 0xe984ca78cf599d78, 0xde26b809861bd785, 0x3701f4ae558bfb5}, {0x1e2a3dd9d11702ec, 0x807e649e07db1bdb, 0x869ff9356657d771, 0xd7a5eb724c5995}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0xf90a555d23d3e02f, 0x77dac10a388a7b40, 0x4074e19e03a4f326, 0x313002fa53a5778}, {0xe2bd93b1d45c0be2, 0x65bbc764b3f74e99, 0xff2880864926df0e, 0x26275a16dc4d3b7}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x4bebd3d346cb5a3d, 0xaaea8e7d4bb08184, 0xbcebecf8af49158a, 0xe2975e6c189542}, {0x532586c1cc140d20, 0x173d145c177eedee, 0xa374eda1e34f1542, 0x42790c8dd0f0267}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_basis_t BASIS_CHALLENGE = {{{{0xdcb71453252e32fa, 0xdfb21fb227ad42b, 0xb653b3a0d9262c15, 0x2c0f72021779487}, {0xb9dc820ba32c6164, 0x832fae47cf32b860, 0x6362c5a64d0a3ff6, 0x2df2884d6111e15}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x2405dbabb781998e, 0x9c3eec3e3f6e9545, 0x6a588020db8da63a, 0x251ab5990b61bcf}, {0xc71266cb7bd277e9, 0x6d887b7d4e5584b2, 0xe3613e17caeb1a86, 0x61eb6a860f9048}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x1dc76ecacd8a4677, 0xda43e18bbc8a7e0c, 0x7bc43e578f1fc191, 0x43c760a2521eaef}, {0xb6d0441dfdbdfbaf, 0xdb717c355f3c4592, 0xed4b1431946deebd, 0x18daa21d6fa029d}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_curve_t CURVE_E0 = {{{0x0}}, {{0x1}}};
const ec_point_t CURVE_E0_A24 = {{{0x0}}, {{0x1}}};
const ibz_mat_2x2_t ACTION_I = {{{{._mp_alloc = 0, ._mp_size = 16, ._mp_d = (mp_limb_t[]) {0x15c4,0x127f,0xf847,0xb5e3,0xb1d7,0x4c08,0xa6f0,0xbec4,0xdf08,0xd2f6,0xe74a,0x122f,0x8768,0x6515,0xa63,0xb55a}}}, {{._mp_alloc = 0, ._mp_size = 16, ._mp_d = (mp_limb_t[]) {0x2c61,0x2c84,0x69f9,0xd94c,0x9451,0x9806,0xcd77,0x8b4f,0xce3b,0x67a5,0xfbc,0x386d,0xfb7d,0x67d4,0xb331,0xc80}}}}, {{{._mp_alloc = 0, ._mp_size = 17, ._mp_d = (mp_limb_t[]) {0x904f,0x56ae,0x5df4,0xb2ed,0x5845,0x5e65,0x3556,0x60ff,0x1fac,0x985e,0xd3de,0xa3c6,0xa63d,0xd463,0x58de,0x7e8a,0x1}}}, {{._mp_alloc = 0, ._mp_size = 16, ._mp_d = (mp_limb_t[]) {0xea3c,0xed80,0x7b8,0x4a1c,0x4e28,0xb3f7,0x590f,0x413b,0x20f7,0x2d09,0x18b5,0xedd0,0x7897,0x9aea,0xf59c,0xdfa5}}}}};
const ibz_mat_2x2_t ACTION_J = {{{{._mp_alloc = 0, ._mp_size = 17, ._mp_d = (mp_limb_t[]) {0xdc34,0xf145,0x3b64,0x8a93,0xf664,0x4f3f,0x4521,0x942d,0x5b1d,0x4f06,0x25ca,0xefe1,0xbe4f,0x7180,0x1d13,0x7b52,0x1}}}, {{._mp_alloc = 0, ._mp_size = 16, ._mp_d = (mp_limb_t[]) {0x75bf,0xcbf4,0x4cea,0xb2ba,0x2a9b,0x4f3c,0xc53b,0xb3c9,0xdf60,0x1cb3,0xaa22,0xf96,0x979c,0xc3bb,0x3a14,0xb79f}}}}, {{{._mp_alloc = 0, ._mp_size = 16, ._mp_d = (mp_limb_t[]) {0xa0cf,0xd8b4,0x1e5a,0x4613,0x690e,0xd0e1,0xfd83,0x4259,0x46f,0x12fe,0xdcaa,0x7eea,0x87ec,0x44c8,0xbe84,0x14fe}}}, {{._mp_alloc = 0, ._mp_size = 16, ._mp_d = (mp_limb_t[]) {0x23cc,0xeba,0xc49b,0x756c,0x99b,0xb0c0,0xbade,0x6bd2,0xa4e2,0xb0f9,0xda35,0x101e,0x41b0,0x8e7f,0xe2ec,0x19ad}}}}};
const ibz_mat_2x2_t ACTION_K = {{{{._mp_alloc = 0, ._mp_size = 16, ._mp_d = (mp_limb_t[]) {0x5e3f,0x129,0x56c,0x8718,0xefcd,0xc65d,0x77c2,0x281b,0x5495,0xb893,0x71dc,0xeb66,0xfcfa,0xf5c7,0x7d31,0x5d2a}}}, {{._mp_alloc = 0, ._mp_size = 17, ._mp_d = (mp_limb_t[]) {0x7188,0x2472,0x6ddc,0xec7,0x6fcc,0x27b7,0x7d49,0x6f86,0x2cc,0xa81a,0x70a8,0x2df0,0x297e,0x5b59,0xc5ca,0x1bc5,0x1}}}}, {{{._mp_alloc = 0, ._mp_size = 17, ._mp_d = (mp_limb_t[]) {0x1a90,0xd397,0x4f3a,0x855d,0x8186,0x6e57,0xdce,0x2dd1,0xd421,0x819b,0xbd1c,0xb62c,0xb819,0x3990,0xfeb7,0x2b7,0x1}}}, {{._mp_alloc = 0, ._mp_size = 17, ._mp_d = (mp_limb_t[]) {0xa1c1,0xfed6,0xfa93,0x78e7,0x1032,0x39a2,0x883d,0xd7e4,0xab6a,0x476c,0x8e23,0x1499,0x305,0xa38,0x82ce,0x37d5,0x1}}}}};
const ibz_mat_2x2_t ACTION_GEN2 = {{{{._mp_alloc = 0, ._mp_size = 16, ._mp_d = (mp_limb_t[]) {0x15c4,0x127f,0xf847,0xb5e3,0xb1d7,0x4c08,0xa6f0,0xbec4,0xdf08,0xd2f6,0xe74a,0x122f,0x8768,0x6515,0xa63,0xb55a}}}, {{._mp_alloc = 0, ._mp_size = 16, ._mp_d = (mp_limb_t[]) {0x2c61,0x2c84,0x69f9,0xd94c,0x9451,0x9806,0xcd77,0x8b4f,0xce3b,0x67a5,0xfbc,0x386d,0xfb7d,0x67d4,0xb331,0xc80}}}}, {{{._mp_alloc = 0, ._mp_size = 17, ._mp_d = (mp_limb_t[]) {0x904f,0x56ae,0x5df4,0xb2ed,0x5845,0x5e65,0x3556,0x60ff,0x1fac,0x985e,0xd3de,0xa3c6,0xa63d,0xd463,0x58de,0x7e8a,0x1}}}, {{._mp_alloc = 0, ._mp_size = 16, ._mp_d = (mp_limb_t[]) {0xea3c,0xed80,0x7b8,0x4a1c,0x4e28,0xb3f7,0x590f,0x413b,0x20f7,0x2d09,0x18b5,0xedd0,0x7897,0x9aea,0xf59c,0xdfa5}}}}};
const ibz_mat_2x2_t ACTION_GEN3 = {{{{._mp_alloc = 0, ._mp_size = 16, ._mp_d = (mp_limb_t[]) {0x78fc,0x1e2,0x99d6,0x203b,0x541e,0xcda4,0xf608,0x2978,0x9d13,0x90fe,0x868a,0x108,0x22dc,0x6b4b,0x13bb,0x4dd6}}}, {{._mp_alloc = 0, ._mp_size = 17, ._mp_d = (mp_limb_t[]) {0x5110,0xfc3c,0x5b71,0xc603,0x5f76,0x73a1,0xc959,0x1f8c,0xd6ce,0x422c,0xdcef,0xa401,0x498c,0x15c8,0xf6a3,0x2c8f,0x1}}}}, {{{._mp_alloc = 0, ._mp_size = 17, ._mp_d = (mp_limb_t[]) {0x988f,0x97b1,0x3e27,0xfc80,0x60a9,0x17a3,0x996d,0xd1ac,0x120d,0x55ae,0xd844,0x1158,0x1715,0x8c96,0x8bb1,0x9444,0x1}}}, {{._mp_alloc = 0, ._mp_size = 17, ._mp_d = (mp_limb_t[]) {0x8704,0xfe1d,0x6629,0xdfc4,0xabe1,0x325b,0x9f7,0xd687,0x62ec,0x6f01,0x7975,0xfef7,0xdd23,0x94b4,0xec44,0x4729,0x1}}}}};
const ibz_mat_2x2_t ACTION_GEN4 = {{{{._mp_alloc = 0, ._mp_size = 16, ._mp_d = (mp_limb_t[]) {0xaf20,0x94,0x2b6,0xc38c,0xf7e6,0x632e,0xbbe1,0x940d,0xaa4a,0x5c49,0x38ee,0x75b3,0xfe7d,0xfae3,0x3e98,0xf915}}}, {{._mp_alloc = 0, ._mp_size = 16, ._mp_d = (mp_limb_t[]) {0x38c4,0x1239,0xb6ee,0x763,0xb7e6,0x93db,0x3ea4,0x37c3,0x166,0x540d,0x3854,0x16f8,0x94bf,0x2dac,0xe2e5,0x8de2}}}}, {{{._mp_alloc = 0, ._mp_size = 16, ._mp_d = (mp_limb_t[]) {0x8d48,0x69cb,0xa79d,0x42ae,0xc0c3,0x372b,0x86e7,0x96e8,0xea10,0x40cd,0x5e8e,0xdb16,0x5c0c,0x9cc8,0xff5b,0x815b}}}, {{._mp_alloc = 0, ._mp_size = 16, ._mp_d = (mp_limb_t[]) {0x50e1,0xff6b,0xfd49,0x3c73,0x819,0x9cd1,0x441e,0x6bf2,0x55b5,0xa3b6,0xc711,0x8a4c,0x182,0x51c,0xc167,0x9bea}}}}};
const quat_alg_elem_t COMMITMENT_IDEAL_UNDISTORTED_GEN = {{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}, {{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x29d}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1fd}}}}};
const quat_alg_elem_t COMMITMENT_IDEAL_DISTORTION_ENDO = {{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}, {{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0xe6}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x25}}}, {{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x172}}}}};
#elif 8*DIGIT_LEN == 32
const ec_basis_t BASIS_EVEN = {{{{0xdcb71453252e32fa, 0xdfb21fb227ad42b, 0xb653b3a0d9262c15, 0x2c0f72021779487}, {0xb9dc820ba32c6164, 0x832fae47cf32b860, 0x6362c5a64d0a3ff6, 0x2df2884d6111e15}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x2405dbabb781998e, 0x9c3eec3e3f6e9545, 0x6a588020db8da63a, 0x251ab5990b61bcf}, {0xc71266cb7bd277e9, 0x6d887b7d4e5584b2, 0xe3613e17caeb1a86, 0x61eb6a860f9048}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x1dc76ecacd8a4677, 0xda43e18bbc8a7e0c, 0x7bc43e578f1fc191, 0x43c760a2521eaef}, {0xb6d0441dfdbdfbaf, 0xdb717c355f3c4592, 0xed4b1431946deebd, 0x18daa21d6fa029d}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_basis_t BASIS_THREE = {{{{0x65173790c83b2efe, 0xe984ca78cf599d78, 0xde26b809861bd785, 0x3701f4ae558bfb5}, {0x1e2a3dd9d11702ec, 0x807e649e07db1bdb, 0x869ff9356657d771, 0xd7a5eb724c5995}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0xf90a555d23d3e02f, 0x77dac10a388a7b40, 0x4074e19e03a4f326, 0x313002fa53a5778}, {0xe2bd93b1d45c0be2, 0x65bbc764b3f74e99, 0xff2880864926df0e, 0x26275a16dc4d3b7}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x4bebd3d346cb5a3d, 0xaaea8e7d4bb08184, 0xbcebecf8af49158a, 0xe2975e6c189542}, {0x532586c1cc140d20, 0x173d145c177eedee, 0xa374eda1e34f1542, 0x42790c8dd0f0267}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_basis_t BASIS_ODD_PLUS = {{{{0xc7892e8c5f0d8b58, 0x1acd728188450800, 0x3e8979cc5aff0680, 0x1d2eabf79fbe62}, {0x0, 0x0, 0x0, 0x0}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x87892e8c5f0d8b58, 0x1acd7281884507ff, 0x528979cc5aff0680, 0x1d2eabf79fbe62}, {0x0, 0x0, 0x0, 0x0}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0xe81e528deffce199, 0x805d62264b98c7a0, 0x27892e8c5f0d8b5, 0x4acd72818845080}, {0x87d3c08d27853678, 0xcd956a53e9eee7d0, 0x2581065a9077ef9a, 0x4e502ea08120771}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_basis_t BASIS_ODD_MINUS = {{{{0x65173790c83b2efe, 0xe984ca78cf599d78, 0xde26b809861bd785, 0x3701f4ae558bfb5}, {0x1e2a3dd9d11702ec, 0x807e649e07db1bdb, 0x869ff9356657d771, 0xd7a5eb724c5995}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0xf90a555d23d3e02f, 0x77dac10a388a7b40, 0x4074e19e03a4f326, 0x313002fa53a5778}, {0xe2bd93b1d45c0be2, 0x65bbc764b3f74e99, 0xff2880864926df0e, 0x26275a16dc4d3b7}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x4bebd3d346cb5a3d, 0xaaea8e7d4bb08184, 0xbcebecf8af49158a, 0xe2975e6c189542}, {0x532586c1cc140d20, 0x173d145c177eedee, 0xa374eda1e34f1542, 0x42790c8dd0f0267}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_basis_t BASIS_COMMITMENT_PLUS = {{{{0xc7892e8c5f0d8b58, 0x1acd728188450800, 0x3e8979cc5aff0680, 0x1d2eabf79fbe62}, {0x0, 0x0, 0x0, 0x0}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x87892e8c5f0d8b58, 0x1acd7281884507ff, 0x528979cc5aff0680, 0x1d2eabf79fbe62}, {0x0, 0x0, 0x0, 0x0}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0xe81e528deffce199, 0x805d62264b98c7a0, 0x27892e8c5f0d8b5, 0x4acd72818845080}, {0x87d3c08d27853678, 0xcd956a53e9eee7d0, 0x2581065a9077ef9a, 0x4e502ea08120771}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_basis_t BASIS_COMMITMENT_MINUS = {{{{0x65173790c83b2efe, 0xe984ca78cf599d78, 0xde26b809861bd785, 0x3701f4ae558bfb5}, {0x1e2a3dd9d11702ec, 0x807e649e07db1bdb, 0x869ff9356657d771, 0xd7a5eb724c5995}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0xf90a555d23d3e02f, 0x77dac10a388a7b40, 0x4074e19e03a4f326, 0x313002fa53a5778}, {0xe2bd93b1d45c0be2, 0x65bbc764b3f74e99, 0xff2880864926df0e, 0x26275a16dc4d3b7}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x4bebd3d346cb5a3d, 0xaaea8e7d4bb08184, 0xbcebecf8af49158a, 0xe2975e6c189542}, {0x532586c1cc140d20, 0x173d145c177eedee, 0xa374eda1e34f1542, 0x42790c8dd0f0267}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_basis_t BASIS_CHALLENGE = {{{{0xdcb71453252e32fa, 0xdfb21fb227ad42b, 0xb653b3a0d9262c15, 0x2c0f72021779487}, {0xb9dc820ba32c6164, 0x832fae47cf32b860, 0x6362c5a64d0a3ff6, 0x2df2884d6111e15}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x2405dbabb781998e, 0x9c3eec3e3f6e9545, 0x6a588020db8da63a, 0x251ab5990b61bcf}, {0xc71266cb7bd277e9, 0x6d887b7d4e5584b2, 0xe3613e17caeb1a86, 0x61eb6a860f9048}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x1dc76ecacd8a4677, 0xda43e18bbc8a7e0c, 0x7bc43e578f1fc191, 0x43c760a2521eaef}, {0xb6d0441dfdbdfbaf, 0xdb717c355f3c4592, 0xed4b1431946deebd, 0x18daa21d6fa029d}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_curve_t CURVE_E0 = {{{0x0}}, {{0x1}}};
const ec_point_t CURVE_E0_A24 = {{{0x0}}, {{0x1}}};
const ibz_mat_2x2_t ACTION_I = {{{{._mp_alloc = 0, ._mp_size = 8, ._mp_d = (mp_limb_t[]) {0x127f15c4,0xb5e3f847,0x4c08b1d7,0xbec4a6f0,0xd2f6df08,0x122fe74a,0x65158768,0xb55a0a63}}}, {{._mp_alloc = 0, ._mp_size = 8, ._mp_d = (mp_limb_t[]) {0x2c842c61,0xd94c69f9,0x98069451,0x8b4fcd77,0x67a5ce3b,0x386d0fbc,0x67d4fb7d,0xc80b331}}}}, {{{._mp_alloc = 0, ._mp_size = 9, ._mp_d = (mp_limb_t[]) {0x56ae904f,0xb2ed5df4,0x5e655845,0x60ff3556,0x985e1fac,0xa3c6d3de,0xd463a63d,0x7e8a58de,0x1}}}, {{._mp_alloc = 0, ._mp_size = 8, ._mp_d = (mp_limb_t[]) {0xed80ea3c,0x4a1c07b8,0xb3f74e28,0x413b590f,0x2d0920f7,0xedd018b5,0x9aea7897,0xdfa5f59c}}}}};
const ibz_mat_2x2_t ACTION_J = {{{{._mp_alloc = 0, ._mp_size = 9, ._mp_d = (mp_limb_t[]) {0xf145dc34,0x8a933b64,0x4f3ff664,0x942d4521,0x4f065b1d,0xefe125ca,0x7180be4f,0x7b521d13,0x1}}}, {{._mp_alloc = 0, ._mp_size = 8, ._mp_d = (mp_limb_t[]) {0xcbf475bf,0xb2ba4cea,0x4f3c2a9b,0xb3c9c53b,0x1cb3df60,0xf96aa22,0xc3bb979c,0xb79f3a14}}}}, {{{._mp_alloc = 0, ._mp_size = 8, ._mp_d = (mp_limb_t[]) {0xd8b4a0cf,0x46131e5a,0xd0e1690e,0x4259fd83,0x12fe046f,0x7eeadcaa,0x44c887ec,0x14febe84}}}, {{._mp_alloc = 0, ._mp_size = 8, ._mp_d = (mp_limb_t[]) {0xeba23cc,0x756cc49b,0xb0c0099b,0x6bd2bade,0xb0f9a4e2,0x101eda35,0x8e7f41b0,0x19ade2ec}}}}};
const ibz_mat_2x2_t ACTION_K = {{{{._mp_alloc = 0, ._mp_size = 8, ._mp_d = (mp_limb_t[]) {0x1295e3f,0x8718056c,0xc65defcd,0x281b77c2,0xb8935495,0xeb6671dc,0xf5c7fcfa,0x5d2a7d31}}}, {{._mp_alloc = 0, ._mp_size = 9, ._mp_d = (mp_limb_t[]) {0x24727188,0xec76ddc,0x27b76fcc,0x6f867d49,0xa81a02cc,0x2df070a8,0x5b59297e,0x1bc5c5ca,0x1}}}}, {{{._mp_alloc = 0, ._mp_size = 9, ._mp_d = (mp_limb_t[]) {0xd3971a90,0x855d4f3a,0x6e578186,0x2dd10dce,0x819bd421,0xb62cbd1c,0x3990b819,0x2b7feb7,0x1}}}, {{._mp_alloc = 0, ._mp_size = 9, ._mp_d = (mp_limb_t[]) {0xfed6a1c1,0x78e7fa93,0x39a21032,0xd7e4883d,0x476cab6a,0x14998e23,0xa380305,0x37d582ce,0x1}}}}};
const ibz_mat_2x2_t ACTION_GEN2 = {{{{._mp_alloc = 0, ._mp_size = 8, ._mp_d = (mp_limb_t[]) {0x127f15c4,0xb5e3f847,0x4c08b1d7,0xbec4a6f0,0xd2f6df08,0x122fe74a,0x65158768,0xb55a0a63}}}, {{._mp_alloc = 0, ._mp_size = 8, ._mp_d = (mp_limb_t[]) {0x2c842c61,0xd94c69f9,0x98069451,0x8b4fcd77,0x67a5ce3b,0x386d0fbc,0x67d4fb7d,0xc80b331}}}}, {{{._mp_alloc = 0, ._mp_size = 9, ._mp_d = (mp_limb_t[]) {0x56ae904f,0xb2ed5df4,0x5e655845,0x60ff3556,0x985e1fac,0xa3c6d3de,0xd463a63d,0x7e8a58de,0x1}}}, {{._mp_alloc = 0, ._mp_size = 8, ._mp_d = (mp_limb_t[]) {0xed80ea3c,0x4a1c07b8,0xb3f74e28,0x413b590f,0x2d0920f7,0xedd018b5,0x9aea7897,0xdfa5f59c}}}}};
const ibz_mat_2x2_t ACTION_GEN3 = {{{{._mp_alloc = 0, ._mp_size = 8, ._mp_d = (mp_limb_t[]) {0x1e278fc,0x203b99d6,0xcda4541e,0x2978f608,0x90fe9d13,0x108868a,0x6b4b22dc,0x4dd613bb}}}, {{._mp_alloc = 0, ._mp_size = 9, ._mp_d = (mp_limb_t[]) {0xfc3c5110,0xc6035b71,0x73a15f76,0x1f8cc959,0x422cd6ce,0xa401dcef,0x15c8498c,0x2c8ff6a3,0x1}}}}, {{{._mp_alloc = 0, ._mp_size = 9, ._mp_d = (mp_limb_t[]) {0x97b1988f,0xfc803e27,0x17a360a9,0xd1ac996d,0x55ae120d,0x1158d844,0x8c961715,0x94448bb1,0x1}}}, {{._mp_alloc = 0, ._mp_size = 9, ._mp_d = (mp_limb_t[]) {0xfe1d8704,0xdfc46629,0x325babe1,0xd68709f7,0x6f0162ec,0xfef77975,0x94b4dd23,0x4729ec44,0x1}}}}};
const ibz_mat_2x2_t ACTION_GEN4 = {{{{._mp_alloc = 0, ._mp_size = 8, ._mp_d = (mp_limb_t[]) {0x94af20,0xc38c02b6,0x632ef7e6,0x940dbbe1,0x5c49aa4a,0x75b338ee,0xfae3fe7d,0xf9153e98}}}, {{._mp_alloc = 0, ._mp_size = 8, ._mp_d = (mp_limb_t[]) {0x123938c4,0x763b6ee,0x93dbb7e6,0x37c33ea4,0x540d0166,0x16f83854,0x2dac94bf,0x8de2e2e5}}}}, {{{._mp_alloc = 0, ._mp_size = 8, ._mp_d = (mp_limb_t[]) {0x69cb8d48,0x42aea79d,0x372bc0c3,0x96e886e7,0x40cdea10,0xdb165e8e,0x9cc85c0c,0x815bff5b}}}, {{._mp_alloc = 0, ._mp_size = 8, ._mp_d = (mp_limb_t[]) {0xff6b50e1,0x3c73fd49,0x9cd10819,0x6bf2441e,0xa3b655b5,0x8a4cc711,0x51c0182,0x9beac167}}}}};
const quat_alg_elem_t COMMITMENT_IDEAL_UNDISTORTED_GEN = {{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}, {{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x29d}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1fd}}}}};
const quat_alg_elem_t COMMITMENT_IDEAL_DISTORTION_ENDO = {{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}, {{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0xe6}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x25}}}, {{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x172}}}}};
#elif 8*DIGIT_LEN == 64
const ec_basis_t BASIS_EVEN = {{{{0xdcb71453252e32fa, 0xdfb21fb227ad42b, 0xb653b3a0d9262c15, 0x2c0f72021779487}, {0xb9dc820ba32c6164, 0x832fae47cf32b860, 0x6362c5a64d0a3ff6, 0x2df2884d6111e15}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x2405dbabb781998e, 0x9c3eec3e3f6e9545, 0x6a588020db8da63a, 0x251ab5990b61bcf}, {0xc71266cb7bd277e9, 0x6d887b7d4e5584b2, 0xe3613e17caeb1a86, 0x61eb6a860f9048}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x1dc76ecacd8a4677, 0xda43e18bbc8a7e0c, 0x7bc43e578f1fc191, 0x43c760a2521eaef}, {0xb6d0441dfdbdfbaf, 0xdb717c355f3c4592, 0xed4b1431946deebd, 0x18daa21d6fa029d}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_basis_t BASIS_THREE = {{{{0x65173790c83b2efe, 0xe984ca78cf599d78, 0xde26b809861bd785, 0x3701f4ae558bfb5}, {0x1e2a3dd9d11702ec, 0x807e649e07db1bdb, 0x869ff9356657d771, 0xd7a5eb724c5995}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0xf90a555d23d3e02f, 0x77dac10a388a7b40, 0x4074e19e03a4f326, 0x313002fa53a5778}, {0xe2bd93b1d45c0be2, 0x65bbc764b3f74e99, 0xff2880864926df0e, 0x26275a16dc4d3b7}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x4bebd3d346cb5a3d, 0xaaea8e7d4bb08184, 0xbcebecf8af49158a, 0xe2975e6c189542}, {0x532586c1cc140d20, 0x173d145c177eedee, 0xa374eda1e34f1542, 0x42790c8dd0f0267}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_basis_t BASIS_ODD_PLUS = {{{{0xc7892e8c5f0d8b58, 0x1acd728188450800, 0x3e8979cc5aff0680, 0x1d2eabf79fbe62}, {0x0, 0x0, 0x0, 0x0}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x87892e8c5f0d8b58, 0x1acd7281884507ff, 0x528979cc5aff0680, 0x1d2eabf79fbe62}, {0x0, 0x0, 0x0, 0x0}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0xe81e528deffce199, 0x805d62264b98c7a0, 0x27892e8c5f0d8b5, 0x4acd72818845080}, {0x87d3c08d27853678, 0xcd956a53e9eee7d0, 0x2581065a9077ef9a, 0x4e502ea08120771}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_basis_t BASIS_ODD_MINUS = {{{{0x65173790c83b2efe, 0xe984ca78cf599d78, 0xde26b809861bd785, 0x3701f4ae558bfb5}, {0x1e2a3dd9d11702ec, 0x807e649e07db1bdb, 0x869ff9356657d771, 0xd7a5eb724c5995}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0xf90a555d23d3e02f, 0x77dac10a388a7b40, 0x4074e19e03a4f326, 0x313002fa53a5778}, {0xe2bd93b1d45c0be2, 0x65bbc764b3f74e99, 0xff2880864926df0e, 0x26275a16dc4d3b7}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x4bebd3d346cb5a3d, 0xaaea8e7d4bb08184, 0xbcebecf8af49158a, 0xe2975e6c189542}, {0x532586c1cc140d20, 0x173d145c177eedee, 0xa374eda1e34f1542, 0x42790c8dd0f0267}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_basis_t BASIS_COMMITMENT_PLUS = {{{{0xc7892e8c5f0d8b58, 0x1acd728188450800, 0x3e8979cc5aff0680, 0x1d2eabf79fbe62}, {0x0, 0x0, 0x0, 0x0}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x87892e8c5f0d8b58, 0x1acd7281884507ff, 0x528979cc5aff0680, 0x1d2eabf79fbe62}, {0x0, 0x0, 0x0, 0x0}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0xe81e528deffce199, 0x805d62264b98c7a0, 0x27892e8c5f0d8b5, 0x4acd72818845080}, {0x87d3c08d27853678, 0xcd956a53e9eee7d0, 0x2581065a9077ef9a, 0x4e502ea08120771}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_basis_t BASIS_COMMITMENT_MINUS = {{{{0x65173790c83b2efe, 0xe984ca78cf599d78, 0xde26b809861bd785, 0x3701f4ae558bfb5}, {0x1e2a3dd9d11702ec, 0x807e649e07db1bdb, 0x869ff9356657d771, 0xd7a5eb724c5995}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0xf90a555d23d3e02f, 0x77dac10a388a7b40, 0x4074e19e03a4f326, 0x313002fa53a5778}, {0xe2bd93b1d45c0be2, 0x65bbc764b3f74e99, 0xff2880864926df0e, 0x26275a16dc4d3b7}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x4bebd3d346cb5a3d, 0xaaea8e7d4bb08184, 0xbcebecf8af49158a, 0xe2975e6c189542}, {0x532586c1cc140d20, 0x173d145c177eedee, 0xa374eda1e34f1542, 0x42790c8dd0f0267}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_basis_t BASIS_CHALLENGE = {{{{0xdcb71453252e32fa, 0xdfb21fb227ad42b, 0xb653b3a0d9262c15, 0x2c0f72021779487}, {0xb9dc820ba32c6164, 0x832fae47cf32b860, 0x6362c5a64d0a3ff6, 0x2df2884d6111e15}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x2405dbabb781998e, 0x9c3eec3e3f6e9545, 0x6a588020db8da63a, 0x251ab5990b61bcf}, {0xc71266cb7bd277e9, 0x6d887b7d4e5584b2, 0xe3613e17caeb1a86, 0x61eb6a860f9048}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}, {{{0x1dc76ecacd8a4677, 0xda43e18bbc8a7e0c, 0x7bc43e578f1fc191, 0x43c760a2521eaef}, {0xb6d0441dfdbdfbaf, 0xdb717c355f3c4592, 0xed4b1431946deebd, 0x18daa21d6fa029d}}, {{0x1, 0x0, 0x0, 0x0}, {0x0, 0x0, 0x0, 0x0}}}};
const ec_curve_t CURVE_E0 = {{{0x0}}, {{0x1}}};
const ec_point_t CURVE_E0_A24 = {{{0x0}}, {{0x1}}};
const ibz_mat_2x2_t ACTION_I = {{{{._mp_alloc = 0, ._mp_size = 4, ._mp_d = (mp_limb_t[]) {0xb5e3f847127f15c4,0xbec4a6f04c08b1d7,0x122fe74ad2f6df08,0xb55a0a6365158768}}}, {{._mp_alloc = 0, ._mp_size = 4, ._mp_d = (mp_limb_t[]) {0xd94c69f92c842c61,0x8b4fcd7798069451,0x386d0fbc67a5ce3b,0xc80b33167d4fb7d}}}}, {{{._mp_alloc = 0, ._mp_size = 5, ._mp_d = (mp_limb_t[]) {0xb2ed5df456ae904f,0x60ff35565e655845,0xa3c6d3de985e1fac,0x7e8a58ded463a63d,0x1}}}, {{._mp_alloc = 0, ._mp_size = 4, ._mp_d = (mp_limb_t[]) {0x4a1c07b8ed80ea3c,0x413b590fb3f74e28,0xedd018b52d0920f7,0xdfa5f59c9aea7897}}}}};
const ibz_mat_2x2_t ACTION_J = {{{{._mp_alloc = 0, ._mp_size = 5, ._mp_d = (mp_limb_t[]) {0x8a933b64f145dc34,0x942d45214f3ff664,0xefe125ca4f065b1d,0x7b521d137180be4f,0x1}}}, {{._mp_alloc = 0, ._mp_size = 4, ._mp_d = (mp_limb_t[]) {0xb2ba4ceacbf475bf,0xb3c9c53b4f3c2a9b,0xf96aa221cb3df60,0xb79f3a14c3bb979c}}}}, {{{._mp_alloc = 0, ._mp_size = 4, ._mp_d = (mp_limb_t[]) {0x46131e5ad8b4a0cf,0x4259fd83d0e1690e,0x7eeadcaa12fe046f,0x14febe8444c887ec}}}, {{._mp_alloc = 0, ._mp_size = 4, ._mp_d = (mp_limb_t[]) {0x756cc49b0eba23cc,0x6bd2badeb0c0099b,0x101eda35b0f9a4e2,0x19ade2ec8e7f41b0}}}}};
const ibz_mat_2x2_t ACTION_K = {{{{._mp_alloc = 0, ._mp_size = 4, ._mp_d = (mp_limb_t[]) {0x8718056c01295e3f,0x281b77c2c65defcd,0xeb6671dcb8935495,0x5d2a7d31f5c7fcfa}}}, {{._mp_alloc = 0, ._mp_size = 5, ._mp_d = (mp_limb_t[]) {0xec76ddc24727188,0x6f867d4927b76fcc,0x2df070a8a81a02cc,0x1bc5c5ca5b59297e,0x1}}}}, {{{._mp_alloc = 0, ._mp_size = 5, ._mp_d = (mp_limb_t[]) {0x855d4f3ad3971a90,0x2dd10dce6e578186,0xb62cbd1c819bd421,0x2b7feb73990b819,0x1}}}, {{._mp_alloc = 0, ._mp_size = 5, ._mp_d = (mp_limb_t[]) {0x78e7fa93fed6a1c1,0xd7e4883d39a21032,0x14998e23476cab6a,0x37d582ce0a380305,0x1}}}}};
const ibz_mat_2x2_t ACTION_GEN2 = {{{{._mp_alloc = 0, ._mp_size = 4, ._mp_d = (mp_limb_t[]) {0xb5e3f847127f15c4,0xbec4a6f04c08b1d7,0x122fe74ad2f6df08,0xb55a0a6365158768}}}, {{._mp_alloc = 0, ._mp_size = 4, ._mp_d = (mp_limb_t[]) {0xd94c69f92c842c61,0x8b4fcd7798069451,0x386d0fbc67a5ce3b,0xc80b33167d4fb7d}}}}, {{{._mp_alloc = 0, ._mp_size = 5, ._mp_d = (mp_limb_t[]) {0xb2ed5df456ae904f,0x60ff35565e655845,0xa3c6d3de985e1fac,0x7e8a58ded463a63d,0x1}}}, {{._mp_alloc = 0, ._mp_size = 4, ._mp_d = (mp_limb_t[]) {0x4a1c07b8ed80ea3c,0x413b590fb3f74e28,0xedd018b52d0920f7,0xdfa5f59c9aea7897}}}}};
const ibz_mat_2x2_t ACTION_GEN3 = {{{{._mp_alloc = 0, ._mp_size = 4, ._mp_d = (mp_limb_t[]) {0x203b99d601e278fc,0x2978f608cda4541e,0x108868a90fe9d13,0x4dd613bb6b4b22dc}}}, {{._mp_alloc = 0, ._mp_size = 5, ._mp_d = (mp_limb_t[]) {0xc6035b71fc3c5110,0x1f8cc95973a15f76,0xa401dcef422cd6ce,0x2c8ff6a315c8498c,0x1}}}}, {{{._mp_alloc = 0, ._mp_size = 5, ._mp_d = (mp_limb_t[]) {0xfc803e2797b1988f,0xd1ac996d17a360a9,0x1158d84455ae120d,0x94448bb18c961715,0x1}}}, {{._mp_alloc = 0, ._mp_size = 5, ._mp_d = (mp_limb_t[]) {0xdfc46629fe1d8704,0xd68709f7325babe1,0xfef779756f0162ec,0x4729ec4494b4dd23,0x1}}}}};
const ibz_mat_2x2_t ACTION_GEN4 = {{{{._mp_alloc = 0, ._mp_size = 4, ._mp_d = (mp_limb_t[]) {0xc38c02b60094af20,0x940dbbe1632ef7e6,0x75b338ee5c49aa4a,0xf9153e98fae3fe7d}}}, {{._mp_alloc = 0, ._mp_size = 4, ._mp_d = (mp_limb_t[]) {0x763b6ee123938c4,0x37c33ea493dbb7e6,0x16f83854540d0166,0x8de2e2e52dac94bf}}}}, {{{._mp_alloc = 0, ._mp_size = 4, ._mp_d = (mp_limb_t[]) {0x42aea79d69cb8d48,0x96e886e7372bc0c3,0xdb165e8e40cdea10,0x815bff5b9cc85c0c}}}, {{._mp_alloc = 0, ._mp_size = 4, ._mp_d = (mp_limb_t[]) {0x3c73fd49ff6b50e1,0x6bf2441e9cd10819,0x8a4cc711a3b655b5,0x9beac167051c0182}}}}};
const quat_alg_elem_t COMMITMENT_IDEAL_UNDISTORTED_GEN = {{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}, {{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x29d}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1fd}}}}};
const quat_alg_elem_t COMMITMENT_IDEAL_DISTORTION_ENDO = {{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}, {{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0xe6}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x25}}}, {{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x172}}}}};
#endif