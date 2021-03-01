#include QMK_KEYBOARD_H

/* -------------------------- */
/*     Key configuration      */
/* -------------------------- */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_GESC, KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_LCTL, KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, /*----*/ KC_ENT,
        KC_LSFT, /*-----*/ KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_UP,   KC_RSFT,
        MO(1),   MOD_LALT, KC_LGUI, /*----------------------*/ KC_SPC,  /*-------------*/ KC_RALT, MO(2),   KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT(
        _______, KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        _______, _______,  KC_UP,   _______, _______, _______, KC_CALC, _______, KC_INS,  _______, KC_PSCR, KC_SLCK, KC_PAUS, RESET,
        _______, KC_LEFT,  KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGUP, /*----*/ EEP_RST,
        _______, /*-----*/ _______, _______, _______, _______, _______, NK_TOGG, _______, _______, KC_END,  KC_PGDN, KC_VOLU, KC_MUTE,
        _______, _______,  _______, /*----------------------*/ _______, /*-------------*/ _______, _______, KC_MPRV, KC_VOLD, KC_MNXT
    ),
    [2] = LAYOUT(
        _______, KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        _______, RGB_TOG,  _______, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, RGB_MOD, _______, _______, _______, RESET,
        _______, _______,  _______, _______, _______, _______, _______, _______, RGB_SPI, RGB_SPD, _______, _______, /*----*/ EEP_RST,
        _______, /*-----*/ _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______,  _______, /*----------------------*/ _______, /*-------------*/ _______, _______, _______, _______, _______
    )
};

// Adjust decreasing rate for "Typing heatmap"
#define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY 10

