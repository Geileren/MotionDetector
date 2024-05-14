/*
 * MotionDetector.cpp
 *
 * Created: 14-05-2024 08:48:49
 *  Author: Geileren
 */ 
#include "MotionDetector.h"

MotionDetector::MotionDetector()
{
	DDRB &= 0b01111111;
}

uint8_t MotionDetector::GetMotionStatus()
{
	return (PINB & 0b10000000) >> 7;
}
