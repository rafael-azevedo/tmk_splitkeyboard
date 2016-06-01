#ifndef KEYMAP_H
#define KEYMAP_H

/* #define SHIFT(key) ACTION_MODS_KEY(MOD_LSFT, key) */
/* #define CTRL(key)  ACTION_MODS_KEY(MOD_LCTL, key) */
/* #define ALT(key)   ACTION_MODS_KEY(MOD_LALT, key) */
/* #define GUI(key)   ACTION_MODS_KEY(MOD_LGUI, key) */

#define SHIFT(key) ACTION(ACT_MODS, (MOD_LSFT << 8) | (key))
#define CTRL(key) ACTION(ACT_MODS, (MOD_LCTL << 8) | (key))
#define ALT(key) ACTION(ACT_MODS, (MOD_LALT << 8) | (key))
#define GUI(key) ACTION(ACT_MODS, (MOD_LGUI << 8) | (key))


#define KEYMAP(                                                 \
                                                                \
    /* left hand, spatial positions */                          \
    k06,k05,k04,k03,k02,k01,k00,                                \
    k16,k15,k14,k13,k12,k11,k10,                                \
    k26,k25,k24,k23,k22,k21,                                    \
    k36,k35,k34,k33,k32,k31,k30,                                \
    k46,k45,k44,k43,k42,                                        \
                            k55,k54,                            \
                                k53,                            \
                        k50,k51,k52,                            \
                                                                \
        k07,k08,k09,k0A,k0B,k0C,k0D,                            \
        k17,k18,k19,k1A,k1B,k1C,k1D,                            \
            k28,k29,k2A,k2B,k2C,k2D,                            \
        k37,k38,k39,k3A,k3B,k3C,k3D,                            \
                k49,k4A,k4B,k4C,k4D,                            \
    k57,k58,                                                    \
    k59,                                                        \
    k5C,k5B,k5A )                                               \
                                                                \
   /* matrix positions */                                       \
   {                                                            \
    { k00, k10, KC_NO, k30, KC_NO, k50 },   \
    { k01, k11, k21, k31, KC_NO, k51 },   \
    { k02, k12, k22, k32, k42, k52 },   \
    { k03, k13, k23, k33, k43, k53 },   \
    { k04, k14, k24, k34, k44, k54 },   \
    { k05, k15, k25, k35, k45, k55 },   \
    { k06, k16, k26, k36, k46, KC_NO },   \
                                                                 \
    { k07, k17, KC_NO, k37,KC_NO, k57 },   \
    { k08, k18, k28, k38,KC_NO, k58 },   \
    { k09, k19, k29, k39, k49, k59 },   \
    { k0A, k1A, k2A, k3A, k4A, k5A },   \
    { k0B, k1B, k2B, k3B, k4B, k5B },   \
    { k0C, k1C, k2C, k3C, k4C, k5C },   \
    { k0D, k1D, k2D, k3D, k4D, KC_NO }    \
   }

#endif
