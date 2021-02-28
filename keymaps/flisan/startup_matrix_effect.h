/* ------------------------- */
/* LED Matrix Confifugration */
/* ------------------------- */
RGB_MATRIX_EFFECT(bootup_notify_effect)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS
#include "led_matrix_utility.h"

static uint8_t __bootup_notify_frame_count;

// Initialization
static void bootup_notify_effect_init(effect_params_t *params) {
  __bootup_notify_frame_count = 0;
}

// Continuous
static bool bootup_notify_effect_run(effect_params_t *params) {
  RGB_MATRIX_USE_LIMITS(led_min, led_max);
  set_rgb(led_min, led_max, RGB_GRAY(255 - __bootup_notify_frame_count));
  if(__bootup_notify_frame_count > 230) {
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

