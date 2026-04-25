#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#define KEYBOARD_klor_kb2040

#define MASTER_LEFT
// #define MASTER_RIGHT

//#define TAPPING_TERM 170
#define TAPPING_TERM 170

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
//#define NO_ACTION_TAPPING
//#define NO_MUSIC_MODE

#define ENCODER_DIRECTION_FLIP
#define COMBO_COUNT 1

#define OLED_BRIGHTNESS 255
#define SPLIT_TRANSACTION_IDS_USER USER_SYNC_OLED_BRIGHTNESS
