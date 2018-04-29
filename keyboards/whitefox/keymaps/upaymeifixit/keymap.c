#include "whitefox.h"

enum preonic_layers {
  _QWERTY,
  _WORKMAN,
  _COLEMAK,
  _DVORAK,
  _FUNC,
};

enum preonic_keycodes {
  QWERTY = SAFE_RANGE,
  WORKMAN,
  COLEMAK,
  DVORAK,
  FUNC,
};

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* QWERTY (Default Layer)
     * ,---------------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|Prt|
     * |---------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|Del|
     * |---------------------------------------------------------------|
     * |Fn/CL |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |PgU|
     * |---------------------------------------------------------------|
     * |Shif|   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Up |PgD|
     * |---------------------------------------------------------------|
     * |Ctrl|Alt |Gui |         Space    |Gui |Alt |Ctrl |  |Lef|Dow|Rig|
     * `---------------------------------------------------------------'
     */
    [_QWERTY] = KEYMAP( \
      KC_ESC, KC_1,   KC_2,    KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSLS,KC_GRV, KC_PSCR, \
      KC_TAB, KC_Q,   KC_W,    KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSPC,     KC_DEL, \
      KC_CAPS,KC_A,   KC_S,    KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L,   KC_SCLN,KC_QUOT,KC_NUHS,KC_ENT,      KC_PGUP,\
      KC_LSFT,KC_NUBS,KC_Z,    KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,     KC_UP,  KC_PGDN,\
      KC_LCTL,KC_LALT,KC_LGUI,                 KC_SPC,             KC_RGUI,KC_RALT,KC_RCTL,     KC_LEFT,KC_DOWN,KC_RGHT \
    ),
    /* Workman
     * ,---------------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|Prt|
     * |---------------------------------------------------------------|
     * |Tab  |  Q|  D|  R|  W|  B|  J|  F|  U|  P|  ;|  [|  ]|Backs|Del|
     * |---------------------------------------------------------------|
     * |Fn/CL |  A|  S|  H|  T|  G|  Y|  N|  E|  O|  I|  '|Enter   |PgU|
     * |---------------------------------------------------------------|
     * |Shif|   |  Z|  X|  M|  C|  V|  K|  L|  ,|  .|  /|Shift |Up |PgD|
     * |---------------------------------------------------------------|
     * |Ctrl|Alt |Gui |         Space    |Gui |Alt |Ctrl |  |Lef|Dow|Rig|
     * `---------------------------------------------------------------'
     */
    [_WORKMAN] = KEYMAP( \
      KC_ESC, KC_1,   KC_2,    KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSLS,KC_GRV, KC_PSCR, \
      KC_TAB, KC_Q,   KC_D,    KC_R, KC_W, KC_B, KC_J, KC_F, KC_U, KC_P,   KC_SCLN,KC_LBRC,KC_RBRC,KC_BSPC,     KC_DEL, \
      KC_CAPS,KC_A,   KC_S,    KC_H, KC_T, KC_G, KC_Y, KC_N, KC_E, KC_O,   KC_I,   KC_QUOT,KC_NUHS,KC_ENT,      KC_PGUP,\
      KC_LSFT,KC_NUBS,KC_Z,    KC_X, KC_M, KC_C, KC_V, KC_K, KC_L, KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,     KC_UP,  KC_PGDN,\
      KC_LCTL,KC_LALT,KC_LGUI,                 KC_SPC,             KC_RGUI,KC_RALT,KC_RCTL,     KC_LEFT,KC_DOWN,KC_RGHT \
    ),
    /* Dvorak
     * ,---------------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  [|  ]|  `|  \|Prt|
     * |---------------------------------------------------------------|
     * |Tab  |  '|  ,|  .|  P|  Y|  F|  G|  C|  R|  L|  /|  =|Backs|Del|
     * |---------------------------------------------------------------|
     * |Fn/CL |  A|  O|  E|  U|  I|  D|  H|  T|  N|  S|  -|Enter   |PgU|
     * |---------------------------------------------------------------|
     * |Shif|   |  ;|  Q|  J|  K|  X|  B|  M|  W|  V|  Z|Shift |Up |PgD|
     * |---------------------------------------------------------------|
     * |Ctrl|Alt |Gui |         Space    |Gui |Alt |Ctrl |  |Lef|Dow|Rig|
     * `---------------------------------------------------------------'
     */
    [_DVORAK] = KEYMAP( \
      KC_ESC, KC_1,   KC_2,    KC_3,   KC_4, KC_5, KC_6, KC_7, KC_8, KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSLS,KC_GRV, KC_PSCR, \
      KC_TAB, KC_QUOT,KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R,   KC_L,   KC_LSSH,KC_EQL, KC_BSPC,     KC_DEL, \
      KC_CAPS,KC_A,   KC_O,    KC_E,   KC_U, KC_I, KC_D, KC_H, KC_T, KC_N,   KC_S,KC_S,   KC_MINS,KC_ENT,      KC_PGUP,\
      KC_LSFT,KC_NUBS,KC_Z,    KC_X,   KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,     KC_UP,  KC_PGDN,\
      KC_LCTL,KC_LALT,KC_LGUI,                 KC_SPC,             KC_RGUI,KC_RALT,KC_RCTL,     KC_LEFT,KC_DOWN,KC_RGHT \
    ),
    [_FUNC] = KEYMAP( \
      KC_TRNS,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_TRNS,KC_TRNS,KC_MUTE,\
      KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PSCR,KC_SLCK,KC_PAUS,KC_TRNS,     KC_TRNS,\
      KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,     KC_VOLU,\
      KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,     KC_PGUP,KC_VOLD,\
      KC_TRNS,KC_TRNS,KC_TRNS,               KC_TRNS,          KC_TRNS,KC_TRNS,KC_TRNS,     KC_HOME,KC_PGDN,KC_END  \
    ),
};

const uint16_t fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};
