#include <exception>
using namespace std;
#include <iostream>

#include "UnlockDoorCommand.h"
#include "SmartDevice.h"
#include "SmartCommand.h"

/**
 * @class UnlockDoorCommand
 * @brief Represents a command to unlock the doors of a smart device.
 * 
 * The UnlockDoorCommand class implements the command pattern, allowing the 
 * action of unlocking the doors to be encapsulated and executed independently 
 * on the smart device.
 */

/**
 * @brief Executes the command to unlock the doors.
 * 
 * This method calls the performAction method of the smart device with the action 
 * "Unlock Doors", effectively instructing the smart device to unlock the doors.
 */
void UnlockDoorCommand::execute() {
    cout << "Executing UnlockDoorCommand." << endl;
    smartDevice.performAction("Unlock Doors"); // Call the receiver's method
}
