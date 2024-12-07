// Copyright 2024 fubarphill (@fubarphill)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define SERIAL_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the Serial implementation uses the PIO0 peripheral
//#define WS2812_PIO_USE_PIO1

#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3

#define TAPPING_TERM 200
#define PERMISSIVE_HOLD

#define RGBLIGHT_SPLIT
#define WS2812_DI_PIN GP0
#define RGBLIGHT_LED_COUNT 42
#define RGBLED_SPLIT {21,21}
#define RGBLIGHT_SLEEP

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_RGB_TEST
    #define RGBLIGHT_EFFECT_ALTERNATING
    #define RGBLIGHT_EFFECT_TWINKLE
	#define RGBLIGHT_LIMIT_VAL 225
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif
