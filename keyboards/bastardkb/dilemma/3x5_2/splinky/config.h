// /**
//  * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
//  *
//  * This program is free software: you can redistribute it and/or modify
//  * it under the terms of the GNU General Public License as published by
//  * the Free Software Foundation, either version 2 of the License, or
//  * (at your option) any later version.
//  *
//  * This program is distributed in the hope that it will be useful,
//  * but WITHOUT ANY WARRANTY; without even the implied warranty of
//  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  * GNU General Public License for more details.
//  *
//  * You should have received a copy of the GNU General Public License
//  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
//  */

// #pragma once

// /* Handedness. */
// #define MASTER_RIGHT

// // To use the handedness pin, resistors need to be installed on the PCB.
// // If so, uncomment the following code, and undefine MASTER_RIGHT above.
// // #define SPLIT_HAND_PIN GP29
// // If you've soldered the handedness pull-up on the upper side instead of the
// // left one, uncomment the following line.
// // #define SPLIT_HAND_PIN_LOW_IS_LEFT // High -> right, Low -> left.

// /* CRC. */
// #define CRC8_USE_TABLE
// #define CRC8_OPTIMIZE_SPEED

// /* Reset. */
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

// #define BOOTMAGIC_ROW 0
// #define BOOTMAGIC_COLUMN 0
// #define BOOTMAGIC_ROW_RIGHT 4
// #define BOOTMAGIC_COLUMN_RIGHT 4

// #define SPLIT_USB_DETECT
// #define SPLIT_WATCHDOG_ENABLE

// #define PS2_MOUSE_DEBUG_HID
// #define PS2_MOUSE_DEBUG_RAW

// #define USE_I2C

/**
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
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

/* Handedness. */
#define MASTER_RIGHT

// To use the handedness pin, resistors need to be installed on the PCB.
// If so, uncomment the following code, and undefine MASTER_RIGHT above.
//#define SPLIT_HAND_PIN GP29
// If you've soldered the handedness pull-up on the upper side instead of the
// left one, uncomment the following line.
//#define SPLIT_HAND_PIN_LOW_IS_LEFT // High -> right, Low -> left.

/* CRC. */
#define CRC8_USE_TABLE
#define CRC8_OPTIMIZE_SPEED

/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U
