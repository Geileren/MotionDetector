/*
 * MotionDetector.cpp
 *
 * Created: 14-05-2024 08:49:05
 *  Author: Geileren
 */ 
#include <avr/io.h>

#ifndef __MotionHandler__
#define __MotionHandler__

class MotionDetector{
public:
	MotionDetector();
	uint8_t GetMotionStatus();

};


#endif