#include <exception>
using namespace std;

#ifndef __MotionSensor_h__
#define __MotionSensor_h__

#include "Sensor.h"

// class Sensor;
class MotionSensor;

class MotionSensor: public Sensor
{

	public: 
		void detectMovement();
};

#endif
