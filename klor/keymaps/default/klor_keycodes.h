#ifndef KLOR_KEYCODE_H
#define KLOR_KEYCODE_H

#include QMK_KEYBOARD_H


// ┌───────────────────────────────────────────────────────────┐
// │ d e f i n e   k e y c o d e s                             │
// └───────────────────────────────────────────────────────────┘

typedef enum {
    QWERTY = SAFE_RANGE,
    CLMK_DH,
    COLEMAK,
    WORKMAN,
    DVORAK,
    LOWER,
    RAISE,
    ADJUST,
    OS_SWAP,
    MAKE_H,
    BRT_S2M,
    BRT_M2S,
    HRM_TGL
} custom_keycodes;

#endif
