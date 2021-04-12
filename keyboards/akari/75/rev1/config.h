#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED // Akari
#define PRODUCT_ID   0x6969 // Akari75
#define DEVICE_VER   0x0001
#define MANUFACTURER Akari
#define PRODUCT      Akari75

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 16

/* key matrix pins */
#define MATRIX_ROW_PINS { F6, F5, F4, F1, F0, F7 }
#define MATRIX_COL_PINS { B4, B5, B6, C6, C7, B3, B2, B1, D0, D1, D2, D3, D5, D4, D6, D7 }
#define UNUSED_PINS { B0, B7, E6 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

//#define LED_CAPS_LOCK_PIN F0

/* number of backlight levels */
//#define BACKLIGHT_PIN B7
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 6
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

//#define RGB_DI_PIN E6
#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 20
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif
