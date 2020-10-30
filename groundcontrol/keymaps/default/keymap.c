#include QMK_KEYBOARD_H

#define _BASE 0
#define _RAISE 1


enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
};
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QMKBEST:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING("");
      } else {
        // when keycode QMKBEST is released
      }
      break;

  }
  return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_NO, KC_KP_7,   KC_KP_8, KC_KP_9,    KC_KP_PLUS, \
    KC_NO, KC_KP_4,   KC_KP_5, KC_KP_6,    KC_MINS, \
    KC_NO, KC_KP_1,   KC_KP_2, KC_KP_3,    KC_KP_ASTERISK, \
    MO(_RAISE), KC_KP_DOT, KC_KP_0, KC_KP_SLASH,   KC_ENT \
  ),
  [_RAISE] = LAYOUT(
    KC_NO,          KC_PGUP,   KC_NUMLOCK, KC_EQUAL,     KC_DELETE, \
    KC_NO,          KC_PGDOWN, QMKBEST,    KC_KP_COMMA,  KC_BSPACE, \
    KC_NO,          KC_HOME,   KC_UP,      KC_END,       KC_SPACE, \
    KC_TRANSPARENT, KC_LEFT,   KC_DOWN,    KC_RIGHT,     KC_TRANSPARENT \
  ),
};