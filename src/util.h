// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#ifndef UTIL_H
#define UTIL_H

#include "Lighting/LampArrayHidStructs.h"

// Timing
#define LAMPARRAY_UPDATE_INTERVAL   10000                               // 10 ms update interval, in us
#define LAMP_UPDATE_RATE_MS         LAMPARRAY_UPDATE_INTERVAL / 1000

// OLED
#define OLED_CS                     22
#define OLED_RESET                  23
#define OLED_DC                     24
#define OLED_SCLK                   26
#define OLED_MOSI                   27
#define OLED_MISO                   28

// Speaker
#define SPEAKER_SHUTDOWN            14
#define SPEAKER                     16

// Neopixel                         
#define NEOPIXEL                    19
#define NEOPIXEL_PIO                pio0
#define NEOPIXEL_BITRATE            800000
#define NEOPIXEL_COUNT              12

// LampArray Attributes
#define LAMPARRAY_LAMP_COUNT        NEOPIXEL_COUNT
#define LAMPARRAY_WIDTH             59000    // 5.9 cm 
#define LAMPARRAY_HEIGHT            104000   // 10.4 cm
#define LAMPARRAY_DEPTH             25000    // 2.5 cm
#define LAMPARRAY_KIND              1        // LampArrayKindKeyboard

// Lamp Attributes
static Position LampPositions[NEOPIXEL_COUNT] = {
    {10500, 30000, 0}, {29500, 30000, 0}, {48500, 30000, 0}, 
    {10500, 49500, 0}, {29500, 49500, 0}, {48500, 49500, 0}, 
    {10500, 69000, 0}, {29500, 69000, 0}, {48500, 69000, 0}, 
    {10500, 88500, 0}, {29500, 88500, 0}, {48500, 88500, 0}
};

// Misc.
#define RED_LED                     13
#define AUTONOMOUS_LIGHTING_COLOR   (LampColor){0, 255, 0}
#define AUTONOMOUS_LIGHTING_EFFECT  BLINK

#endif