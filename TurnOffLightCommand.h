#include <exception>
using namespace std;

#ifndef __TurnOffLightCommand_h__
#define __TurnOffLightCommand_h__

#include "SmartDevice.h"
#include "SmartCommand.h"

class SmartDevice;
// class SmartCommand;

class TurnOffLightCommand: public SmartCommand
{
	private: 
		SmartDevice smartDevice;

	public: 
		void execute();
};

#endif
