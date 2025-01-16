#include <exception>
#include <string>
using namespace std;

#ifndef __LockedState_h__
#define __LockedState_h__

#include "SmartDevice.h"
#include "DeviceState.h"

class SmartDevice;
// class DeviceState;
class LockedState;

class LockedState: public DeviceState
{

	public: 
		string getStatus();

	public: 
		void performAction(SmartDevice& device, string action);
};

#endif
