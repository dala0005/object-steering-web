/*
 * LedArray.cpp
 *
 *  Created on: Sep 23, 2017
 *      Author: jools
 */

#include "LedArray.h"
#include <Arduino.h>
#include "config.h"

LedArray::LedArray() {
	// TODO Auto-generated constructor stub
	  pinMode(latchPin, OUTPUT);
	  pinMode(dataPin, OUTPUT);
	  pinMode(clockPin, OUTPUT);

	  this->ledBits = 3;
	  this->direction = 1;
}

LedArray::~LedArray() {
	// TODO Auto-generated destructor stub
}

void LedArray::run () {
	if (this->direction) {
		this->ledBits <<= 1;
		if (this->ledBits == 384) {
			this->ledBits = 192;
			this->direction = 0;
		}
	} else {
		this->ledBits >>= 1;
		if (this->ledBits == 0) {
			this->ledBits = 3;
			this->direction = 1;
		}
	}

	this->write();
}

void LedArray::write() {

	// turn off the output so the pins don't light up
  // while you're shifting bits:
  digitalWrite(latchPin, LOW);

  // shift the bits out:
  shiftOut(dataPin, clockPin, LSBFIRST, this->ledBits);

    // turn on the output so the LEDs can light up:
  digitalWrite(latchPin, HIGH);

}
