/*
 * LedArray.h
 *
 *  Created on: Sep 23, 2017
 *      Author: jools
 */

#ifndef LEDARRAY_H_
#define LEDARRAY_H_

//#include <Arduino.h>

class LedArray {
private:
	int ledBits;
	int direction;

public:
	LedArray();
	virtual ~LedArray();

	void write();
	void run ();

};

#endif /* LEDARRAY_H_ */
