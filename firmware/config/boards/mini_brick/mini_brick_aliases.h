// Brick ECU aliases preserving stock microRusEFI F407 electrical mapping.
// Firmware electrical mappings are inherited from MRE; connector labels below are
// user-supplied assignments, not independently checked against a production PCB.
#pragma once
#include "mre_meta.h"
#define MINI_BRICK_INJ_1 MRE_INJ_1
#define MINI_BRICK_INJ_2 MRE_INJ_2
#define MINI_BRICK_INJ_3 MRE_INJ_3
#define MINI_BRICK_INJ_4 MRE_INJ_4
#define MINI_BRICK_IGN_1 Gpio::D4
#define MINI_BRICK_IGN_2 Gpio::D3
#define MINI_BRICK_IGN_3 Gpio::D2
#define MINI_BRICK_IGN_4 Gpio::D1
#define MINI_BRICK_HC_LS_1 MRE_LS_1
#define MINI_BRICK_HC_LS_2 MRE_LS_2
#define MINI_BRICK_HC_LS_3 Gpio::TLE8888_PIN_7
#define MINI_BRICK_GP_1 MRE_GPOUT_1
#define MINI_BRICK_GP_2 MRE_GPOUT_2
#define MINI_BRICK_GP_3 MRE_GPOUT_3
#define MINI_BRICK_GP_4 Gpio::TLE8888_PIN_24
#define MINI_BRICK_AT_1 MRE_IN_ANALOG_TEMP_1
#define MINI_BRICK_AT_2 MRE_IN_ANALOG_TEMP_2
#define MINI_BRICK_AV_1 MRE_IN_ANALOG_VOLT_1
#define MINI_BRICK_AV_2 MRE_IN_ANALOG_VOLT_2
#define MINI_BRICK_AV_3 MRE_IN_ANALOG_VOLT_3
#define MINI_BRICK_AV_4 MRE_IN_ANALOG_VOLT_4
#define MINI_BRICK_AV_5 MRE_IN_ANALOG_VOLT_5
#define MINI_BRICK_AV_6 MRE_IN_ANALOG_VOLT_6
#define MINI_BRICK_AV_7 MRE_IN_ANALOG_VOLT_7
#define MINI_BRICK_AV_8 MRE_IN_ANALOG_VOLT_8
#define MINI_BRICK_AV_9 MRE_IN_ANALOG_VOLT_9
#define MINI_BRICK_AV_10 MRE_IN_ANALOG_VOLT_10
#define MINI_BRICK_AV_9_ALT_GPIO MRE_AV9_REUSE
// AT3/AT4 and additional low-current LS outputs are pending schematic verification.

// Molex 5007620481 Brick-specific cavity labels (not a changed MCU pin mapping).
// For a complete 1..48 pin table see connector-5007620481.csv.
// Pin 12/INJ1 assignment remains UNCONFIRMED due to duplicate pin 11 in source.
#define MINI_BRICK_OUT_5 Gpio::TLE8888_PIN_5   // connector pin 8
#define MINI_BRICK_OUT_6 Gpio::TLE8888_PIN_6   // connector pin 7
#define MINI_BRICK_OUT_7 Gpio::TLE8888_PIN_7   // connector pin 1
#define MINI_BRICK_OUT_14 Gpio::TLE8888_PIN_14 // connector pin 36
#define MINI_BRICK_OUT_15 Gpio::TLE8888_PIN_15 // connector pin 35
#define MINI_BRICK_OUT_16 Gpio::TLE8888_PIN_16 // connector pin 34
#define MINI_BRICK_OUT_17 Gpio::TLE8888_PIN_17 // connector pin 33
#define MINI_BRICK_OUT_18 Gpio::TLE8888_PIN_18 // connector pin 32
#define MINI_BRICK_OUT_21 Gpio::TLE8888_PIN_21 // connector pin 17
#define MINI_BRICK_OUT_22 Gpio::TLE8888_PIN_22 // connector pin 18
#define MINI_BRICK_OUT_23 Gpio::TLE8888_PIN_23 // connector pin 19
#define MINI_BRICK_OUT_24 Gpio::TLE8888_PIN_24 // connector pin 20
