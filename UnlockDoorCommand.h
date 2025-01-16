#include <exception>
using namespace std;

#ifndef __UnlockDoorCommand_h__
#define __UnlockDoorCommand_h__

#include "SmartDevice.h"
#include "SmartCommand.h"

class SmartDevice;
// class SmartCommand;
class UnlockDoorCommand;

class UnlockDoorCommand: public SmartCommand
{
	private: 
		SmartDevice smartDevice;

	public: 
		void execute();
};

#endif
