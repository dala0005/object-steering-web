/*
 * Unit.h
 *
 *  Created on: Sep 24, 2017
 *      Author: jools
 */

#ifndef UNIT_H_
#define UNIT_H_

#include "Register.h"
#include "Motor.h"

typedef void (*event_func) (int);

void unitSetup();

void eventMotorLeft (int speed);
void eventMotorRight (int speed);
void eventArmHorizontal(int value);
void eventArmVertical(int value);

void unitProcessEvent (register_t reg, int data);
void unitTick(void);

#endif /* UNIT_H_ */
