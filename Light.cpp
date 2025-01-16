#include <exception>
#include <string>
using namespace std;
#include <iostream>

#include "Light.h"
#include "SmartDevice.h"

/**
 * @class Light
 * @brief Represents a smart light device that responds to environmental changes.
 * 
 * The Light class inherits from SmartDevice and implements the update method
 * to react to sensor notifications, such as motion detection, turning the light on or off accordingly.
 */

/**
 * @brief Constructor for the Light class.
 * 
 * Initializes the light's state to a default of off (no state set).
 */
Light::Light() {
    setState(nullptr); ///< Initially, the light state is set to null (off by default).
}

/**
 * @brief Updates the state of the light based on a detected environmental condition.
 * 
 * @param condition The environmental condition to which the light responds (e.g., "motion detected" or "no motion").
 * 
 * - If the condition is "motion detected", the light is turned on.
 * - If the condition is "no motion", the light is turned off.
 * - For other conditions, no action is taken.
 */
void Light::update(string condition) {
    if (condition == "motion detected") {
        std::cout << "Light: Motion detected, turning on the light." << std::endl;
        performAction("Turn On Lights");
    } else if (condition == "no motion") {
        std::cout << "Light: No motion detected, turning off the light." << std::endl;
        performAction("Turn Off Lights");
    } else {
        std::cout << "Light: No action for condition: " << condition << std::endl;
    }
}

/**
 * @brief Retrieves the current status of the light.
 * 
 * @return A string indicating whether the light is "on" or "off".
 * 
 * This method checks the current state of the light and returns its status. If no state is set, it defaults to "off".
 */
string Light::getStatus() {
    if (getState()) {
        return getState()->getStatus();
    }
    return "off";
}
