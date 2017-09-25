/*
 * config.h
 *
 *  Created on: Sep 23, 2017
 *      Author: jools
 */

#ifndef CONFIG_H_
#define CONFIG_H_

// LED SPI
#define latchPin 8
#define clockPin 12	//Pin connected to clock pin (SH_CP) of 74HC595
#define dataPin 11	//Pin connected to Data in (DS) of 74HC595

// MOTOR PINS
#define MOTOR_LEFT_DIRECTION 4
#define MOTOR_LEFT_ENABLE	6		// PWM

#define MOTOR_RIGHT_DIRECTION 2
#define MOTOR_RIGHT_ENABLE	3		// PWM

// SERVO PINS
#define ARM_HORIZONTAL_PIN	9
#define ARM_VERTICAL_PIN	10

#endif /* CONFIG_H_ */
