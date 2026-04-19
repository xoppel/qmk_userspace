// Split-backspace layout for Zeal65
#include QMK_KEYBOARD_H

// Helpful defines
#define _______ KC_TRNS
#define xxxxxxx KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Default layer
[0] = LAYOUT_65_normie(
	KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_HOME,
	KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,
	KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,           KC_PGDN,
	KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_END,
	MO(1),   KC_LALT,                                              KC_SPC,                    KC_RALT, MO(1),   KC_LEFT, KC_DOWN, KC_RGHT),

// Fn1 Layer
[1] = LAYOUT_65_normie(
	KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_CALC,
	_______, KC_MPRV, KC_MPLY, KC_MNXT, RGB_TOG, BL_TOGG, _______, KC_PGUP, KC_HOME, KC_PGDN, KC_PSCR, KC_SLCK, KC_PAUS, KC_INS,  KC_VOLU,
	_______, _______, KC_VOLD, KC_VOLU, KC_PGDN, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_INS,  _______, _______,          KC_VOLD,
	_______,          KC_WBAK, KC_WFWD, _______, _______, KC_PGUP, KC_END,  KC_MUTE, KC_MPRV, KC_MNXT, KC_MPLY, _______, KC_PGUP, KC_MUTE,
	_______, KC_LGUI,                                              KC_BSPC,                   MO(2),   _______, KC_MPRV, KC_PGDN, KC_MNXT),

// Fn2 Layer (zeal60 Configuration)
[2] = LAYOUT_65_normie(
	_______, EF_DEC,  EF_INC,  H1_DEC,  H1_INC,  H2_DEC,  H2_INC,  _______, _______, _______, _______, BR_DEC,  BR_INC,  _______,  _______,
	_______, _______, _______, S1_DEC,  S1_INC,  S2_DEC,  S2_INC,  _______, _______, _______, _______, ES_DEC,  ES_INC,  _______, _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
	_______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
	RESET,   _______,                                              _______,                   _______, _______, _______, _______, _______),

};
