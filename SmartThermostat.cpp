#include "SmartThermostat.h"

/**
 * @class SmartThermostat
 * @brief Represents a smart thermostat device that controls temperature settings.
 * 
 * The SmartThermostat class provides methods to set and retrieve the current temperature
 * for a smart thermostat.
 */

/**
 * @brief Default constructor for the SmartThermostat class.
 * 
 * Initializes the thermostat with a default temperature of 30 degrees Celsius.
 */
SmartThermostat::SmartThermostat() {
    temperature = 30;
}

/**
 * @brief Sets the temperature of the smart thermostat.
 * 
 * @param temp The desired temperature to set (in degrees Celsius).
 */
void SmartThermostat::setTemperature(int temp) {
    this->temperature = temp;
}

/**
 * @brief Retrieves the current temperature of the smart thermostat.
 * 
 * @return The current temperature (in degrees Celsius).
 */
int SmartThermostat::getTemperature() {
    return this->temperature;
}
