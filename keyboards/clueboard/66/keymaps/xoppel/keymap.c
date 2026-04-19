#include QMK_KEYBOARD_H

// Helpful defines
#define _______ KC_TRNS
#define xxxxxxx KC_NO

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL 0
#define _FL 1
#define _NL 2
#define _CL 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: Base Layer (Default Layer)
   */
[_BL] = KEYMAP(
  KC_GESC, KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,     KC_MINS,  KC_EQL,   _______, KC_BSPC,          KC_PGUP, \
  KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,                   KC_PGDN, \
  KC_LCTL, KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN,  KC_QUOT,  KC_ENT,   KC_ENT,                             \
  KC_LSFT, _______, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,   KC_SLSH,  _______,  KC_RSFT,          KC_UP,            \
  MO(_FL), KC_LGUI, KC_LALT,KC_DEL,         KC_BSPC,KC_SPC,                          KC_RALT,  KC_RGUI,  KC_RCTL,  MO(_FL), KC_LEFT, KC_DOWN, KC_RGHT),

  /* Keymap _FL: Function Layer
   */
[_FL] = KEYMAP(
  KC_GRV,  KC_F1,   KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,   KC_F11,   KC_F12,   _______, KC_DEL,           KC_HOME, \
  _______, KC_MPRV, KC_MPLY,KC_MNXT,RGB_TOG,BL_TOGG,_______,KC_PGUP,KC_HOME,KC_PGDN, KC_PSCR,  KC_SLCK,  KC_PAUS,  KC_INS,                    KC_END,  \
  _______, _______, KC_VOLD,KC_VOLU,KC_PGDN,_______,KC_LEFT,KC_DOWN,KC_UP,  KC_RGHT, KC_INS,   KC_DEL,   _______,  _______,                            \
  MO(_NL), _______, KC_WBAK,KC_WFWD,_______,_______,KC_PGUP,KC_END, KC_MUTE,KC_MPRV, KC_MNXT,  KC_MPLY,  _______,  _______,          KC_PGUP,          \
  MO(_FL), _______, _______,_______,        KC_DEL, KC_RGUI,                         _______,  _______,  MO(_CL),  MO(_FL), KC_MPRV, KC_PGDN, KC_MNXT),

  /* Keymap _NL: Numpad layer
   */
[_NL] = KEYMAP(
  xxxxxxx, KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,     KC_MINS,  KC_EQL,   xxxxxxx, KC_NLCK,          KC_CALC, \
  xxxxxxx, xxxxxxx, xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,KC_P7,  KC_P8,  KC_P9,  KC_PPLS, xxxxxxx,  xxxxxxx,  xxxxxxx,  xxxxxxx,                   xxxxxxx, \
  KC_CAPS, xxxxxxx, xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,KC_P4,  KC_P5,  KC_P6,  KC_PMNS, xxxxxxx,  xxxxxxx,  xxxxxxx,  xxxxxxx,                            \
  MO(_NL), _______, xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,KC_P1,  KC_P2,  KC_P3,   KC_PAST,  KC_PSLS,  _______,  xxxxxxx,          KC_UP  ,          \
  MO(_FL), xxxxxxx, xxxxxxx,xxxxxxx,        KC_BSPC,KC_PDOT,                         KC_P0,    KC_PENT,  xxxxxxx,  MO(_FL), KC_LEFT, KC_DOWN, KC_RGHT),

  /* Keymap _CL: Control layer
   */
[_CL] = KEYMAP(
  BL_STEP, RGB_M_P, RGB_M_B,RGB_M_R,RGB_M_SW,RGB_M_SN,RGB_M_K,RGB_M_X,RGB_M_G,xxxxxxx, xxxxxxx,  xxxxxxx,  xxxxxxx,  xxxxxxx, RGB_TOG,          RGB_VAI, \
  xxxxxxx, xxxxxxx, xxxxxxx,xxxxxxx,RESET,  BL_TOGG,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx, xxxxxxx,  xxxxxxx,  xxxxxxx,  xxxxxxx,                   RGB_VAD, \
  xxxxxxx, xxxxxxx, xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx, xxxxxxx,  xxxxxxx,  xxxxxxx,  xxxxxxx,                            \
  xxxxxxx, _______, xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx, xxxxxxx,  xxxxxxx,  _______,  xxxxxxx,          RGB_SAI,          \
  MO(_FL), xxxxxxx, xxxxxxx,xxxxxxx,        RGB_MOD,RGB_MOD,                         xxxxxxx,  xxxxxxx,  MO(_CL),  MO(_FL), RGB_HUD, RGB_SAD, RGB_HUI),
};
