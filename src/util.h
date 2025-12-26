// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#ifndef UTIL_H
#define UTIL_H

#include "Lighting/LampArrayHidStructs.h"

// Timing
#define LAMPARRAY_UPDATE_INTERVAL   10000                               // 10 ms update interval, in us
#define LAMP_UPDATE_RATE_MS         LAMPARRAY_UPDATE_INTERVAL / 1000
#define AUTONOMOUS_LIGHTING_INTERVAL_MS 5000                            // 5 second interval for autonomous lighting

// Neopixel                         
#define NEOPIXEL                    19
#define NEOPIXEL_PIO                pio0
#define NEOPIXEL_BITRATE            800000
#define NEOPIXEL_COUNT              2

// LampArray Attributes
#define LAMPARRAY_LAMP_COUNT        NEOPIXEL_COUNT
#define LAMPARRAY_WIDTH             800000    // 5.9 cm 
#define LAMPARRAY_HEIGHT            300000   // 10.4 cm
#define LAMPARRAY_DEPTH             25000    // 2.5 cm
#define LAMPARRAY_KIND              4        // Peripheral Device

// Lamp Attributes
static Position LampPositions[NEOPIXEL_COUNT] = {
    {0, 0, 0}, {800000, 300000, 0}
};

// Misc.
#define RED_LED                     13
#define AUTONOMOUS_LIGHTING_COLOR   (LampColor){255, 0, 0}
#define AUTONOMOUS_LIGHTING_EFFECT  BLINK

#endif