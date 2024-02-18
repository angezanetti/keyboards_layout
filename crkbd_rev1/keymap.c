/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,  KC_A,   KC_S,     KC_D,    KC_F,     KC_G,                         KC_H,   KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TAB,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                        KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCTL, KC_LOPT, KC_LGUI, LT(1,KC_SPC),KC_ALGR,KC_DEL
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
 KC_SYSTEM_SLEEP,KC_1,  KC_2  ,  KC_3,    KC_4,    KC_5,                          KC_6,    KC_7,   KC_8,    KC_9,    KC_0,   KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    _______,   _______,_______, _______, _______, _______,                      KC_LEFT,  KC_DOWN,  KC_UP, KC_RIGHT, KC_SCLN, KC_KB_VOLUME_UP,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_KB_MUTE,_______,_______,_______,_______,   _______,                      _______, _______, _______, _______, _______, KC_KB_VOLUME_DOWN,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TILDE, _______, _______,    KC_SPC, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),
//
//     [1] = LAYOUT_split_3x6_3(
//   //,-----------------------------------------------------.                    ,-----------------------------------------------------.
//      KC_EXLM,   KC_1,    KC_2  ,  KC_3,    KC_4,    KC_5,                   KC_SYSTEM_SLEEP,_______,_______,_______,_______, KC_BSPC,
//   //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
// KC_KB_VOLUME_UP, KC_6,    KC_7,   KC_8,    KC_9,    KC_0,                       KC_LEFT,  KC_DOWN,  KC_UP, KC_RIGHT, KC_SCLN, _______,
//   //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
// KC_KB_VOLUME_DOWN,KC_KB_MUTE,_______,_______,_______,KC_GRV,                    _______, _______, _______, _______, _______, _______,
//   //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
//                                           KC_LCTL, KC_LOPT, KC_LGUI,    KC_SPC, KC_ALGR, _______
//                                       //`--------------------------'  `--------------------------'
//   ),
//     [3] = LAYOUT_split_3x6_3(
//   //,-----------------------------------------------------.                    ,-----------------------------------------------------.
//         QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
//       RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
//       RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
//                                           KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
//                                       //`--------------------------'  `--------------------------'
  
};
