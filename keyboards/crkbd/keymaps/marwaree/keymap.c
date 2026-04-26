#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3_ex2(
       //,-------------------------------------------------------------.  ,--------------------------------------------------------------.
   LALT_T(KC_TAB),    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,   KC_NO,      KC_NO,    KC_J,    KC_L,    KC_U,    KC_Y, KC_SCLN,  KC_DEL,
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
   LCTL_T(KC_ESC),    KC_A,    KC_R,    KC_S,    KC_T,    KC_G,   KC_NO,      KC_NO,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O, KC_QUOT,
      //|--------+--------+--------+--------+--------+--------+--------'  '--------+--------+--------+--------+--------+--------+--------|
          KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                         KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
      //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                         KC_LSFT, LT(1, KC_BSPC), MO(2),   LT(3, KC_ENT), LGUI_T(KC_SPC), KC_RALT
                                          //`--------------------------'  `--------------------------'

            ),
    [1] = LAYOUT_split_3x6_3_ex2(
       //,-------------------------------------------------------------.  ,--------------------------------------------------------------.
          KC_TRNS, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,   KC_NO,      KC_NO, KC_CIRC, KC_AMPR, KC_ASTR, KC_MINS,  KC_EQL, KC_TRNS,
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
          KC_TRNS,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_NO,      KC_NO,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_TRNS,
      //|--------+--------+--------+--------+--------+--------+--------'  '--------+--------+--------+--------+--------+--------+--------|
          KC_TRNS,   KC_NO,   KC_NO,  KC_GRV, KC_TILD,   KC_NO,                        KC_NO, KC_BSLS, KC_PIPE, KC_UNDS, KC_PLUS, KC_TRNS,
      //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                              KC_TRNS,   KC_NO, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS
                                          //`--------------------------'  `--------------------------'

            ),
    [2] = LAYOUT_split_3x6_3_ex2(
       //,-------------------------------------------------------------.  ,--------------------------------------------------------------.
          KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO, KC_PGUP, KC_HOME,   KC_UP,  KC_END,   KC_NO,   KC_NO,
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
          KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT,   KC_NO,   KC_NO,
      //|--------+--------+--------+--------+--------+--------+--------'  '--------+--------+--------+--------+--------+--------+--------|
          KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_TRNS,
      //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                              KC_TRNS, KC_BSPC,   KC_NO,   LT(4, KC_ENT), KC_TRNS, KC_TRNS
                                          //`--------------------------'  `--------------------------'

            ),
    [3] = LAYOUT_split_3x6_3_ex2(
       //,-------------------------------------------------------------.  ,--------------------------------------------------------------.
          KC_TRNS,   KC_NO,   KC_NO,   MS_UP, MS_WHLU,   KC_NO,   KC_NO,      KC_NO,   KC_NO, MS_WHLU,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
          KC_TRNS,   KC_NO, MS_LEFT, MS_DOWN, MS_RGHT,   KC_NO,   KC_NO,      KC_NO,   KC_NO, MS_BTN1, MS_BTN2,   KC_NO,   KC_NO,   KC_NO,
      //|--------+--------+--------+--------+--------+--------+--------'  '--------+--------+--------+--------+--------+--------+--------|
          KC_TRNS,   KC_NO,   KC_NO,   KC_NO, MS_WHLD,   KC_NO,                        KC_NO, MS_WHLD,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
      //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                              KC_TRNS, KC_TRNS,   MO(4),      KC_NO, KC_TRNS, KC_TRNS
                                          //`--------------------------'  `--------------------------'

            ),
    [4] = LAYOUT_split_3x6_3_ex2(
       //,-------------------------------------------------------------.  ,--------------------------------------------------------------.
          KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, RM_TOGG,    RM_HUEU,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
          KC_TRNS,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_NO,    RM_HUED,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,   KC_NO,
      //|--------+--------+--------+--------+--------+--------+--------'  '--------+--------+--------+--------+--------+--------+--------|
          KC_TRNS,   KC_NO,   KC_NO,   KC_NO,  KC_F11,   KC_NO,                        KC_NO,  KC_F12,   KC_NO,   KC_NO,   KC_NO, KC_TRNS,
      //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                              KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS
                                          //`--------------------------'  `--------------------------'

            )};

#define SPC_MT LGUI_T(KC_SPC)

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (keycode == SPC_MT && record->tap.count && record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
            tap_code16(KC_UNDS);
            return false;
        }
    }
    return true;
}



const key_override_t opening_parentheses_override = ko_make_basic(MOD_BIT(KC_RALT), KC_T, KC_LPRN);
const key_override_t closing_parentheses_override = ko_make_basic(MOD_BIT(KC_RALT), KC_D, KC_RPRN);
const key_override_t opening_bracket_override = ko_make_basic(MOD_BIT(KC_RALT), KC_S, KC_LBRC);
const key_override_t closing_bracket_override = ko_make_basic(MOD_BIT(KC_RALT), KC_C, KC_RBRC);
const key_override_t opening_cbracket_override = ko_make_basic(MOD_BIT(KC_RALT), KC_R, KC_LCBR);
const key_override_t closing_cbracket_override = ko_make_basic(MOD_BIT(KC_RALT), KC_X, KC_RCBR);

// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
    &opening_parentheses_override,
    &closing_parentheses_override,
    &opening_bracket_override,
    &closing_bracket_override,
    &opening_cbracket_override,
    &closing_cbracket_override,
};

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C
