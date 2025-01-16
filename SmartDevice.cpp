#include <exception>
#include <string>
using namespace std;
#include <iostream>

#include "SmartDevice.h"
#include "DeviceState.h"
#include "TurnOffLightCommand.h"
#include "Sensor.h"
#include "UnlockDoorCommand.h"
#include "TurnOnLightCommand.h"
#include "LockDoorCommand.h"
#include "Client.h"

/**
 * @class SmartDevice
 * @brief Represents a smart device with various actions and states.
 * 
 * The SmartDevice class provides a generic interface for different types of smart devices
 * (e.g., lights, alarms, and thermostats), allowing them to perform actions, maintain states,
 * and respond to environmental conditions.
 */

/**
 * @brief Default constructor for the SmartDevice class.
 * 
 * Initializes the device type to "monitor" and the location to "kitchen".
 */
SmartDevice::SmartDevice() {
    this->deviceType = "monitor";
    this->location = "kitchen";
    this->state = nullptr;  
}

/**
 * @brief Parameterized constructor for the SmartDevice class.
 * 
 * @param deviceType The type of the device (e.g., "Light", "Thermostat").
 * @param location The location of the device (e.g., "Living Room").
 */
SmartDevice::SmartDevice(string deviceType, string location) {
    this->deviceType = deviceType;
    this->location = location;
    this->state = nullptr;  
}

/**
 * @brief Performs an action on the device based on the given command.
 * 
 * @param action The action to be executed (e.g., "Turn On Lights", "Lock Doors").
 * 
 * Executes the action based on the device's state and provides feedback through the console.
 */
void SmartDevice::performAction(string action) {
    if (state) {
        state->performAction(*this, action); 
    }
    if (action == "Turn Off Lights") {
        std::cout << "Lights are now OFF." << std::endl;
    } else if (action == "Turn On Lights") {
        std::cout << "Lights are now ON." << std::endl;
    } else if (action == "Lock Doors") {
        std::cout << "Doors are now LOCKED." << std::endl;
    } else if (action == "Unlock Doors") {
        std::cout << "Doors are now UNLOCKED." << std::endl;
    } else {
        std::cout << "Unknown action: " << action << std::endl;
    }
}

/**
 * @brief Gets the current status of the device.
 * 
 * @return A string representing the current status of the device (e.g., "On", "Off").
 */
string SmartDevice::getStatus() {
    if (state) {
        return state->getStatus();  
    }
    return "Unknown"; 
}

/**
 * @brief Gets the type of the device.
 * 
 * @return A string representing the type of the device (e.g., "Light", "Thermostat").
 */
string SmartDevice::getDeviceType() {
    return this->deviceType;
}

/**
 * @brief Sets the state of the device.
 * 
 * @param state Pointer to the new state of the device.
 */
void SmartDevice::setState(DeviceState* state) {
    this->state = state;
}

/**
 * @brief Gets the current state of the device.
 * 
 * @return Pointer to the current state of the device.
 */
DeviceState* SmartDevice::getState() {
    return this->state;
}

/**
 * @brief Updates the device based on an environmental condition.
 * 
 * @param condition The environmental condition to respond to (e.g., "motion detected").
 * 
 * The device responds accordingly based on its type and the detected condition.
 */
void SmartDevice::update(string condition) {
    if (condition == "motion detected") {
        if (deviceType == "Light") {
            performAction("Turn On Lights");
        } else if (deviceType == "Alarm") {
            std::cout << "Alarm activated due to motion detection!" << std::endl;
        }
    } else if (condition == "temperature changed") {
        if (deviceType == "Thermostat") {
            std::cout << "Adjusting thermostat based on temperature change." << std::endl;
        }
    } else {
        std::cout << "No specific response for condition: " << condition << std::endl;
    }
}
