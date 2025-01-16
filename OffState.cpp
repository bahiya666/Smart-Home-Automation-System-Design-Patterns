#include <exception>
#include <iostream>
#include <string>
using namespace std;

#include "OffState.h"
#include "SmartDevice.h"
#include "DeviceState.h"
#include "OnState.h"

/**
 * @brief Returns the current status of the device when it's off.
 * 
 * @return A string indicating the device is "Off".
 */
string OffState::getStatus() {
    return "Off";
}

/**
 * @brief Performs an action on the smart device based on the given command.
 * 
 * @param device The smart device on which the action is performed.
 * @param action The action to execute (e.g., "ToggleOn" or "Toggle").
 * 
 * - If the action is "ToggleOn" or "Toggle", the state changes to OnState.
 * - Other actions are currently not handled.
 */
void OffState::performAction(SmartDevice& device, string action) {
    if (action == "ToggleOn") {
        device.setState(new OnState());
    } else if (action == "Toggle") {
        device.setState(new OnState());
    } else {
        // Other actions are not handled in the off state.
    }
}
