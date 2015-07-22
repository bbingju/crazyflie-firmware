/*
 *    ||          ____  _ __
 * +------+      / __ )(_) /_______________ _____  ___
 * | 0xBC |     / __  / / __/ ___/ ___/ __ `/_  / / _ \
 * +------+    / /_/ / / /_/ /__/ /  / /_/ / / /_/  __/
 *  ||  ||    /_____/_/\__/\___/_/   \__,_/ /___/\___/
 *
 * Crazyflie control firmware
 *
 * Copyright (C) 2015 Bitcraze AB
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, in version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * mb.h - API for the MaxBotix MB1040 Sonar Range Finder (LV-MaxSonar-EZ04)
 */

#ifndef __MB_H__
#define __MB_H__

#include <stdint.h>

/**
 * List of MaxBotix sensors with different interface types can be added here.
 *
 * Sensors should be listed once for each interface, for instance MB1040AN (Analog), MB1040I2C (I2C), MB1040PWM (PWM) etc.
 */
typedef enum {
  MB1040AN = 0, /* The MB1040 (LV-MaxBotix-EZ4) sensor read by analog conversion (GPIO pin read through ADC). */
} mbSensor_t;

uint32_t mbReadDistance(mbSensor_t type, uint32_t *accuracy);

#endif
