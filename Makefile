CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Targets
TARGET = TestingMain

# Object files
OBJECTS = TestingMain.o Alarm.o DeviceState.o LegacyThermostat.o Light.o LockDoorCommand.o LockedState.o MacroRoutine.o \
          MotionSensor.o OffState.o OnState.o Sensor.o SmartCommand.o SmartDevice.o \
          SmartThermostat.o SmartThermostatIntegrator.o TemperatureSensor.o TurnOffLightCommand.o \
          TurnOnLightCommand.o UnlockDoorCommand.o UnlockedState.o

# Rules
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(TARGET)

# Object file generation for each class
TestingMain.o: TestingMain.cpp SmartDevice.h Sensor.h SmartThermostat.h Light.h Alarm.h
	$(CXX) $(CXXFLAGS) -c TestingMain.cpp -o TestingMain.o

Alarm.o: Alarm.cpp Alarm.h SmartDevice.h
	$(CXX) $(CXXFLAGS) -c Alarm.cpp -o Alarm.o

DeviceState.o: DeviceState.cpp DeviceState.h SmartDevice.h
	$(CXX) $(CXXFLAGS) -c DeviceState.cpp -o DeviceState.o

LegacyThermostat.o: LegacyThermostat.cpp LegacyThermostat.h
	$(CXX) $(CXXFLAGS) -c LegacyThermostat.cpp -o LegacyThermostat.o

Light.o: Light.cpp Light.h SmartDevice.h
	$(CXX) $(CXXFLAGS) -c Light.cpp -o Light.o

LockDoorCommand.o: LockDoorCommand.cpp LockDoorCommand.h SmartCommand.h
	$(CXX) $(CXXFLAGS) -c LockDoorCommand.cpp -o LockDoorCommand.o

LockedState.o: LockedState.cpp LockedState.h DeviceState.h
	$(CXX) $(CXXFLAGS) -c LockedState.cpp -o LockedState.o

MacroRoutine.o: MacroRoutine.cpp MacroRoutine.h SmartCommand.h
	$(CXX) $(CXXFLAGS) -c MacroRoutine.cpp -o MacroRoutine.o

MotionSensor.o: MotionSensor.cpp MotionSensor.h Sensor.h
	$(CXX) $(CXXFLAGS) -c MotionSensor.cpp -o MotionSensor.o

OffState.o: OffState.cpp OffState.h DeviceState.h
	$(CXX) $(CXXFLAGS) -c OffState.cpp -o OffState.o

OnState.o: OnState.cpp OnState.h DeviceState.h
	$(CXX) $(CXXFLAGS) -c OnState.cpp -o OnState.o

Sensor.o: Sensor.cpp Sensor.h
	$(CXX) $(CXXFLAGS) -c Sensor.cpp -o Sensor.o

SmartCommand.o: SmartCommand.cpp SmartCommand.h
	$(CXX) $(CXXFLAGS) -c SmartCommand.cpp -o SmartCommand.o

SmartDevice.o: SmartDevice.cpp SmartDevice.h DeviceState.h
	$(CXX) $(CXXFLAGS) -c SmartDevice.cpp -o SmartDevice.o

SmartThermostat.o: SmartThermostat.cpp SmartThermostat.h
	$(CXX) $(CXXFLAGS) -c SmartThermostat.cpp -o SmartThermostat.o

SmartThermostatIntegrator.o: SmartThermostatIntegrator.cpp SmartThermostatIntegrator.h SmartThermostat.h
	$(CXX) $(CXXFLAGS) -c SmartThermostatIntegrator.cpp -o SmartThermostatIntegrator.o

TemperatureSensor.o: TemperatureSensor.cpp TemperatureSensor.h Sensor.h
	$(CXX) $(CXXFLAGS) -c TemperatureSensor.cpp -o TemperatureSensor.o

TurnOffLightCommand.o: TurnOffLightCommand.cpp TurnOffLightCommand.h SmartCommand.h
	$(CXX) $(CXXFLAGS) -c TurnOffLightCommand.cpp -o TurnOffLightCommand.o

TurnOnLightCommand.o: TurnOnLightCommand.cpp TurnOnLightCommand.h SmartCommand.h
	$(CXX) $(CXXFLAGS) -c TurnOnLightCommand.cpp -o TurnOnLightCommand.o

UnlockDoorCommand.o: UnlockDoorCommand.cpp UnlockDoorCommand.h SmartCommand.h
	$(CXX) $(CXXFLAGS) -c UnlockDoorCommand.cpp -o UnlockDoorCommand.o

UnlockedState.o: UnlockedState.cpp UnlockedState.h DeviceState.h
	$(CXX) $(CXXFLAGS) -c UnlockedState.cpp -o UnlockedState.o

# Clean up compiled files
clean:
	rm -f $(TARGET) $(OBJECTS)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Memory management check using Valgrind
valgrind: $(TARGET)
	valgrind --leak-check=full ./$(TARGET)
