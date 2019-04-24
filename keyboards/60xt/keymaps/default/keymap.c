#include QMK_KEYBOARD_H

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 *
 * ,-----------------------------------------------------------------------------------------------------------.
 * |Home |Print|     | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  +  |  ´  | BS        |
 * |-----+-----|     |-----------------------------------------------------------------------------------------|
 * | End | Del |     |   Tab  |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  Å  |  ¨  |        |
 * |-----+-----|     |---------------------------------------------------------------------------------| Enter |
 * |PgUp |PgDn |     |  Ctrl   |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  Ö  |  Ä  |  '  |       |
 * |-----+-----|     |-----------------------------------------------------------------------------------------|
 * |Left |Right|     |Shift |  <  |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  -  |  Shift   | Fn  |
 * |-----+-----|     |-----------------------------------------------------------------------------------------|
 * |  Up |Down |     |  Ctrl  |█████|  Alt   |                   Space                 |  AltGr |█████|  Gui   |
 * `-----------------------------------------------------------------------------------------------------------'
 */

  [0] = LAYOUT(
    KC_HOME,   KC_PSCR,   KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,   KC_NO,
    KC_END,   KC_DEL,   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,  KC_BSPC,
    KC_PGUP,   KC_PGDN,   KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS,  KC_ENT,
    KC_LEFT,   KC_RIGHT,   KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,  MO(1),
    KC_UP,   KC_DOWN,  KC_LCTL, KC_NO,   KC_LALT,                                     KC_SPC,                             KC_RALT, KC_NO,    KC_LGUI
  ),
  
 /*
 *
 * ,-----------------------------------------------------------------------------------------------------------.
 * |     |     |     | ~   |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |       Del |
 * |-----+-----|     |-----------------------------------------------------------------------------------------|
 * |     | Ins |     |        |     |     |     |     |     |     |     |     |     |     | Up  |     |        |
 * |-----+-----|     |---------------------------------------------------------------------------------|       |
 * |     |     |     |         |     |     |     |     |     |Left |Down | Up  |Right|Left |Down |Right|       |
 * |-----+-----|     |-----------------------------------------------------------------------------------------|
 * |     |     |     |      |Reset|     |     |     |     |     |     |     |     |     |     |          | Fn  |
 * |-----+-----|     |-----------------------------------------------------------------------------------------|
 * |     |     |     |        |█████|        |                                         |        |█████|        |
 * `-----------------------------------------------------------------------------------------------------------'
 */ 
  
   [1] = LAYOUT(
    _______,  _______,  KC_GRAVE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,  _______,
    _______, KC_INS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_UP, _______,  KC_DEL,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_LEFT, KC_DOWN, KC_RIGHT,  _______,
    _______, _______, _______, RESET, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,
    _______, _______, _______, _______, _______,                                     _______,                            _______, _______,  _______
  ),

};

void matrix_scan_user(void) {

//Layer LED indicators
    uint32_t layer = layer_state;

    if (layer & (1<<1)) {
        _60xt_fn_led_on();
    } else {
        _60xt_fn_led_off();
    }

};