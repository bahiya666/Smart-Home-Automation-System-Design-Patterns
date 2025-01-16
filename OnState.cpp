#include <exception>
#include <string>
using namespace std;

#include "OnState.h"
#include "SmartDevice.h"
#include "DeviceState.h"
#include "OffState.h"

/**
 * @brief Returns the current status of the device when it's on.
 * 
 * @return A string indicating the device is "On".
 */
string OnState::getStatus() {
    return "On";
}

/**
 * @brief Performs an action on the smart device based on the given command.
 * 
 * @param device The smart device on which the action is performed.
 * @param action The action to execute (e.g., "ToggleOff" or "Toggle").
 * 
 * - If the action is "ToggleOff" or "Toggle", the state changes to OffState.
 * - Other actions are currently not handled.
 */
void OnState::performAction(SmartDevice& device, string action) {
    if (action == "ToggleOff") {
        device.setState(new OffState());
    } else if (action == "Toggle") {
        device.setState(new OffState());
    } else {
        // Other actions are not handled in the on state.
    }
}
