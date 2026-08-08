#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_LEFT, KC_HOME, KC_RIGHT
    )
};

#if defined(ENCODER_ENABLE)
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU); // Rechtsdrehen = Lauter
        } else {
            tap_code(KC_VOLD); // Linksdrehen = Leiser
        }
    }
    return true;
}
#endif