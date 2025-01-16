#include <exception>
using namespace std;

#ifndef __MacroRoutine_h__
#define __MacroRoutine_h__

#include "SmartCommand.h"
#include <vector>

class SmartCommand;

class MacroRoutine
{
private:
    std::vector<SmartCommand*> commands; // Use a vector of raw pointers

public:
    void execute();
    void addProcedure(SmartCommand* command);
    void removeProcedure(SmartCommand* command);
};

#endif
