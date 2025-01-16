#include <exception>
using namespace std;

#ifndef __LockDoorCommand_h__
#define __LockDoorCommand_h__

#include "SmartDevice.h"
#include "SmartCommand.h"

class SmartDevice;
// class SmartCommand;
class LockDoorCommand;

class LockDoorCommand: public SmartCommand
{
	private: 
		SmartDevice smartDevice;

	public: 
		void execute();
};

#endif
