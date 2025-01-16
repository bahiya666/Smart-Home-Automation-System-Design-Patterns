#include <exception>
#include <algorithm>
using namespace std;

#include "Sensor.h"
#include "SmartDevice.h"

/**
 * @brief Adds a smart device to the sensor's list.
 * 
 * @param device Pointer to the smart device to be added.
 */
void Sensor::addDevice(SmartDevice* device) {
    deviceList.push_back(device);
}

/**
 * @brief Removes a smart device from the sensor's list.
 * 
 * @param device Pointer to the smart device to be removed.
 */
void Sensor::removeDevice(SmartDevice* device) {
    auto it = std::find(deviceList.begin(), deviceList.end(), device);
    if (it != deviceList.end()) {
        deviceList.erase(it);
    }
}

/**
 * @brief Notifies all registered devices with a specific condition.
 * 
 * @param condition The environmental condition being communicated (e.g., "motion detected").
 */
void Sensor::notifyDevices(string condition) {
    for (SmartDevice* device : deviceList) {
        device->update(condition);  
    }
}
