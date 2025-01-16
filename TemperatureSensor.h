#include <exception>
using namespace std;

#ifndef __TemperatureSensor_h__
#define __TemperatureSensor_h__

#include "Sensor.h"

// class Sensor;
class TemperatureSensor;

class TemperatureSensor: public Sensor
{

	public: 
		void senseTemperature();
};

#endif
