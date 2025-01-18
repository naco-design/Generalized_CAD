// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┐
     * │Esc│   │DEL│"("│ ) │ / │ * │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │Fn │   │   │ 7 │ 8 │ 9 │ - │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │Tab│   │   │ 4 │ 5 │ 6 │ + │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │SFT│   │   │ 1 │ 2 │ 3 │   │
     * ├───┴─┬─┴───┼───┼───┼───┤ENT│
     * │ Ctl │ Alt │ 0 │ . │BS │   │
     * └─────┴─────┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_ESCAPE,   LCTL(KC_J),   KC_DEL,   LSFT(KC_8),   LSFT(KC_9),   KC_SLASH,   LSFT(KC_QUOTE),
        TO(1),   LCTL(KC_H),   LCA(KC_E),   KC_7,   KC_8,   KC_9,   KC_MINUS,
        LT(3, KC_TAB),   LCTL(KC_C),   LCTL(KC_V),   KC_4,   KC_5,   KC_6,   LSFT(KC_SCLN),
        KC_LSFT,   LCTL(KC_Z),   LCTL(KC_Y),   KC_1,   KC_2,   KC_3,   KC_ENT,
        KC_LCTL,   KC_NO,   KC_LALT,   KC_0,   LT(3, KC_DOT),   KC_BSPC,   KC_NO
    ),
    [1] = LAYOUT(
        _______,   _______,   _______,   _______,   _______,   _______,   _______,
        TO(2),   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   KC_NO,   _______,   _______,   _______,   _______,   KC_NO
    ),
    [2] = LAYOUT(
        LCTL(KC_D),   LCTL(LSFT(KC_I)),   _______,   _______,   _______,   _______,   _______,
        TO(0),   KC_SPACE,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   LCTL(LSFT(KC_Z)),   _______,   _______,   _______,   _______,
        _______,   KC_NO,   _______,   _______,   _______,   _______,   KC_NO
    ),
    [3] = LAYOUT(
        LALT(KC_GRAVE),   LCTL(KC_G),   KC_BSPC,   KC_LBRC,   KC_RBRC,   _______,   _______,
        LCTL(KC_S),   LCA(KC_H),   _______,   KC_HOME,   KC_UP,   KC_PGUP,   LSFT(KC_COMMA),
        KC_NO,   LCTL(KC_X),   _______,   KC_LEFT,   KC_NO,   KC_RIGHT,   LSFT(KC_DOT),
        _______,   _______,   _______,   KC_END,   KC_DOWN,   KC_PGDN,   LSFT(KC_MINUS),
        _______,   KC_NO,   _______,   KC_COMMA,   KC_NO,   KC_SPACE,   KC_NO
    )
};

layer_state_t layer_state_set_user(layer_state_t state) {
#ifdef RGBLIGHT_ENABLE
    switch (get_highest_layer(state)) {
        default:
            //rgblight_sethsv(HSV_WHITE); 
            rgblight_sethsv(HSV_MAGENTA); 
            break;
        case 1:
            //rgblight_sethsv(HSV_CYAN); 
            rgblight_setrgb(0, 8, 0);
            break;
        case 2:
            //rgblight_sethsv(HSV_MAGENTA); 
            rgblight_sethsv(HSV_RED);
            break;
        case 3:
            //rgblight_sethsv(HSV_GREEN); 
            rgblight_sethsv(HSV_BLUE);
            break;
    }
#endif
return state;
};