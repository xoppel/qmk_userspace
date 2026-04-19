/* Copyright 2021 dztech
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#define xxxxxxx KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_all(
    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,              KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,             KC_PSCR,
    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   xxxxxxx,  KC_BSPC,  KC_HOME,
    KC_TAB,             KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_PGUP,
    KC_LCTL,            KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,             KC_PGDN,
    KC_LSFT,  xxxxxxx,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,    KC_END,
    MO(1),    KC_LGUI,            KC_LALT,                      KC_SPC,                                 KC_RALT,  MO(1),    xxxxxxx,  KC_LEFT,  KC_DOWN,  KC_RGHT
  ),

  [1] = LAYOUT_all(
    _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            KC_CALC,
    KC_GESC,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,  KC_DEL,   KC_CALC,
    _______,            KC_MPRV,  KC_MPLY,  KC_MNXT,  _______,  BL_TOGG,  _______,  KC_PGUP,  KC_HOME,  KC_PGDN,  KC_PSCR,  KC_SLCK,  KC_PAUS,  KC_INS,   KC_VOLU,
    _______,            _______,  KC_VOLD,  KC_VOLU,  KC_PGDN,  _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_INS,   _______,  _______,            KC_VOLD,
    _______,  _______,  KC_WBAK,  KC_WFWD,  _______,  _______,  KC_PGUP,  KC_END,   KC_MUTE,  KC_MPRV,  KC_MPLY,  _______,            _______,  KC_PGUP,  KC_MUTE,
    _______,  _______,            _______,                      KC_BSPC,                                MO(2),    _______,  _______,  KC_MPRV,  KC_PGDN,  KC_MNXT 
  ),

  [2] = LAYOUT_all(
    _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
    _______,  _______,  BL_INC,   BL_DEC,   BL_TOGG,  BL_BRTG,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
    RESET,    _______,            _______,                      _______,                                _______,  _______,  _______,  _______,  _______,  _______
  ),
 
  [3] = LAYOUT_all(
    _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
    _______,  _______,            _______,                      _______,                                _______,  _______,  _______,  _______,  _______,  _______
  ),    
};
