#include QMK_KEYBOARD_H

#define KCX_CMD MO(_CMD)

enum layer_number {
  _QWERTY = 0,
  _CMD,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
      KC_ESC,   KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
      KC_TAB,   KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
      KC_NO,    KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_NUBS, KC_ENTER,
      KC_LSFT,  KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
      KC_LCTL,  KC_NO, KC_NO, KC_LALT, KCX_CMD, KC_BSPC, KC_SPACE, KC_ALGR, KC_NO, KC_RCTL, KC_LBRC, KC_RBRC          
    ),

    [_CMD] = LAYOUT(
      KC_NO,    KC_NO, KC_NO, KC_NO,  KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_NO,    KC_NO, KC_NO, KC_NO,  KC_NO,    KC_NO, KC_COPY, KC_NO, KC_NO, KC_NO, KC_PASTE, KC_NO,
      KC_NO,    KC_NO, KC_NO, KC_NO,  KC_NO,    KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_NO, KC_NO,
      KC_TRNS,  KC_NO, KC_NO, KC_NO,  KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_TRNS,  KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_RCTL, KC_LBRC, KC_NO          
    )
};
