#include <exception>
using namespace std;

#include "LockDoorCommand.h"
#include "SmartDevice.h"
#include "SmartCommand.h"
#include <iostream>

/**
 * @class LockDoorCommand
 * @brief Represents a command to lock the doors of a smart device.
 * 
 * The LockDoorCommand class implements the command pattern, allowing the locking
 * action to be encapsulated and executed independently on the smart device.
 */

/**
 * @brief Executes the lock door command.
 * 
 * This method calls the performAction method of the smart device with the action
 * "Lock Doors", effectively instructing the smart device to lock the doors.
 */
void LockDoorCommand::execute() {
    cout << "Executing LockDoorCommand." << endl;
    smartDevice.performAction("Lock Doors"); // Call the receiver's method
}
