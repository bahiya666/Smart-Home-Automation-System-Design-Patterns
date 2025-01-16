#include <exception>
using namespace std;

#ifndef __LegacyThermostat_h__
#define __LegacyThermostat_h__

// #include "SmartThermostatIntegrator.h"

class SmartThermostatIntegrator;
class LegacyThermostat;

class LegacyThermostat
{
	private:
	 	int currentTemperature;

	public: 
		LegacyThermostat() : currentTemperature(20) {} // Default constructor
		void setTemp(int temp);
		int getTemp();
};

#endif
