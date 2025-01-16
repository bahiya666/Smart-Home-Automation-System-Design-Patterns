#include <exception>
using namespace std;

#include "SmartCommand.h"
#include "MacroRoutine.h"

/**
 * @brief Executes the command on a smart device.
 * 
 * This method is intended to be overridden by derived classes to perform specific actions.
 */
void SmartCommand::execute() {
    throw "Not yet implemented";
}
