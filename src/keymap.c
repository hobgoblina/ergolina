#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"

#define KC_MAC_UNDO     LGUI(KC_Z)
#define KC_MAC_CUT      LGUI(KC_X)
#define KC_MAC_COPY     LGUI(KC_C)
#define KC_MAC_PASTE    LGUI(KC_V)
#define KC_PC_UNDO      LCTL(KC_Z)
#define KC_PC_CUT       LCTL(KC_X)
#define KC_PC_COPY      LCTL(KC_C)
#define KC_PC_PASTE     LCTL(KC_V)
#define ES_LESS_MAC     KC_GRAVE
#define ES_GRTR_MAC     LSFT(KC_GRAVE)
#define ES_BSLS_MAC     ALGR(KC_6)
#define NO_PIPE_ALT     KC_GRAVE
#define NO_BSLS_ALT     KC_EQUAL
#define LSA_T(kc)       MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC     ALGR(KC_8)
#define OPEN_ITERM      LALT(LCTL(LGUI(LSFT(KC_T))))

enum custom_keycodes {
    RGB_SLD = EZ_SAFE_RANGE,
    HSV_215_255_128,
    HSV_136_114_238,
    HSV_27_255_255,
};

enum tap_dance_codes {
    DANCE_0,
    DANCE_1,
    DANCE_2,
    DANCE_3,
    DANCE_4,
    DANCE_5,
    DANCE_6,
    DANCE_7,
    DANCE_8,
    DANCE_9,
    TAP_MACRO,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ergodox_pretty(
        LGUI(KC_S),     KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_MINUS,                                       KC_EQUAL,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TD(DANCE_8),
        TD(TAP_MACRO),  KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TD(DANCE_6),                                    TD(DANCE_7),    KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSPACE,
        KC_LOCK,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_ENTER,
        KC_LSPO,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           LT(1,KC_LBRACKET),                              LT(3,KC_RBRACKET),KC_N,         KC_M,           KC_COMMA,       KC_DOT,         KC_UP,          KC_RSPC,
        KC_LCTRL,       KC_LALT,        KC_LGUI,        KC_GRAVE,       KC_QUOTE,                                                                                                       KC_SLASH,       KC_BSLASH,      KC_LEFT,        KC_DOWN,        KC_RIGHT,
                                                                                                        TD(DANCE_9),    OPEN_ITERM,     TD(DANCE_2),    TD(DANCE_3),
                                                                                                                        TD(DANCE_0),    TD(DANCE_4),
                                                                                        KC_SPACE,       KC_TAB,         TD(DANCE_1),    TD(DANCE_5),    KC_TAB,         KC_SPACE
    ),
    [1] = LAYOUT_ergodox_pretty(
        KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_HUD,        RGB_HUI,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F12,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_SPD,        RGB_SPI,                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_VAD,        RGB_VAI,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,                                                                                                KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,
                                                                                                        RGB_TOG,        HSV_215_255_128,KC_MEDIA_REWIND,KC_MEDIA_FAST_FORWARD,
                                                                                                                        HSV_136_114_238,KC_MEDIA_NEXT_TRACK,
                                                                                        RGB_MOD,        RGB_SLD,        HSV_27_255_255, KC_MEDIA_PREV_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE
    ),
    [2] = LAYOUT_ergodox_pretty(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,                                                                                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
    ),
    [3] = LAYOUT_ergodox_pretty(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, LGUI(KC_A),     KC_TRANSPARENT, KC_TRANSPARENT, KC_MAC_UNDO,    LSFT(KC_MAC_UNDO),                                                                KC_MAC_COPY,    KC_MAC_PASTE,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MAC_CUT,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
    ),
    [4] = LAYOUT_ergodox_pretty(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
    ),
};


rgblight_config_t rgblight_config;
bool disable_layer_color = 0;

bool suspended = false;

// For dynamic macro tap dance
static bool is_macro1_recording = false;
static uint32_t current_layer_state = 0;

// For shift+backspace -> forward delete
static bool delkey_registered = false;
uint8_t mod_state;

// All these are for key lock to work with tap dances and space cadet shifts
static bool lock_listening = false;
static bool shift_locked = false;
static bool L1_locked = false;
static bool L2_locked = false;
static bool L3_locked = false;
static bool L4_locked = false;
static bool lock_dance = false;

// Value to use to switch LEDs on. The default value of 255 is far too bright.
static const uint8_t max_led_value = 20;
static const uint8_t green_led_value = 10; // Green is brighter

void led_1_on(void) {
  ergodox_right_led_1_on();
  ergodox_right_led_1_set(max_led_value);
}

void led_2_on(void) {
  ergodox_right_led_2_on();
  ergodox_right_led_2_set(10);
}

void led_3_on(void) {
  ergodox_right_led_3_on();
  ergodox_right_led_3_set(green_led_value);
}

void led_1_off(void) {
  ergodox_right_led_1_off();
}

void led_2_off(void) {
  ergodox_right_led_2_off();
}

void led_3_off(void) {
  ergodox_right_led_3_off();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    mod_state = get_mods();

    // Enable key lock to work with multi-function keys
    if (lock_listening) {
        if (!record->event.pressed) {
        lock_listening = false;
        layer_state_set_user(current_layer_state);
        }

        switch (keycode) {
        case KC_LSPO:
            if (record->event.pressed) {
            register_code(KC_LSHIFT);
            shift_locked = true;
            } 
            return false;
        case KC_RSPC:
            if (record->event.pressed) {
            register_code(KC_LSHIFT); // Use KC_LSHIFT for both shift keys so either can unlock
            shift_locked = true;
            }
            return false;
        case LT(1,KC_LBRACKET):
            if (record->event.pressed) {
            layer_on(1);
            register_code16(KC_TRANSPARENT); // Throw these to the key lock in waiting, so it doesn't lock anything
            L1_locked = true;
            }
            return false;
        case LT(3,KC_RBRACKET):
            if (record->event.pressed) {
            layer_on(3);
            register_code16(KC_TRANSPARENT);
            L3_locked = true;
            }
            return false;
        }
    }

    // Unlock layers
    if (L1_locked && keycode == LT(1,KC_LBRACKET)) {
        if (record->event.pressed) {
        layer_off(1);
        register_code16(KC_TRANSPARENT);
        L1_locked = false;
        }
        return false;
    }

    if (L3_locked && keycode == LT(3,KC_RBRACKET)) {
        if (record->event.pressed) {
        layer_off(3);
        register_code16(KC_TRANSPARENT);
        L1_locked = false;
        }
        return false;
    }

    // Replace space cadet with LSHIFT if shift is locked
    if (shift_locked) {
        switch (keycode) {
        case KC_LSPO:
            if (record->event.pressed) {
            register_code(KC_LSHIFT);
            } else {
            unregister_code(KC_LSHIFT);
            if (shift_locked && !lock_listening) {
                shift_locked = false;
            }
            }
            return false;
        case KC_RSPC:
            if (record->event.pressed) {
            register_code(KC_LSHIFT);
            } else {
            unregister_code(KC_LSHIFT);
            if (shift_locked && !lock_listening) {
                shift_locked = false;
            }
            } 
            return false;
        }
    }

    switch (keycode) {
        case KC_LOCK:
        // For processing multi-function keys for key lock
        lock_listening = true;
        layer_state_set_user(current_layer_state);
        case KC_BSPC:
        // Shift + Backspace -> Forward Delete
        if (record->event.pressed) {
            if (mod_state & MOD_MASK_SHIFT) {
            del_mods(MOD_MASK_SHIFT);
            register_code(KC_DEL);
            delkey_registered = true;
            set_mods(mod_state);
            return false;
            }
        } else { 
            if (delkey_registered) {
            unregister_code(KC_DEL);
            delkey_registered = false;
            return false;
            }
        }
        return true;
        case RGB_SLD:
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
        case TOGGLE_LAYER_COLOR:
        if (record->event.pressed) {
            disable_layer_color ^= 1;
        }
        return false;
        case HSV_215_255_128:
        if (record->event.pressed) {
            #ifdef RGBLIGHT_ENABLE
            rgblight_enable();
            rgblight_mode(1);
            rgblight_sethsv(215,255,128);
            #endif
        }
        return false;
        case HSV_136_114_238:
        if (record->event.pressed) {
            #ifdef RGBLIGHT_ENABLE
            rgblight_enable();
            rgblight_mode(1);
            rgblight_sethsv(136,114,238);
            #endif
        }
        return false;
        case HSV_27_255_255:
        if (record->event.pressed) {
            #ifdef RGBLIGHT_ENABLE
            rgblight_enable();
            rgblight_mode(1);
            rgblight_sethsv(27,255,255);
            #endif
        }
        return false;
    }
    return true;
}

uint32_t layer_state_set_user(uint32_t state) {
    current_layer_state = state;
    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    led_1_off();
    led_2_off();
    led_3_off();

    // Indicate top layer index via LEDs in binary
    switch (layer) {
        case 1:
            led_1_on();
            break;
        case 2:
            led_2_on();
            break;
        case 3:
            led_3_on();
            break;
        case 4:
            led_1_on();
            led_2_on();
            break;
        case 5:
            led_1_on();
            led_3_on();
            break;
        case 6:
            led_2_on();
            led_3_on();
            break;
        case 7:
            led_1_on();
            led_2_on();
            led_3_on();
            break;
        default:
            break;
    }

    if (is_macro1_recording) {
        led_1_on();
        led_2_on();
        led_3_on();
        return state;
    }

    if (lock_listening) {
        led_1_on();
        led_2_on();
        led_3_on();
        return state;
    }

    switch (layer) {
        case 4:
            if(!disable_layer_color) {
            rgblight_enable_noeeprom();
            rgblight_mode_noeeprom(1);
            rgblight_sethsv_noeeprom(192,251,226);
            }
            break;
        default:
            if(!disable_layer_color) {
                rgblight_config.raw = eeconfig_read_rgblight();
                if(rgblight_config.enable == true) {
                    rgblight_enable();
                    rgblight_mode(rgblight_config.mode);
                    rgblight_sethsv(rgblight_config.hue, rgblight_config.sat, rgblight_config.val);
                }
                else {
                    rgblight_disable();
                }
            }
            break;
    }
    return state;

};

void keyboard_post_init_user(void) {
    layer_state_set_user(layer_state);
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state = {
    .is_press_action = true,
    .step = 0
};

// Determines key state for tap dances
uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(LSFT(KC_4)));
        tap_code16(LGUI(LSFT(KC_4)));
        tap_code16(LGUI(LSFT(KC_4)));
    }
    if(state->count > 3) {
        tap_code16(LGUI(LSFT(KC_4)));
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state.step = dance_step(state);
    switch (dance_state.step) {
        case SINGLE_TAP: register_code16(LGUI(LSFT(KC_4))); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_5))); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_3))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(LSFT(KC_4))); register_code16(LGUI(LSFT(KC_4)));
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state.step) {
        case SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_4))); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_5))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_3))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_4))); break;
    }
    dance_state.step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state.step = dance_step(state);
    switch (dance_state.step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_W)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state.step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_W)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state.step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_UP));
        tap_code16(LCTL(KC_UP));
        tap_code16(LCTL(KC_UP));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_UP));
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state.step = dance_step(state);
    switch (dance_state.step) {
        case SINGLE_TAP: register_code16(LCTL(KC_UP)); break;
        case SINGLE_HOLD: register_code16(KC_LCTRL); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_UP)); register_code16(LCTL(KC_UP)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_UP)); register_code16(LCTL(KC_UP));
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state.step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_UP)); break;
        case SINGLE_HOLD: unregister_code16(KC_LCTRL); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_UP)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_UP)); break;
    }
    dance_state.step = 0;
}
void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_TAB));
        tap_code16(LSFT(KC_TAB));
        tap_code16(LSFT(KC_TAB));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_TAB));
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state.step = dance_step(state);

    switch (dance_state.step) {
        case SINGLE_TAP: register_code16(LSFT(KC_TAB)); break;
        case SINGLE_HOLD: register_code16(KC_LSHIFT); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_TAB)); register_code16(LSFT(KC_TAB)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_TAB)); register_code16(LSFT(KC_TAB));
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state.step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_TAB)); break;
        case SINGLE_HOLD: unregister_code16(KC_LSHIFT); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_TAB)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_TAB)); break;
        }

    dance_state.step = 0;
}
void on_dance_4(qk_tap_dance_state_t *state, void *user_data);
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_4(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PGUP);
        tap_code16(KC_PGUP);
        tap_code16(KC_PGUP);
    }
    if(state->count > 3) {
        tap_code16(KC_PGUP);
    }
}
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state.step = dance_step(state);
    switch (dance_state.step) {
        case SINGLE_TAP: register_code16(KC_PGUP); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_RIGHT)); break;
        case DOUBLE_TAP: register_code16(KC_HOME); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PGUP); register_code16(KC_PGUP);
    }
}

void dance_4_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state.step) {
        case SINGLE_TAP: unregister_code16(KC_PGUP); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_RIGHT)); break;
        case DOUBLE_TAP: unregister_code16(KC_HOME); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PGUP); break;
    }
    dance_state.step = 0;
}
void on_dance_5(qk_tap_dance_state_t *state, void *user_data);
void dance_5_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_5_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_5(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PGDOWN);
        tap_code16(KC_PGDOWN);
        tap_code16(KC_PGDOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_PGDOWN);
    }
}

void dance_5_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state.step = dance_step(state);
    switch (dance_state.step) {
        case SINGLE_TAP: register_code16(KC_PGDOWN); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_LEFT)); break;
        case DOUBLE_TAP: register_code16(KC_END); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PGDOWN); register_code16(KC_PGDOWN);
    }
}

void dance_5_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state.step) {
        case SINGLE_TAP: unregister_code16(KC_PGDOWN); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_LEFT)); break;
        case DOUBLE_TAP: unregister_code16(KC_END); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PGDOWN); break;
    }
    dance_state.step = 0;
}

void on_dance_6(qk_tap_dance_state_t *state, void *user_data);
void dance_6_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_6_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_6(qk_tap_dance_state_t *state, void *user_data) {
    // Unlock layer immediately if locked via key lock
    if (L2_locked) {
        layer_off(2);
        register_code16(KC_TRANSPARENT);
        L2_locked = false;
        lock_dance = true;
    }

    // Lock layer immediately if key lock is waiting
    if (lock_listening) {
        layer_on(2);
        register_code16(KC_TRANSPARENT);
        L2_locked = true;
        lock_dance = true;
    }

    if(state->count == 3) {
        tap_code16(KC_LCBR);
        tap_code16(KC_LCBR);
        tap_code16(KC_LCBR);
    }
    if(state->count > 3) {
        tap_code16(KC_LCBR);
    }
}

void dance_6_finished(qk_tap_dance_state_t *state, void *user_data) {
    if (lock_dance) {
        return;
    }
    dance_state.step = dance_step(state);
    switch (dance_state.step) {
        case SINGLE_TAP: register_code16(KC_LCBR); break;
        case SINGLE_HOLD: layer_on(2); break;
        case DOUBLE_TAP: register_code16(KC_LCBR); register_code16(KC_LCBR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LCBR); register_code16(KC_LCBR);
    }
}

void dance_6_reset(qk_tap_dance_state_t *state, void *user_data) {
    if (lock_dance) { // Don't bother for the key lock-related taps
        lock_dance = false;
        return;
    }
    wait_ms(10);
    switch (dance_state.step) {
        case SINGLE_TAP: unregister_code16(KC_LCBR); break;
        case SINGLE_HOLD: layer_off(2); break;
        case DOUBLE_TAP: unregister_code16(KC_LCBR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LCBR); break;
    }
    dance_state.step = 0;
}

void on_dance_7(qk_tap_dance_state_t *state, void *user_data);
void dance_7_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_7_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_7(qk_tap_dance_state_t *state, void *user_data) {
    if (L4_locked) {
        layer_off(4);
        register_code16(KC_TRANSPARENT);
        L4_locked = false;
        lock_dance = true;
    }

    if (lock_listening) {
        layer_on(4);
        register_code16(KC_TRANSPARENT);
        L4_locked = true;
        lock_dance = true;
    }

    if(state->count == 3) {
        tap_code16(KC_RCBR);
        tap_code16(KC_RCBR);
        tap_code16(KC_RCBR);
    }
    if(state->count > 3) {
        tap_code16(KC_RCBR);
    }
}

void dance_7_finished(qk_tap_dance_state_t *state, void *user_data) {
    if (lock_dance) {
        return;
    }
    dance_state.step = dance_step(state);
    switch (dance_state.step) {
        case SINGLE_TAP: register_code16(KC_RCBR); break;
        case SINGLE_HOLD: layer_on(4); break;
        case DOUBLE_TAP: register_code16(KC_RCBR); register_code16(KC_RCBR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RCBR); register_code16(KC_RCBR);
    }
}

void dance_7_reset(qk_tap_dance_state_t *state, void *user_data) {
    if (lock_dance) {
        lock_dance = false;
        return;
    }
    wait_ms(10);
    switch (dance_state.step) {
        case SINGLE_TAP: unregister_code16(KC_RCBR); break;
        case SINGLE_HOLD: layer_off(4); break;
        case DOUBLE_TAP: unregister_code16(KC_RCBR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RCBR); break;
    }
    dance_state.step = 0;
}

void on_dance_8(qk_tap_dance_state_t *state, void *user_data);
void dance_8_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_8_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_8(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_T));
        tap_code16(LGUI(KC_T));
        tap_code16(LGUI(KC_T));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_T));
    }
}

void dance_8_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state.step = dance_step(state);
    switch (dance_state.step) {
        case SINGLE_TAP: register_code16(LGUI(KC_T)); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_N)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_T)); register_code16(LGUI(KC_T));
    }
}

void dance_8_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state.step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_T)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_N)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_T)); break;
    }
    dance_state.step = 0;
}

void on_dance_9(qk_tap_dance_state_t *state, void *user_data);
void dance_9_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_9_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_9(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_SPACE));
        tap_code16(LGUI(KC_SPACE));
        tap_code16(LGUI(KC_SPACE));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_SPACE));
    }
}

void dance_9_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state.step = dance_step(state);
    switch (dance_state.step) {
        case SINGLE_TAP: register_code16(LGUI(KC_SPACE)); break;
        case SINGLE_HOLD: register_code16(KC_LSHIFT); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_SPACE)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_SPACE)); register_code16(LGUI(KC_SPACE));
    }
}

void dance_9_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state.step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_SPACE)); break;
        case SINGLE_HOLD: unregister_code16(KC_LSHIFT); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_SPACE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_SPACE)); break;
    }
    dance_state.step = 0;
}

void macro_tapdance_fn(qk_tap_dance_state_t *state, void *user_data) {
    uint16_t    keycode;
    keyrecord_t record;

    if (is_macro1_recording) {
        keycode             = DYN_REC_STOP;
        is_macro1_recording = false;
        layer_state_set_user(current_layer_state);
    } else if (state->count == 1) {
        keycode = DYN_MACRO_PLAY1;
    } else {
        keycode             = DYN_REC_START1;
        is_macro1_recording = true;
        layer_state_set_user(current_layer_state);
    }

    record.event.pressed = true;
    process_dynamic_macro(keycode, &record);
    record.event.pressed = false;
    process_dynamic_macro(keycode, &record);
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
    [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
    [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
    [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
    [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
    [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
    [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
    [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
    [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
    [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
    [TAP_MACRO] = ACTION_TAP_DANCE_FN(macro_tapdance_fn),
};