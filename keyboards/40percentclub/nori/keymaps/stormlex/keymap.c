#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _ADJUST 1

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

#define ADJUST MO(_ADJUST)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * ,---------------------------.          ,---------------------------.          ,---------------------------.
 * |  F1  |  F2  |  F3  |  F4  |          |  Ins | Home | PgUp |NmLck |          |   7  |   8  |   9  |  *   |
 * |------+------+------+------|          |------+-------------+------|          |------+------+------+------|
 * |  F5  |  F6  |  F7  |  F8  |          |  Del | End  | PgDn |PrtSc |          |   4  |   5  |   6  |  -   |
 * |------+------+------+------|          |------+------|------+------|          |------+------+------+------|
 * |  F9  |  F10 |  F11 |  F12 |          | VolD |  Up  | VolU | Mute |          |   1  |   2  |   3  |  +   |
 * |------+------+------+------|          |------+------+------+------|          |------+------+------+------|
 * | Ctrl | Alt  |AltGr | GUI  |          | Left | Down | Right|  App |          |   /  |   0  |   ,  |Enter |
 * `---------------------------´          `---------------------------'          `---------------------------'
 */
[_QWERTY] = LAYOUT_ortho_4x12(
   KC_F1,   KC_F2,   KC_F3,   KC_F4,      KC_INS,  KC_HOME, KC_PGUP, KC_NLCK,    KC_P7,   KC_P8,  KC_P9,   KC_PAST, \
   KC_F5,   KC_F6,   KC_F7,   KC_F8,      KC_DEL,  KC_END,  KC_PGDN, KC_PSCR,    KC_P4,   KC_P5,  KC_P6,   KC_PMNS, \
   KC_F9,   KC_F10,  KC_F11,  KC_F12,     KC_VOLD, KC_UP,   KC_VOLU, KC_MUTE,    KC_P1,   KC_P2,  KC_P3,   KC_PPLS , \
   KC_LCTL, KC_LALT, KC_RALT, KC_LGUI,    KC_LEFT, KC_DOWN, KC_RGHT, KC_APP,     KC_PSLS, KC_P0,  KC_PDOT, KC_PENT  \
)

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
