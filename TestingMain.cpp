#include <iostream>
#include "SmartDevice.h"
#include "OnState.h"
#include "OffState.h"
#include "LockedState.h"
#include "UnlockedState.h"
#include "SmartThermostatIntegrator.h"
#include "SmartDevice.h"
#include "LegacyThermostat.h"
#include "SmartThermostat.h"
#include "SmartCommand.h"
#include "TurnOnLightCommand.h"
#include "TurnOffLightCommand.h"
#include "LockDoorCommand.h"
#include "UnlockDoorCommand.h"
#include "MacroRoutine.h"
#include "MotionSensor.h"
#include "TemperatureSensor.h"
#include "Light.h"
#include "Alarm.h"
#include "SmartThermostatIntegrator.h"

using namespace std;

void testLightDevice() {
    cout << "Testing Light Device:" << endl;
    SmartDevice light("Light", "Living Room");
    light.setState(new OffState());
    cout << "Initial light status: " << light.getStatus() << endl;
    light.performAction("ToggleOn");
    cout << "After turning on: " << light.getStatus() << endl;
    light.performAction("ToggleOff");
    cout << "After turning off: " << light.getStatus() << endl; 
    light.performAction("Toggle");
    cout << "After toggle (on): " << light.getStatus() << endl;
    light.performAction("Toggle");
    cout << "After toggle (off): " << light.getStatus() << endl;
    cout << "Light Device Test Completed.\n" << endl;
}

void testDoorLockDevice() {
    cout << "Testing Door Lock Device:" << endl;
    SmartDevice doorLock("DoorLock", "Front Door");
    doorLock.setState(new UnlockedState());
    cout << "Initial door lock status: " << doorLock.getStatus() << endl;
    doorLock.performAction("Lock");
    cout << "After locking: " << doorLock.getStatus() << endl;
    doorLock.performAction("Unlock");
    cout << "After unlocking: " << doorLock.getStatus() << endl;
    doorLock.performAction("Lock");
    cout << "After locking again: " << doorLock.getStatus() << endl;
    cout << "Door Lock Device Test Completed.\n" << endl;
}

void testState(){
    testLightDevice();
    testDoorLockDevice();
}

void testAdapter()
{
    // Create an instance of SmartThermostatIntegrator
    SmartThermostatIntegrator integrator;

    // Test setting the temperature via the integrator (which adapts the legacy thermostat)
    cout << "\n-- Testing setTemperature() --" << endl;
    integrator.setTemperature(22);  // Set temperature to 22°C

    // Test getting the temperature from the integrator (which gets it from the legacy thermostat)
    cout << "\n-- Testing getTemperature() --" << endl;
    int currentTemp = integrator.getTemperature();  // Should return 22°C
    cout << "The current temperature is: " << currentTemp << "°C" << endl;

    // Test setting a new temperature via the integrator
    cout << "\n-- Testing setTemperature() with a new value --" << endl;
    integrator.setTemperature(25);  // Set temperature to 25°C

    // Test getting the updated temperature
    cout << "\n-- Testing getTemperature() after setting a new value --" << endl;
    currentTemp = integrator.getTemperature();  // Should return 25°C
    cout << "The current temperature is: " << currentTemp << "°C" << endl;

}

void testCommand()
{
    // Create a SmartDevice instance
    SmartDevice smartDevice;

    // Create command instances
    TurnOffLightCommand turnOffCommand;
    TurnOnLightCommand turnOnCommand;
    LockDoorCommand lockCommand;
    UnlockDoorCommand unlockCommand;

    // Create a MacroRoutine instance
    MacroRoutine macroRoutine;

    // Add commands to the MacroRoutine
    macroRoutine.addProcedure(&turnOnCommand);
    macroRoutine.addProcedure(&lockCommand);
    macroRoutine.addProcedure(&turnOffCommand);
    macroRoutine.addProcedure(&unlockCommand);

    // Execute the MacroRoutine
    cout << "Executing Macro Routine:" << endl;
    macroRoutine.execute();

    // Now let's remove a command and test again
    macroRoutine.removeProcedure(&lockCommand);
    
    cout << "\nExecuting Macro Routine after removing lock command:" << endl;
    macroRoutine.execute();

}

void testMotionSensor() {
    cout << "Testing Motion Sensor:" << endl;

    MotionSensor motionSensor;

    Light livingRoomLight;
    Alarm frontDoorAlarm;

    motionSensor.addDevice(&livingRoomLight);
    motionSensor.addDevice(&frontDoorAlarm);

    cout << "\nSimulating motion detection:" << endl;
    motionSensor.detectMovement();

    cout << "\nSimulating no motion:" << endl;
    motionSensor.notifyDevices("no motion");

    cout << "\nRemoving the light and simulating motion again:" << endl;
    motionSensor.removeDevice(&livingRoomLight);
    motionSensor.detectMovement();

    cout << "\nMotion Sensor Test Completed.\n" << endl;
}

void testTemperatureSensor() {
    cout << "Testing Temperature Sensor:" << endl;

    TemperatureSensor tempSensor;

    SmartThermostatIntegrator thermostat;

    tempSensor.addDevice(&thermostat);

    cout << "\nSimulating temperature change:" << endl;
    tempSensor.senseTemperature();

    

    cout << "\nTemperature Sensor Test Completed.\n" << endl;
}


void testObserver(){
    testMotionSensor();
    testTemperatureSensor();
}

int main() {
    cout<<"**********Testing State Pattern**********"<<endl;
    testState();
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"**********Testing Adapter Pattern**********"<<endl;
    testAdapter();
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"**********Testing Command Pattern**********"<<endl;
    testCommand();
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"**********Testing Observer Pattern**********"<<endl;
    testObserver();
    
    return 0;
}
