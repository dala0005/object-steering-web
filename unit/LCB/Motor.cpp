/*
 * Motor.cpp
 *
 *  Created on: Sep 22, 2017
 *      Author: jools
 */

#include "Motor.h"
#include <Arduino.h>

Motor::Motor() {
	// TODO Auto-generated constructor stub
	this->motorPin1 = 0;
	this->motorPin2 = 0;

}

Motor::~Motor() {
	// TODO Auto-generated destructor stub
}

void Motor::init(const int motorPin1, const int motorPin2) {
	this->motorPin1 = motorPin1;
	this->motorPin2 = motorPin2;

    Serial.println(F("motor init"));
    Serial.println(motorPin1);
    Serial.println(motorPin2);

	pinMode(this->motorPin2, OUTPUT);
	pinMode(this->motorPin1, OUTPUT);
}

void Motor::setSpeed (int speed) {
	if (speed > 0) {
	    digitalWrite(this->motorPin1,LOW);
	    analogWrite(this->motorPin2, speed);

	    Serial.println(F("A"));
	    return;
	}

	if (speed < 0) {
		digitalWrite(this->motorPin1, HIGH);
	    analogWrite(this->motorPin2, -speed);

	    Serial.println(F("B"));
	    return;
	}

    Serial.println(F("C"));

    analogWrite(this->motorPin2, 0);
}
