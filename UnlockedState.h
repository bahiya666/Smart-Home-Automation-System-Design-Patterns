#include <exception>
#include <string>
using namespace std;

#ifndef __UnlockedState_h__
#define __UnlockedState_h__

#include "SmartDevice.h"
#include "DeviceState.h"

class SmartDevice;
// class DeviceState;
class UnlockedState;

class UnlockedState: public DeviceState
{

	public: 
		string getStatus();

	public: 
		void performAction(SmartDevice& device, string action);
};

#endif
