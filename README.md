# Smart-Home-Automation-System-Design-Patterns
Description
The Smart Home Automation System is a simulation of smart home devices and their interaction using several Design Patterns. The system demonstrates the implementation of the State, Adapter, Command, and Observer design patterns, allowing for the management and control of various smart devices such as lights, door locks, thermostats, and sensors.

This system simulates the functionality of a smart home, including temperature control, device state management, security devices, and automated routines. The project uses smart devices like lights, door locks, thermostats, motion sensors, and temperature sensors, as well as different strategies for device control through commands and events.

Key Features
State Pattern: Smart devices (like lights and door locks) can change states based on actions like turning on/off or locking/unlocking. The state pattern helps model these dynamic changes.
Adapter Pattern: Enables compatibility between a modern smart thermostat system and a legacy thermostat by integrating the two via an adapter.
Command Pattern: Implements commands to control smart devices. This pattern is used to create a macro routine, where multiple device actions can be executed in sequence.
Observer Pattern: Enables sensors to notify multiple devices (such as lights or alarms) about specific events like motion detection or temperature changes.

Design Patterns Explained
State Pattern:
Manages the states of smart devices such as lights (On, Off) and door locks (Locked, Unlocked).
Each device has different behaviors based on its current state.

Adapter Pattern:
Provides a way to adapt the modern SmartThermostat to interact with a legacy Thermostat system through an adapter class (SmartThermostatIntegrator).

Command Pattern:
Encapsulates requests as objects. Devices like lights or door locks are controlled via command objects (e.g., TurnOnLightCommand, LockDoorCommand).
A macro routine (MacroRoutine) executes multiple commands sequentially.

Observer Pattern:
Implements sensors that can notify multiple devices (such as lights, alarms, or thermostats) about events like motion detection or temperature changes.
Devices observe these changes and react accordingly (e.g., lights turn on when motion is detected).#

Files in the Project
SmartDevice.h - Defines the basic structure for a smart device, supporting state changes.
State Classes:
OnState.h, OffState.h, LockedState.h, UnlockedState.h: Implement different states for devices like lights and locks.
SmartThermostatIntegrator.h - Integrates a modern thermostat system with a legacy thermostat via the adapter pattern.
SmartCommand.h - Base class for command patterns.
Command Classes:
TurnOnLightCommand.h, TurnOffLightCommand.h, LockDoorCommand.h, UnlockDoorCommand.h: Command classes to perform actions on devices.
MacroRoutine.h - A routine for executing multiple commands in a sequence.
MotionSensor.h - A motion sensor that can trigger events to smart devices.
TemperatureSensor.h - A temperature sensor that monitors and adjusts the thermostat.
Device Classes:
Light.h, Alarm.h: Represents smart home devices.
Main.cpp - Contains the main() function and tests for the different design patterns.

Main Functions
testState(): Tests the State Pattern by changing the states of devices like lights and door locks. It toggles the light on/off and locks/unlocks the door.

testAdapter(): Tests the Adapter Pattern by using a SmartThermostatIntegrator to interact with both a modern and a legacy thermostat.

testCommand(): Tests the Command Pattern by executing commands like turning on lights, locking doors, and running a macro routine with multiple commands.

testObserver(): Tests the Observer Pattern by simulating motion detection and temperature sensing, and observing how devices (like lights and alarms) react to those events.##

Compile the Code:
g++ -o smart_home_system main.cpp
Run the Executable:
./smart_home_system
