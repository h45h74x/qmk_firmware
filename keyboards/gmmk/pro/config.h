/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define DEVICE_VER 0x0001
#define VENDOR_ID 0x320F
#define PRODUCT_ID 0x5044
#define MANUFACTURER Glorious
#define PRODUCT GMMK Pro

/* key matrix size */
#define MATRIX_ROWS 11
#define MATRIX_COLS 8

#define MATRIX_ROW_PINS \
    { B0, B1, B2, B3, B4, B5, B6, B7, B8, B9, B10 }
#define MATRIX_COL_PINS \
    { A0, A1, A2, A3, A4, A8, A9, A10 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Hold ESC on start up to clear EEPROM and boot into bootloader mode */
#define BOOTMAGIC_LITE_ROW 1
#define BOOTMAGIC_LITE_COLUMN 3

#define TAP_CODE_DELAY 10
#define ENCODERS_PAD_A \
    { C15 }
#define ENCODERS_PAD_B \
    { C14 }

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* SPI Config for LED Driver */
#define SPI_DRIVER SPID1
#define SPI_SCK_PIN A5
#define SPI_MOSI_PIN A6
#define SPI_MISO_PIN A7

#define DRIVER_1_CS B13
#define DRIVER_2_CS B14
#define DRIVER_1_EN C13
#define DRIVER_2_EN C13

#define DRIVER_COUNT 2


// Below added per: https://beta.docs.qmk.fm/using-qmk/hardware-features/lighting/feature_rgb_matrix#suspended-state-id-suspended-state
// #define RGB_DISABLE_WHEN_USB_SUSPENDED

// Reactive RGB
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
//#define RGB_MATRIX_KEYRELEASES

// RGB Matrix Animation modes. Explicitly enabled
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
// #define RGB_MATRIX_NONE                      // -

// #define RGB_MATRIX_SOLID_COLOR                  // DOES NOT BUILD?? - Static single hue no speed support
// #define RGB_MATRIX_ALPHAS_MODS                  // Static dual hue speed is hue for secondary hue
#define RGB_MATRIX_GRADIENT_UP_DOWN             // Static gradient top to bottom speed controls how much gradient changes
#define RGB_MATRIX_GRADIENT_LEFT_RIGHT          // Static gradient left to right speed controls how much gradient changes
// #define RGB_MATRIX_BREATHING                    // Single hue brightness cycling animation
// #define RGB_MATRIX_BAND_SAT                     // Single hue band fading saturation scrolling left to right
// #define RGB_MATRIX_BAND_VAL                     // Single hue band fading brightness scrolling left to right
// #define RGB_MATRIX_BAND_PINWHEEL_SAT            // Single hue 3 blade spinning pinwheel fades saturation
// #define RGB_MATRIX_BAND_PINWHEEL_VAL            // Single hue 3 blade spinning pinwheel fades brightness
// #define RGB_MATRIX_BAND_SPIRAL_SAT              // Single hue spinning spiral fades saturation
// #define RGB_MATRIX_BAND_SPIRAL_VAL              // Single hue spinning spiral fades brightness
#define RGB_MATRIX_CYCLE_ALL                    // Full keyboard solid hue cycling through full gradient
// #define RGB_MATRIX_CYCLE_LEFT_RIGHT             // Full gradient scrolling left to right
#define RGB_MATRIX_CYCLE_UP_DOWN                // Full gradient scrolling top to bottom
// #define RGB_MATRIX_CYCLE_OUT_IN                 // Full gradient scrolling out to in
// #define RGB_MATRIX_CYCLE_OUT_IN_DUAL            // Full dual gradients scrolling out to in
#define RGB_MATRIX_RAINBOW_MOVING_CHEVRON       // Full gradent Chevron shapped scrolling left to right
#define RGB_MATRIX_CYCLE_PINWHEEL               // Full gradient spinning pinwheel around center of keyboard
#define RGB_MATRIX_CYCLE_SPIRAL                 // Full gradient spinning spiral around center of keyboard
#define RGB_MATRIX_DUAL_BEACON                  // Full gradient spinning around center of keyboard
// #define RGB_MATRIX_RAINBOW_BEACON               // Full tighter gradient spinning around center of keyboard
// #define RGB_MATRIX_RAINBOW_PINWHEELS            // Full dual gradients spinning two halfs of keyboard
// #define RGB_MATRIX_RAINDROPS                    // Randomly changes a single key's hue
// #define RGB_MATRIX_JELLYBEAN_RAINDROPS          // Randomly changes a single key's hue and saturation
#define RGB_MATRIX_HUE_BREATHING                // Hue shifts up a slight ammount at the same time then shifts back
#define RGB_MATRIX_HUE_PENDULUM                 // Hue shifts up a slight ammount in a wave to the right then back to the left
#define RGB_MATRIX_HUE_WAVE                     // Hue shifts up a slight ammount and then back down in a wave to the right
// #define RGB_MATRIX_PIXEL_FRACTAL                // Single hue fractal filled keys pulsing horizontally out to edges
// #define RGB_MATRIX_PIXEL_RAIN                   // Randomly light keys with random hues

// enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined
#define RGB_MATRIX_TYPING_HEATMAP               // How hot is your WPM!
#define RGB_MATRIX_DIGITAL_RAIN                 // That famous computer simulation

// enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
#define RGB_MATRIX_SOLID_REACTIVE_SIMPLE        // Pulses keys hit to hue & value then fades value out
#define RGB_MATRIX_SOLID_REACTIVE               // Static single hue pulses keys hit to shifted hue then fades to current hue
#define RGB_MATRIX_SOLID_REACTIVE_WIDE          // Hue & value pulse near a single key hit then fades value out
#define RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE     // Hue & value pulse near multiple key hits then fades value out
#define RGB_MATRIX_SOLID_REACTIVE_CROSS         // Hue & value pulse the same column and row of a single key hit then fades value out
#define RGB_MATRIX_SOLID_REACTIVE_MULTICROSS    // Hue & value pulse the same column and row of multiple key hits then fades value out
#define RGB_MATRIX_SOLID_REACTIVE_NEXUS         // Hue & value pulse away on the same column and row of a single key hit then fades value out
#define RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS    // Hue & value pulse away on the same column and row of multiple key hits then fades value out
#define RGB_MATRIX_SPLASH                       // Full gradient & value pulse away from a single key hit then fades value out
#define RGB_MATRIX_MULTISPLASH                  // Full gradient & value pulse away from multiple key hits then fades value out
#define RGB_MATRIX_SOLID_SPLASH                 // Hue & value pulse away from a single key hit then fades value out
#define RGB_MATRIX_SOLID_MULTISPLASH            // Hue & value pulse away from multiple key hits then fades value out

// #define RGB_MATRIX_EFFECT_MAX                // -

/* 1000Hz USB polling - it's the default on stock firmware */
#define USB_POLLING_INTERVAL_MS 1

/* Send up to 4 key press events per scan */
#define QMK_KEYS_PER_SCAN 4

/* Set debounce time to 5ms */
#define DEBOUNCE 5

/* Force NKRO on boot up regardless of the setting saved in the EEPROM (uncomment to enable it) */
// #define FORCE_NKRO
