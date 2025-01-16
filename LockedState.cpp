#include <exception>
#include <string>
#include <iostream>
using namespace std;

#include "LockedState.h"
#include "SmartDevice.h"
#include "DeviceState.h"
#include "UnlockedState.h"

/**
 * @class LockedState
 * @brief Represents the locked state of a smart device.
 * 
 * The LockedState class implements the behavior of a smart device when it is locked. 
 * It provides methods to get the status of the device and perform actions that transition 
 * the device state based on the action provided.
 */

/**
 * @brief Retrieves the current status of the device.
 * 
 * @return A string indicating that the device is "Locked".
 * 
 * This method returns the current state of the device as a string when it is locked.
 */
string LockedState::getStatus() {
    return "Locked";
}

/**
 * @brief Performs an action on the smart device based on the given command.
 * 
 * @param device The smart device on which the action is performed.
 * @param action The action to be executed, such as "Unlock" or "Lock".
 * 
 * - If the action is "Unlock", the state of the device is changed to UnlockedState.
 * - If the action is "Lock" while the device is already locked, it outputs a message.
 * - Other actions are currently not handled in this state.
 */
void LockedState::performAction(SmartDevice& device, string action) {
    if (action == "Unlock") {
        device.setState(new UnlockedState());
    } else if (action == "Lock") {
        std::cout << "Device is already locked" << std::endl;
    } else {
        // Other actions are not handled in the locked state.
    }
}
