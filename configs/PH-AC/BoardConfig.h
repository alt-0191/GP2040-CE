/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2021 Jason Skuby (mytechtoybox.com)
 */

#ifndef PICO_BOARD_CONFIG_H_
#define PICO_BOARD_CONFIG_H_

#include "enums.pb.h"
#include "class/hid/hid.h"

#define BOARD_CONFIG_LABEL "PH-AC"


// Main pin mapping Configuration
//                                                  // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define GPIO_PIN_00 GpioAction::BUTTON_PRESS_R1     // R1 pin2
#define GPIO_PIN_01 GpioAction::BUTTON_PRESS_S2     //Start pin3
#define GPIO_PIN_02 GpioAction::BUTTON_PRESS_L1     // L1 pin4
#define GPIO_PIN_03 GpioAction::BUTTON_PRESS_B4     // Y pin5
#define GPIO_PIN_04 GpioAction::BUTTON_PRESS_B3     // X pin6
#define GPIO_PIN_05 GpioAction::BUTTON_PRESS_B2     // B pin7
#define GPIO_PIN_06 GpioAction::BUTTON_PRESS_B1     // A pin8

#define GPIO_PIN_11 GpioAction::ASSIGNED_TO_ADDON     // B1     | A      | B       | Cross    | 2      | K1     |
#define GPIO_PIN_12 GpioAction::ASSIGNED_TO_ADDON     // B2     | B      | A       | Circle   | 3      | K2     |
#define GPIO_PIN_13 GpioAction::BUTTON_PRESS_R2     // R2     | RT     | ZR      | R2       | 8      | K3     |
#define GPIO_PIN_14 GpioAction::BUTTON_PRESS_L2     // L2     | LT     | ZL      | L2       | 7      | K4     |
#define GPIO_PIN_07 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_08 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_09 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_10 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_21 GpioAction::BUTTON_PRESS_L3     // L3     | LS     | LS      | L3       | 11     | LS     |
#define GPIO_PIN_22 GpioAction::BUTTON_PRESS_R3     // R3     | RS     | RS      | R3       | 12     | RS     |
#define GPIO_PIN_20 GpioAction::BUTTON_PRESS_A2     // A2     | ~      | Capture | ~        | 14     | ~      |

// Setting GPIO pins to assigned by add-on
//
#define GPIO_PIN_15 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_16 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_17 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_18 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_19 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_26 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_27 GpioAction::ASSIGNED_TO_ADDON

// Keyboard Mapping Configuration
//                                            // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define KEY_DPAD_UP     HID_KEY_ARROW_UP      // UP     | UP     | UP      | UP       | UP     | UP     |
#define KEY_DPAD_DOWN   HID_KEY_ARROW_DOWN    // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   |
#define KEY_DPAD_RIGHT  HID_KEY_ARROW_RIGHT   // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  |
#define KEY_DPAD_LEFT   HID_KEY_ARROW_LEFT    // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   |
#define KEY_BUTTON_B1   HID_KEY_D    // B1     | A      | B       | Cross    | 2      | K1     |
#define KEY_BUTTON_B2   HID_KEY_F             // B2     | B      | A       | Circle   | 3      | K2     |
#define KEY_BUTTON_R2   HID_KEY_X             // R2     | RT     | ZR      | R2       | 8      | K3     |
#define KEY_BUTTON_L2   HID_KEY_V             // L2     | LT     | ZL      | L2       | 7      | K4     |
#define KEY_BUTTON_B3   HID_KEY_J // B3     | X      | Y       | Square   | 1      | P1     |
#define KEY_BUTTON_B4   HID_KEY_K      // B4     | Y      | X       | Triangle | 4      | P2     |
#define KEY_BUTTON_R1   HID_KEY_N        // R1     | RB     | R       | R1       | 6      | P3     |
#define KEY_BUTTON_L1   HID_KEY_C             // L1     | LB     | L       | L1       | 5      | P4     |
#define KEY_BUTTON_S1   HID_KEY_5             // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define KEY_BUTTON_S2   HID_KEY_1             // S2     | Start  | Plus    | Start    | 10     | Start  |
#define KEY_BUTTON_L3   HID_KEY_EQUAL         // L3     | LS     | LS      | L3       | 11     | LS     |
#define KEY_BUTTON_R3   HID_KEY_MINUS         // R3     | RS     | RS      | R3       | 12     | RS     |
#define KEY_BUTTON_A1   HID_KEY_9             // A1     | Guide  | Home    | PS       | 13     | ~      |
#define KEY_BUTTON_A2   HID_KEY_F2            // A2     | ~      | Capture | ~        | 14     | ~      |
#define KEY_BUTTON_FN   -1                    // Hotkey Function                                        |

#define TURBO_ENABLED 0
#define GPIO_PIN_28 GpioAction::BUTTON_PRESS_TURBO

#define BOARD_LEDS_PIN 15

#define LED_BRIGHTNESS_MAXIMUM 50
#define LED_BRIGHTNESS_STEPS 5
#define LED_FORMAT LED_FORMAT_GRB
#define LEDS_PER_PIXEL 1

#define LEDS_DPAD_LEFT   0
#define LEDS_DPAD_DOWN   1
#define LEDS_DPAD_RIGHT  2
#define LEDS_DPAD_UP     3
#define LEDS_BUTTON_B3   4
#define LEDS_BUTTON_B4   5
#define LEDS_BUTTON_R1   6
#define LEDS_BUTTON_L1   7
#define LEDS_BUTTON_B1   8
#define LEDS_BUTTON_B2   9
#define LEDS_BUTTON_R2   10
#define LEDS_BUTTON_L2   11

#define PLED_TYPE PLED_TYPE_PWM
#define PLED1_PIN 16
#define PLED2_PIN 17
#define PLED3_PIN 18
#define PLED4_PIN 19

#define HAS_I2C_DISPLAY 0
#define I2C1_ENABLED 0
#define I2C1_PIN_SDA 26
#define I2C1_PIN_SCL 27
#define DISPLAY_I2C_BLOCK i2c1

#define BUTTON_LAYOUT BUTTON_LAYOUT_STICK
#define BUTTON_LAYOUT_RIGHT BUTTON_LAYOUT_VEWLIX
#define SPLASH_MODE SPLASH_MODE_NONE
#define SPLASH_CHOICE SPLASH_CHOICE_MAIN
#define SPLASH_DURATION 7500 // Duration in milliseconds

#endif