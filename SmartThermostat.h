
#ifndef __SmartThermostat_h__
#define __SmartThermostat_h__
#include "SmartDevice.h"

class SmartThermostat;

class SmartThermostat : public SmartDevice 
{
	private: 
		int temperature;

	public: 
		SmartThermostat();
		virtual void setTemperature(int temp) = 0;
		virtual int getTemperature() = 0;
};

#endif
