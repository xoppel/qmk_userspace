#include QMK_KEYBOARD_H

// Helpful defines
#define _______ KC_TRNS 
#define xxxxxxx KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//	LAYOUT(
//		QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
//		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//		KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//		KC_TRNS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
//							     KC_SPC			KC_BSPC

// layer 0 - main
        [0] = LAYOUT(
                QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  xxxxxxx, \
                KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
                KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, xxxxxxx, KC_ENT,  \
                KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_PGDN, \
                MO(1),   KC_LGUI, KC_LALT, xxxxxxx, KC_BSPC, KC_SPC,  xxxxxxx, xxxxxxx, KC_BSPC, KC_RALT, MO(1),   KC_LEFT, KC_DOWN, KC_RGHT),

// layer 1 - functions
        [1] = LAYOUT(
                KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  xxxxxxx, \
                _______, KC_MPRV, KC_MPLY, KC_MNXT, UG_TOGG, BL_TOGG, _______, KC_PGUP, KC_HOME, KC_PGDN, KC_PSCR, KC_SCRL, KC_PAUS, KC_DEL,  \
	        _______, _______, KC_VOLD, KC_VOLU, KC_PGDN, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, KC_DEL,  xxxxxxx, _______, \
                MO(2),   KC_WBAK, KC_WFWD, _______, _______, KC_PGUP, KC_END,  KC_MUTE, KC_MPRV, KC_MNXT, KC_MPLY, _______, KC_PGUP, KC_END,  \
                _______, _______, _______, xxxxxxx, KC_DEL,  KC_BSPC, xxxxxxx, xxxxxxx, KC_DEL,  KC_LEFT, _______, KC_MPRV, KC_PGDN, KC_MNXT),

// layer 2 - config
        [2] = LAYOUT(
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
                _______, UG_TOGG, UG_NEXT, UG_VALU, UG_VALD, UG_HUEU, UG_HUED, UG_SATU, UG_SATD, RGB_M_R, _______, _______, _______, _______, \
                _______, BL_TOGG, BL_UP,   BL_DOWN, BL_BRTG, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
                QK_BOOT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),
};


void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
