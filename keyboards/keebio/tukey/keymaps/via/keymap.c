#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(RGB_MOD, RGB_TOG),
    [1] = LAYOUT(KC_TRNS, KC_TRNS),
    [2] = LAYOUT(KC_TRNS, KC_TRNS),
    [3] = LAYOUT(KC_TRNS, KC_TRNS),
};
