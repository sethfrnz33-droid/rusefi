// Brick ECU aliases preserving stock microRusEFI F407 electrical mapping.
// Not a verified Mini Brick physical connector cavity map.
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
