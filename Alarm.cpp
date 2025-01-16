#include <exception>
#include <string>
using namespace std;
#include <iostream>

#include "Alarm.h"
#include "SmartDevice.h"

/**
 * @class Alarm
 * @brief Represents a smart alarm device that responds to environmental changes.
 * 
 * The Alarm class inherits from SmartDevice and implements the update method
 * to react to sensor notifications such as motion detection.
 */

/**
 * @brief Constructor for the Alarm class.
 * 
 * Initializes the alarm's state as inactive.
 */
Alarm::Alarm() {
    isActive = false; ///< Initially, the alarm is inactive.
}

/**
 * @brief Updates the state of the alarm based on a detected environmental condition.
 * 
 * @param condition The environmental condition to which the alarm responds (e.g., "motion detected").
 * 
 * - If the condition is "motion detected", the alarm is activated.
 * - If the condition is "no motion", the alarm is deactivated.
 * - For other conditions, no action is taken.
 */
void Alarm::update(string condition) {
    if (condition == "motion detected") {
        isActive = true;
        std::cout << "Alarm: Motion detected! Alarm is now active." << std::endl;
    } else if (condition == "no motion") {
        isActive = false;
        std::cout << "Alarm: No motion detected. Alarm is now inactive." << std::endl;
    } else {
        std::cout << "Alarm: No action for condition: " << condition << std::endl;
    }
}

/**
 * @brief Retrieves the current status of the alarm.
 * 
 * @return A string indicating whether the alarm is "active" or "inactive".
 */
string Alarm::getStatus() {
    return isActive ? "active" : "inactive";
}
