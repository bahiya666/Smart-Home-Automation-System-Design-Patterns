#include <exception>
#include <string>
using namespace std;

#ifndef __OffState_h__
#define __OffState_h__

#include "SmartDevice.h"
#include "DeviceState.h"

class SmartDevice;
// class DeviceState;
class OffState;

class OffState: public DeviceState
{

	public: 
		string getStatus();
		void performAction(SmartDevice& device, string action);
};

#endif
