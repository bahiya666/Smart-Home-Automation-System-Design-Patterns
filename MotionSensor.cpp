#include <exception>
using namespace std;

#include "MotionSensor.h"
#include "Sensor.h"

/**
 * @brief Detects motion and notifies all registered devices.
 * 
 * Triggers the notification process for all connected devices with the "motion detected" condition.
 */
void MotionSensor::detectMovement() {
    notifyDevices("motion detected");
}
