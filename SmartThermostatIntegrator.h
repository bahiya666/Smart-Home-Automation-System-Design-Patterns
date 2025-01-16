#include <exception>
#include <string>
using namespace std;

#ifndef __SmartThermostatIntegrator_h__
#define __SmartThermostatIntegrator_h__

#include "LegacyThermostat.h"
#include "Client.h"
#include "SmartThermostat.h"
#include "SmartDevice.h"

class LegacyThermostat;
class Client;
class SmartThermostat;
class SmartDevice;
class SmartThermostatIntegrator;

class SmartThermostatIntegrator: public SmartThermostat
{
	private: 
		LegacyThermostat legacyThermostat;

	public: 
		SmartThermostatIntegrator();
		void setTemperature(int temp);
		int getTemperature();
		void update(string condition);
};

#endif
