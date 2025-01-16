#include <exception>
#include <string>
using namespace std;

#ifndef __DeviceState_h__
#define __DeviceState_h__

#include "SmartDevice.h"

class SmartDevice;
class DeviceState;

class DeviceState
{
	public: 
		virtual string getStatus() = 0;
		virtual void performAction(SmartDevice& device, string action) = 0;
};

#endif
