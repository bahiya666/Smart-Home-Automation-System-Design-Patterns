#include <exception>
#include <vector>
#include <string>
using namespace std;

#ifndef __Sensor_h__
#define __Sensor_h__

#include "SmartDevice.h"

class SmartDevice;
class Sensor;

class Sensor
{
	private: 
		vector<SmartDevice*> deviceList;  

	public: 
		void addDevice(SmartDevice* device);
		void removeDevice(SmartDevice* device);
		void notifyDevices(string condition);
};

#endif
