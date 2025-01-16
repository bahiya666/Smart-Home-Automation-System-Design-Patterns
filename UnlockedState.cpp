#include <exception>
#include <string>
#include <iostream>
using namespace std;

#include "UnlockedState.h"
#include "SmartDevice.h"
#include "DeviceState.h"
#include "LockedState.h"

/**
 * @class UnlockedState
 * @brief Represents the unlocked state of a smart device.
 * 
 * The UnlockedState class implements the behavior of a smart device when it is unlocked. 
 * It provides methods to get the status of the device and perform actions that transition 
 * the device state based on the action provided.
 */

/**
 * @brief Retrieves the current status of the device.
 * 
 * @return A string indicating that the device is "Unlocked".
 */
string UnlockedState::getStatus() {
    return "Unlocked";
}

/**
 * @brief Performs an action on the smart device based on the given command.
 * 
 * @param device The smart device on which the action is performed.
 * @param action The action to execute (e.g., "Lock" or "Unlock").
 * 
 * - If the action is "Lock", the state of the device changes to LockedState.
 * - If the action is "Unlock" while the device is already unlocked, a message is displayed.
 * - Other actions are currently not handled in this state.
 */
void UnlockedState::performAction(SmartDevice& device, string action) {
    if (action == "Lock") {
        device.setState(new LockedState());
    } else if (action == "Unlock") {
        std::cout << "Device is already unlocked" << std::endl;
    } else {
        // Other actions are not handled in the unlocked state.
    }
}
