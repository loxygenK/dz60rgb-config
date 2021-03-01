/* ------------------------- */
/* LED Matrix Confifugration */
/* ------------------------- */
RGB_MATRIX_EFFECT(bootup_notify_effect)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS
#include "util/utility.h"
#include "util/color.h"

#define INITIAL_COLOR_CODE 0xA0F8EE
#define INITIAL_FADE_FRAME 200

static uint8_t __bootup_notify_frame_count;

// Initialization
static void bootup_notify_effect_init(effect_params_t *params) {
  __bootup_notify_frame_count = 0;
}

// Continuous
static bool bootup_notify_effect_run(effect_params_t *params) {
  RGB_MATRIX_USE_LIMITS(led_min, led_max);
  set_rgb(
      led_min, led_max,
      EXPAND_COLOR(
        clmultiple(
          clfromhex(INITIAL_COLOR_CODE),
          (INITIAL_FADE_FRAME - __bootup_notify_frame_count) / 200.0
        )
      )
  );
  if(__bootup_notify_frame_count > INITIAL_FADE_FRAME) {
    rgblight_mode(RGB_MATRIX_TYPING_HEATMAP);
  }
  __bootup_notify_frame_count++;
  return led_max < DRIVER_LED_TOTAL;
}

// Callback from the firmware
static bool bootup_notify_effect(effect_params_t *params) {
  // Call bootup_notify_effect_init if the firmware is initializing
  if (params->init) bootup_notify_effect_init(params);

  // Use bootup_notify_effect_run for usual work
  return bootup_notify_effect_run(params);
}

void matrix_init_user(void) {
  rgblight_mode(RGB_MATRIX_CUSTOM_bootup_notify_effect);
}

#endif

