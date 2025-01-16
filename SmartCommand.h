#include <exception>
using namespace std;

#ifndef __SmartCommand_h__
#define __SmartCommand_h__

// #include "MacroRoutine.h"

class MacroRoutine;
class SmartCommand;

class SmartCommand
{
	public: 
		virtual void execute() = 0;
};

#endif
