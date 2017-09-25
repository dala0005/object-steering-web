/*
 * Register.h
 *
 *  Created on: Sep 23, 2017
 *      Author: jools
 */

#ifndef REGISTER_H_
#define REGISTER_H_

typedef enum {
	// these are for testing
		R_UNDEFINED,	// not used. 0 indicates undefined register map
        R_MOTOR_LEFT,
        R_MOTOR_RIGHT,

		R_SPEED,		// -255[backward] -- 255[forward]
		R_STEER,		// -255[left] -- 0[center] -- 255[right]
						// really just a loweering
						// of speed on the inner wheel
		R_STOP,			// stop vehicle. can be acchieved with speed 0 also
		R_SPIN,			// spin speed -255[left] -- 255[right]

		R_ARM_HORIZONTAL,
		R_ARM_VERTICAL,

	R_LEN
} register_t;

#endif /* REGISTER_H_ */
