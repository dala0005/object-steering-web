/*
 * Motor.h
 *
 *  Created on: Sep 22, 2017
 *      Author: jools
 */

#ifndef MOTOR_H_
#define MOTOR_H_


class Motor {
private:
	int motorPin1;
	int motorPin2;

public:
	Motor();
	virtual ~Motor();

	void init(const int motorPin1, const int motorPin2);
	void setSpeed (int speed);

};

#endif /* MOTOR_H_ */
