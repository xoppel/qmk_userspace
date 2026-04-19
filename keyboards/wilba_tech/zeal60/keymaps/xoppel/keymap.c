// Xoppel's layout for Zeal60
#include QMK_KEYBOARD_H

// Helpful defines
#define _______ KC_TRNS
#define xxxxxxx KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Default layer
[0] = LAYOUT_60_ansi_split_bs_rshift(
	KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, xxxxxxx,
	KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
	KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
	KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(2),
	MO(1),   KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_RWIN, KC_MENU, MO(1)),

// Fn1 Layer
[1] = LAYOUT_60_ansi_split_bs_rshift(
	KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  xxxxxxx,
	_______, KC_MPRV, KC_MPLY, KC_MNXT, RGB_TOG, BL_TOGG, _______, KC_PGUP, KC_HOME, KC_PGDN, KC_PSCR, KC_SLCK, KC_PAUS, KC_INS,
	_______, _______, KC_VOLD, KC_VOLU, KC_PGDN, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_INS,  KC_DEL,  _______,
	MO(2),   KC_WBAK, KC_WFWD, _______, _______, KC_PGUP, KC_END,  KC_MUTE, KC_MPRV, KC_MNXT, KC_MPLY, KC_UP,   KC_PGDN,
	_______, _______, KC_DEL,                             KC_BSPC,                            _______, KC_LEFT, KC_DOWN, KC_RGHT),

// Fn2 Layer
[2] = LAYOUT_60_ansi_split_bs_rshift(
	_______, EF_DEC,  EF_INC,  H1_DEC,  H1_INC,  H2_DEC,  H2_INC,  _______, _______, _______, _______, BR_DEC,  BR_INC,  KC_CALC, xxxxxxx,
	_______, _______, _______, S1_DEC,  S1_INC,  S2_DEC,  S2_INC,  _______, _______, _______, _______, ES_DEC,  ES_INC,  _______,
	_______, _______, RGB_VAI, RGB_VAD, _______, _______, RGB_HUD, RGB_SAD, RGB_SAI, RGB_HUI, _______, _______, _______,
	_______, RGB_RMOD,RGB_MOD, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
	RESET,   _______, _______,                            _______,                            _______, _______, _______, _______),

};
