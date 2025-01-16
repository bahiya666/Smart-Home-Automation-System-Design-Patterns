#include <exception>
using namespace std;
#include <iostream>

#include "LegacyThermostat.h"
#include "SmartThermostatIntegrator.h"

/**
 * @class LegacyThermostat
 * @brief Represents a legacy thermostat with basic temperature control functionality.
 * 
 * This class provides methods to set and retrieve the current temperature, simulating
 * the behavior of an older thermostat system without smart capabilities.
 */

/**
 * @brief Sets the temperature on the legacy thermostat.
 * 
 * @param temp The desired temperature to set (in degrees Celsius).
 * 
 * This method sets the temperature and prints a message indicating the temperature change.
 */
void LegacyThermostat::setTemp(int temp) {
    currentTemperature = temp;
    std::cout << "Legacy thermostat temperature set to: " << currentTemperature << "°C" << std::endl;
}

/**
 * @brief Retrieves the current temperature from the legacy thermostat.
 * 
 * @return The current temperature (in degrees Celsius).
 * 
 * This method returns the temperature currently set on the thermostat and prints a message indicating the retrieval.
 */
int LegacyThermostat::getTemp() {
    std::cout << "LegacyThermostat: Returning current temperature." << std::endl;
    return currentTemperature;
}
