#include <exception>
using namespace std;

#ifndef __TurnOnLightCommand_h__
#define __TurnOnLightCommand_h__

#include "SmartDevice.h"
#include "SmartCommand.h"

class SmartDevice;
// class SmartCommand;
class TurnOnLightCommand;

class TurnOnLightCommand: public SmartCommand
{
	private: 
		SmartDevice smartDevice;

	public: 
		void execute();
};

#endif
