// Copyright 2026 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once


#define DIRECT_PINS { \
    { GP26, GP27, GP3 } \
}
#define DIRECT_PINS_ACTIVE_LOW


#define ENCODERS_PAD_A { GP28 }
#define ENCODERS_PAD_B { GP29 }
#define ENCODER_RESOLUTION 4


#define I2C1_SDA_PIN GP1
#define I2C1_SCL_PIN GP2