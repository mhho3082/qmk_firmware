/* Copyright 2023 yushakobo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Base: Colemak Mod-DH + home row mods (AGCS, inspired by Miryoku and Seniply)
    [0] = LAYOUT(
XXXXXXX, XXXXXXX,      XXXXXXX,      XXXXXXX,        XXXXXXX,       XXXXXXX,                         XXXXXXX,       XXXXXXX,        XXXXXXX,       XXXXXXX,      XXXXXXX,      XXXXXXX,
XXXXXXX, KC_Q,         KC_W,         KC_F,           KC_P,          KC_B,          XXXXXXX, XXXXXXX, KC_J,          KC_L,           KC_U,          KC_Y,         KC_TAB,       XXXXXXX,
KC_SCLN, LALT_T(KC_A), LGUI_T(KC_R), LCTL_T(KC_S),   LSFT_T(KC_T),  KC_G,          XXXXXXX, XXXXXXX, KC_M,          RSFT_T(KC_N),   RCTL_T(KC_E),  RGUI_T(KC_I), RALT_T(KC_O), KC_QUOT,
XXXXXXX, KC_Z,         KC_X,         KC_C,           KC_D,          KC_V,          XXXXXXX, XXXXXXX, KC_K,          KC_H,           KC_COMM,       KC_DOT,       KC_SLSH,      XXXXXXX,
XXXXXXX, XXXXXXX,      XXXXXXX,      LT(3, KC_CAPS), LT(1, KC_SPC), LT(2, KC_ESC), XXXXXXX, XXXXXXX, LT(2, KC_ENT), LT(1, KC_BSPC), LT(3, KC_DEL), XXXXXXX,      XXXXXXX,      XXXXXXX
    ),
    // Symbols (Inspired by BEAKL 15)
    [1] = LAYOUT(
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
XXXXXXX, _______, KC_LT,   KC_UNDS, KC_GT,   _______, XXXXXXX, XXXXXXX, _______, KC_LCBR, KC_PLUS, KC_RCBR, _______, XXXXXXX,
_______, KC_AT,   KC_LPRN, KC_MINS, KC_RPRN, KC_HASH, XXXXXXX, XXXXXXX, KC_ASTR, KC_LBRC, KC_EQL,  KC_RBRC, KC_PIPE, _______,
XXXXXXX, KC_PERC, KC_CIRC, KC_GRV,  KC_EXLM, _______, XXXXXXX, XXXXXXX, _______, KC_AMPR, KC_TILD, KC_DLR,  KC_BSLS, XXXXXXX,
XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
    ),
    // Number Pad and Nav (Inspired by Miryoku)
    [2] = LAYOUT(
XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
XXXXXXX, _______, KC_7,         KC_8,         KC_9,         KC_MINS, XXXXXXX, XXXXXXX, _______, KC_F11,  KC_F12,  _______, _______, XXXXXXX,
_______, KC_LALT, LGUI_T(KC_4), LCTL_T(KC_5), LSFT_T(KC_6), KC_0,    XXXXXXX, XXXXXXX, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
XXXXXXX, _______, KC_1,         KC_2,         KC_3,         KC_DOT,  XXXXXXX, XXXXXXX, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX,
XXXXXXX, XXXXXXX, XXXXXXX,      _______,      _______,      _______, XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
    ),
    // Mouse and Media (Inspired by Miryoku)
    [3] = LAYOUT(
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
XXXXXXX, QK_BOOT, _______, MS_BTN4, MS_BTN5, _______, XXXXXXX, XXXXXXX, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, XXXXXXX,
_______, _______, MS_BTN2, MS_BTN3, MS_BTN1, _______, XXXXXXX, XXXXXXX, _______, MS_LEFT, MS_DOWN, MS_UP,   MS_RGHT, _______,
XXXXXXX, KC_LALT, KC_LGUI, KC_LCTL, KC_LSFT, _______, XXXXXXX, XXXXXXX, _______, MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, XXXXXXX,
XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
    ),
//     [9] = LAYOUT(
// XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// XXXXXXX, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, XXXXXXX,
// _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______,
// XXXXXXX, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, XXXXXXX,
// XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
//     ),
};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    return false;
}

void keyboard_post_init_user(void) {
    rgblight_disable();
}
