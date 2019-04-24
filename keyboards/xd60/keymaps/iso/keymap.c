#include QMK_KEYBOARD_H
#include "action_layer.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   /*
   *  Base layer
   * ,-------------------------------------------------------------------------------------------.
   * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  +  |  ´  |     BckSp   |
   * |-------------------------------------------------------------------------------------------|
   * | Tab  |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  Å  |  ¨  |   		 |
   * |--------------------------------------------------------------------------------|  Return  |
   * | Caps  |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  Ö  |  Ä  |  '   |          |
   * |-------------------------------------------------------------------------------------------|
   * |Shift|  <  |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  -  |   Shift    | FN   |
   * |-------------------------------------------------------------------------------------------|
   * |  Ctrl  | Gui |  Alt   |                    Space                | AltGr  | Gui |   Ctrl   |
   * `-------------------------------------------------------------------------------------------'
   */
  // 0: Base Layer
  LAYOUT_all(
      KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  KC_DEL,   \
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC,           KC_NO,   \
      KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_NUHS,           KC_ENT,  \
      KC_LSFT,   KC_NUBS,   KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_RSFT,F(0),  \
      KC_LCTL, KC_LGUI, KC_LALT,                          KC_SPC,                          KC_NO, KC_RALT, KC_NO, KC_LGUI,  KC_RCTL),

	 
   /*
   *  Functions layer
   * ,-------------------------------------------------------------------------------------------.
   * |  §  |  F1 | F2 | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10  | F11 | F12 |     Del     |
   * |-------------------------------------------------------------------------------------------|
   * | Tab  |Vol D| Mute|Vol U|     |     | Ins | Home| End | PgUp|PnScr|  Up |     |   		 |
   * |--------------------------------------------------------------------------------|  Return  |
   * | Caps  |     |     |     |     |     |     |     |     | PgDn|Left |Down |Right |          |
   * |-------------------------------------------------------------------------------------------|
   * |Shift|RGB_T|BL_to|     |     |     |     |     |     |     |     |     |   Shift    | FN   |
   * |-------------------------------------------------------------------------------------------|
   * |  Ctrl  | Gui |  Alt   |                    Space                | AltGr  | Gui |   Ctrl   |
   * `-------------------------------------------------------------------------------------------'
   */
  // 1: Function Layer
  LAYOUT_all(
      KC_GRV,   KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_DEL,  KC_NO,  \
      KC_TAB,   KC_VOLD, KC_MUTE, KC_VOLU, KC_NO,  KC_NO,  KC_INS,  KC_HOME,  KC_END,  KC_PGUP, KC_PSCR, KC_UP, KC_NO,           KC_NO,  \
      KC_CAPS,   KC_NO, KC_NO, KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_PGDN,  KC_LEFT,   KC_DOWN,   KC_RIGHT,              KC_ENT, \
      KC_LSFT, RGB_TOG, BL_TOGG, KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT,   F(0), \
      KC_LCTL, KC_LGUI, KC_LALT,                          KC_SPC,                          KC_NO, KC_RALT, KC_NO, KC_LGUI,  KC_RCTL),

};

// Custom Actions
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
};

// Macros
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {

  // MACRODOWN only works in this function
  switch(id) {
    case 0:
      if (record->event.pressed) { register_code(KC_RSFT); }
      else { unregister_code(KC_RSFT); }
      break;
  }

  return MACRO_NONE;
};

// Loop
void matrix_scan_user(void) {
  // Empty
};
