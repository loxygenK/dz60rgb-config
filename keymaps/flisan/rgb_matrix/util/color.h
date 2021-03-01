#ifndef __COLOR_STRUCT_H__

#define __COLOR_STRUCT_H__
#include "utility.h"

#define EXPAND_COLOR(color) color.red, color.green, color.blue

typedef struct {
  uint8_t red;
  uint8_t green;
  uint8_t blue;
} Color;

Color clfromhex(uint32_t hex) {
  Color color = {
    (hex >> 16 & 0xff),
    (hex >> 8 & 0xff),
    (hex & 0xff)
  };
  return color;
}

Color clmultiple(Color base_color, float ratio) {
  Color new_color = {
    RGB_CLAMP(base_color.red * ratio),
    RGB_CLAMP(base_color.green * ratio),
    RGB_CLAMP(base_color.blue * ratio)
  };
  return new_color;
}

#endif

