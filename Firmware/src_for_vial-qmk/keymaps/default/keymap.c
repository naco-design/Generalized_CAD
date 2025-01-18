// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Used to set octave to MI_OCT_0
extern midi_config_t midi_config;
// Initial velocity value (avoid using 127 since it is used as a special number in some sound sources.)
#define MIDI_INITIAL_VELOCITY 117

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┐
     * │Esc│Del│ Bs│"("│ ) │ / │ * │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │Tab│ A │ E │ 7 │ 8 │ 9 │ - │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │ X │ C │ V │ 4 │ 5 │ 6 │ + │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │SFT│ Z │ Y │ 1 │ 2 │ 3 │Ent│
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │Ctl│   │Alt│ 0 │ . │ = │   │
     * └───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_ESC,   KC_DEL,   KC_BSPC,   KC_LPRN,   KC_RPRN,   KC_PSLS,   KC_PAST,
        KC_TAB,   KC_A,   KC_E,   KC_P7,   KC_P8,   KC_P9,   KC_PMNS,
        KC_X,   KC_C,   KC_V,   KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
        KC_LSFT,   KC_Z,   KC_Y,   KC_P1,   KC_P2,   KC_P3,   KC_ENT,
        KC_LCTL,   KC_NO,   KC_LALT,   KC_P0,   KC_PDOT,   KC_PEQL,   KC_NO
    )
};