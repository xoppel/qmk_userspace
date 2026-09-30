// Xoppel's layout for DZ60
#include QMK_KEYBOARD_H

// Helpful defines
#define _______ KC_TRNS
#define xxxxxxx KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Default layer
[0] = LAYOUT_all(
	QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_GRV,  KC_BSPC,
	KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
	KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
	KC_LSFT, xxxxxxx, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_PGDN,
	MO(1),   KC_LGUI, KC_LALT,          KC_BSPC, KC_DEL,           KC_SPC,                    KC_RALT, MO(1),   KC_LEFT, KC_DOWN, KC_RGHT),

// Fn1 Layer
[1] = LAYOUT_all(
	KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL,
	_______, KC_MPRV, KC_MPLY, KC_MNXT, UG_TOGG, BL_TOGG, _______, KC_PGUP, KC_HOME, KC_PGDN, KC_PSCR, KC_SCRL, KC_PAUS, KC_DEL,
	_______, _______, KC_VOLD, KC_VOLU, KC_PGDN, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, KC_DEL,  _______,
	MO(2),   _______, KC_WBAK, KC_WFWD, _______, _______, KC_PGUP, KC_END,  KC_MUTE, KC_MPRV, KC_MNXT, KC_MPLY, _______, KC_PGUP, KC_END,
	_______, _______, _______,          KC_BSPC, KC_BSPC,          KC_BSPC,                   KC_LEFT, _______, KC_MPRV, KC_PGDN, KC_MNXT),

// Fn2 Layer
[2] = LAYOUT_all(
	_______, UG_TOGG, UG_NEXT, BL_TOGG, BL_UP,   BL_DOWN, BL_BRTG, _______, _______, _______, _______, _______, _______, _______, KC_CALC,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
	QK_BOOT, _______, _______,          _______, _______,          _______,                   _______, _______, _______, _______, _______),
};
