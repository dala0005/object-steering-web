/*
 * Unit.c
 *
 *  Created on: Sep 24, 2017
 *      Author: jools
 */

#include <Arduino.h>
#include "Unit.h"
#include "Register.h"
#include "config.h"
#include "LedArray.h"
#include "Motor.h"
#include <Servo.h>

event_func function_map[R_LEN] = {
		[R_UNDEFINED] = 0,
		[R_MOTOR_LEFT] = eventMotorLeft,
		[R_MOTOR_RIGHT] = eventMotorRight,
		[R_SPEED] = 0,		// -255[backward] -- 255[forward]
		[R_STEER] = 0,		// -255[left] -- 0[center] -- 255[right]
						// really just a loweering
						// of speed on the inner wheel
		[R_STOP] = 0,			// stop vehicle. can be acchieved with speed 0 also
		[R_SPIN] = 0,			// spin speed -255[left] -- 255[right]

		[R_ARM_HORIZONTAL] = eventArmHorizontal,
		[R_ARM_VERTICAL] = eventArmVertical
};


enum motor_t { MOTOR_LEFT, MOTOR_RIGHT };
enum arm_t { ARM_HORIZONTAL, ARM_VERTICAL };

static Motor* motors[] = {
	[MOTOR_LEFT] = new Motor,
	[MOTOR_RIGHT] =	new Motor
};

static Servo* arm[] = {
	[ARM_HORIZONTAL] = new Servo,
	[ARM_VERTICAL] = new Servo
};

static LedArray ledArray;

void unitSetup() {
	/*
	motors[MOTOR_LEFT]->init(5, 6);
	motors[MOTOR_RIGHT]->init(10, 9);
*/
	motors[MOTOR_LEFT]->init(MOTOR_LEFT_DIRECTION, MOTOR_LEFT_ENABLE);
	motors[MOTOR_RIGHT]->init(MOTOR_RIGHT_DIRECTION, MOTOR_RIGHT_ENABLE);

	arm[ARM_HORIZONTAL]->attach(ARM_HORIZONTAL_PIN);
	arm[ARM_VERTICAL]->attach(ARM_VERTICAL_PIN);
}

void unitTick(void) {
	ledArray.run();
}

void eventArmHorizontal(int value) {
    Serial.println(F("arm h"));

	arm[ARM_HORIZONTAL]->write(value);
}

void eventArmVertical(int value) {
    Serial.println(F("arm v"));

	arm[ARM_VERTICAL]->write(value);
}

void eventMotorLeft (int speed) {
    Serial.println(F("motor left"));

	motors[MOTOR_LEFT]->setSpeed(speed);
}

void eventMotorRight (int speed) {
    Serial.println(F("motor right"));

	motors[MOTOR_RIGHT]->setSpeed(speed);
}

void unitProcessEvent (register_t reg, int data) {
	if (function_map[reg] == 0) {
		return;
	}

	(*(function_map[reg])) (data);
}
