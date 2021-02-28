#ifndef __LED_MATRIX_UTILITY_H__

#define __LED_MATRIX_UTILITY_H__

#define CLAMP(value, min, max) (value > max ? max : (value < min ? min : value))
#define RGB_CLAMP(value) CLAMP(value, 0, 255)
#define RGB_GRAY(level) RGB_CLAMP(level), RGB_CLAMP(level), RGB_CLAMP(level)

void set_rgb(uint8_t led_min, uint8_t led_max, uint8_t red, uint8_t green, uint8_t blue) {
  for (uint8_t i = led_min; i < led_max; i++) {
    rgb_matrix_set_color(i, RGB_CLAMP(red), RGB_CLAMP(green), RGB_CLAMP(blue));
  }
}

#endif

