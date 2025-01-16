#include <exception>
using namespace std;

#include "TurnOnLightCommand.h"
#include "SmartDevice.h"
#include "SmartCommand.h"
#include <iostream>

/**
 * @class TurnOnLightCommand
 * @brief Represents a command to turn on the lights of a smart device.
 * 
 * The TurnOnLightCommand class implements the command pattern, allowing the 
 * action of turning on the lights to be encapsulated and executed independently 
 * on the smart device.
 */

/**
 * @brief Executes the command to turn on the lights.
 * 
 * This method calls the performAction method of the smart device with the action 
 * "Turn On Lights", effectively instructing the smart device to turn on the lights.
 */
void TurnOnLightCommand::execute() {
    cout << "Executing TurnOnLightCommand." << endl;
    smartDevice.performAction("Turn On Lights"); // Call the receiver's method
}
