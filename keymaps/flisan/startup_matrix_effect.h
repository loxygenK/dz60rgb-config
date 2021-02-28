/* ------------------------- */
/* LED Matrix Confifugration */
/* ------------------------- */

RGB_MATRIX_EFFECT(bootup_notify_effect)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static bool bootup_notify_effect(effect_params_t *params) {
  RGB_MATRIX_USE_LIMITS(led_min, led_max);
  for(uint8_t i = led_min; i<led_max; i++) {
    rgb_matrix_set_color(i, 0xff, 0xff, 0x00);
  }
  return led_max < DRIVER_LED_TOTAL;
}

void matrix_init_user(void) {
  rgblight_mode(RGB_MATRIX_CUSTOM_bootup_notify_effect);
}

#endif

