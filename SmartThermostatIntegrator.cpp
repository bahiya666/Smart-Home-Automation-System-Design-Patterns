#include <exception>
#include <string>
using namespace std;
#include <iostream>

#include "SmartThermostatIntegrator.h"
#include "LegacyThermostat.h"
#include "Client.h"
#include "SmartThermostat.h"
#include "SmartDevice.h"

/**
 * @class SmartThermostatIntegrator
 * @brief Integrates a legacy thermostat into a smart thermostat system.
 * 
 * The SmartThermostatIntegrator allows for temperature settings to be applied to 
 * a legacy thermostat while providing the functionality expected from a smart thermostat.
 */

/**
 * @brief Default constructor for the SmartThermostatIntegrator class.
 */
SmartThermostatIntegrator::SmartThermostatIntegrator() {}

/**
 * @brief Sets the temperature on the integrated legacy thermostat.
 * 
 * @param temp The desired temperature to set (in degrees Celsius).
 * 
 * This method calls the setTemp method of the legacy thermostat and outputs a message 
 * indicating the temperature has been set.
 */
void SmartThermostatIntegrator::setTemperature(int temp) {
    legacyThermostat.setTemp(temp);
    std::cout << "SmartThermostatIntegrator: Set temperature to " << temp << "°C" << std::endl;
}

/**
 * @brief Retrieves the current temperature from the integrated legacy thermostat.
 * 
 * @return The current temperature (in degrees Celsius).
 * 
 * This method calls the getTemp method of the legacy thermostat and outputs the 
 * current temperature.
 */
int SmartThermostatIntegrator::getTemperature() {
    int temp = legacyThermostat.getTemp();
    std::cout << "SmartThermostatIntegrator: Current temperature is " << temp << "°C" << std::endl;
    return temp;
}

/**
 * @brief Updates the thermostat based on a given condition.
 * 
 * @param condition The condition that triggers the update (e.g., "temperature changed").
 * 
 * If the condition indicates a temperature change, it sets a new temperature. Otherwise,
 * it outputs a message indicating no action is taken.
 */
void SmartThermostatIntegrator::update(string condition) {
    if (condition == "temperature changed") {
        int newTemp = 22; 
        setTemperature(newTemp);
        std::cout << "SmartThermostatIntegrator: Adjusting thermostat based on temperature change to " 
                  << newTemp << "°C" << std::endl;
    } else {
        std::cout << "SmartThermostatIntegrator: No action for condition: " << condition << std::endl;
    }
}
