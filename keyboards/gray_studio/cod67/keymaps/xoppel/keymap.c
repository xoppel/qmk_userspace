#include QMK_KEYBOARD_H

// Helpful defines
#define _______ KC_TRNS 
#define xxxxxxx KC_NO

#define _BL 0
#define _FL 1
#define _CL 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//	LAYOUT(
//		KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
//		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//		KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//		KC_TRNS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
//							     KC_SPC			KC_BSPC

// layer 0 - main
        LAYOUT(
                KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  xxxxxxx, \
                KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
                KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, xxxxxxx, KC_ENT,  \
                KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_PGDN, \
                MO(1),   KC_LGUI, KC_LALT, xxxxxxx, KC_BSPC, KC_SPC,  xxxxxxx, xxxxxxx, KC_BSPC, KC_RALT, MO(1),   KC_LEFT, KC_DOWN, KC_RGHT),

// layer 1 - functions
        LAYOUT(
                KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  xxxxxxx, \
                _______, KC_MPRV, KC_MPLY, KC_MNXT, RGB_TOG, BL_TOGG, _______, KC_PGUP, KC_HOME, KC_PGDN, KC_PSCR, KC_SLCK, KC_PAUS, KC_DEL,  \
	        _______, _______, KC_VOLD, KC_VOLU, KC_PGDN, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_INS,  KC_DEL,  xxxxxxx, _______, \
                MO(2),   KC_WBAK, KC_WFWD, _______, _______, KC_PGUP, KC_END,  KC_MUTE, KC_MPRV, KC_MNXT, KC_MPLY, KC_HOME, KC_PGUP, KC_END,  \
                _______, _______, _______, xxxxxxx, KC_DEL,  KC_BSPC, xxxxxxx, xxxxxxx, KC_DEL,  MO(2),   _______, KC_MPRV, KC_PGDN, KC_MNXT),

// layer 2 - numpad
        LAYOUT(
                xxxxxxx, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  xxxxxxx, \
                xxxxxxx, BL_DEC,  BL_INC,  BL_BRTG, RGB_M_R, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, xxxxxxx, xxxxxxx, xxxxxxx, KC_BSPC, KC_NLCK, \
                xxxxxxx, RGB_RMOD,RGB_MOD, RGB_VAI, RGB_VAD, xxxxxxx, KC_P4,   KC_P5,   KC_P6,   KC_PMNS, xxxxxxx, KC_PEQL, xxxxxxx, _______, \
                MO(2),   RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, xxxxxxx, KC_P1,   KC_P2,   KC_P3,   KC_PAST, KC_PSLS, xxxxxxx, KC_UP,   xxxxxxx, \
                MO(1),   xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, KC_P0,   xxxxxxx, xxxxxxx, KC_CALC, KC_PENT, xxxxxxx, KC_LEFT, KC_DOWN, KC_RGHT),
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
