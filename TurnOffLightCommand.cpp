#include <exception>
using namespace std;

#include "TurnOffLightCommand.h"
#include "SmartDevice.h"
#include "SmartCommand.h"
#include <iostream>

/**
 * @class TurnOffLightCommand
 * @brief Represents a command to turn off the lights of a smart device.
 * 
 * The TurnOffLightCommand class implements the command pattern, allowing the 
 * action of turning off the lights to be encapsulated and executed independently 
 * on the smart device.
 */

/**
 * @brief Executes the command to turn off the lights.
 * 
 * This method calls the performAction method of the smart device with the action 
 * "Turn Off Lights", effectively instructing the smart device to turn off the lights.
 */
void TurnOffLightCommand::execute() {
    cout << "Executing TurnOffLightCommand." << endl;
    smartDevice.performAction("Turn Off Lights"); // Call the receiver's method
}
