#include <exception>
using namespace std;

#include "TemperatureSensor.h"
#include "Sensor.h"

/**
 * @class TemperatureSensor
 * @brief Represents a temperature sensor that detects temperature changes.
 * 
 * The TemperatureSensor class inherits from Sensor and notifies registered devices 
 * when a temperature change is detected.
 */

/**
 * @brief Detects a temperature change and notifies all registered devices.
 * 
 * This method triggers the notification process for all connected devices with the 
 * condition "temperature changed".
 */
void TemperatureSensor::senseTemperature() {
    notifyDevices("temperature changed");
}
