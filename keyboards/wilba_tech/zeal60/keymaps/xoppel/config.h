#pragma once

/* enable/disable LEDs based on layout */
#undef RGB_BACKLIGHT_USE_SPLIT_BACKSPACE
#define RGB_BACKLIGHT_USE_SPLIT_BACKSPACE 1

#undef RGB_BACKLIGHT_USE_SPLIT_LEFT_SHIFT
#define RGB_BACKLIGHT_USE_SPLIT_LEFT_SHIFT 1

#undef RGB_BACKLIGHT_USE_SPLIT_RIGHT_SHIFT
#define RGB_BACKLIGHT_USE_SPLIT_RIGHT_SHIFT 1

#undef RGB_BACKLIGHT_USE_7U_SPACEBAR
#define RGB_BACKLIGHT_USE_7U_SPACEBAR 0

#undef RGB_BACKLIGHT_USE_ISO_ENTER
#define RGB_BACKLIGHT_USE_ISO_ENTER 0

#undef RGB_BACKLIGHT_DISABLE_HHKB_BLOCKER_LEDS
#define RGB_BACKLIGHT_DISABLE_HHKB_BLOCKER_LEDS 0

//#undef VENDOR_ID
//#define VENDOR_ID       0x046D
//#undef PRODUCT_ID
//#define PRODUCT_ID      0xC31C
//#undef DEVICE_VER
//#define DEVICE_VER      0x0064
//#undef MANUFACTURER
//#define MANUFACTURER    Logitech
//#undef PRODUCT
//#define PRODUCT         USB Keyboard
//#undef DESCRIPTION
//#define DESCRIPTION     K120 Keyboard

// Set up RGB underglow.
#define RGB_DI_PIN B0          // The pin your RGB strip is wired to
//#define RGBLIGHT_ANIMATIONS    // Require for fancier stuff (not compatible with audio)
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLED_NUM 20          // Number of LEDs
#define RGBLIGHT_HUE_STEP 5    // How much each press of rgb_hue changes hue
#define RGBLIGHT_SAT_STEP 10   // How much each press of rgb_sat changes sat
#define RGBLIGHT_VAL_STEP 10   // How much each press of rgb_val changes val

// Enable current limiting for RGB underglow.
#define RGBSTRIP_CURRENT_LIMIT 400    // Strip current limit in mA. (USB amperage - 500mA for keyboard)
#define RGBSTRIP_MAX_CURRENT_PER_LIGHT 50 // mA per light when at max brightness.
