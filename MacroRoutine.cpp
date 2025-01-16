#include "MacroRoutine.h"
#include <iostream>
#include <algorithm> // Include for std::remove

/**
 * @brief Executes all commands in the macro routine.
 * 
 * Iterates through the list of commands and executes each one if it is not null.
 */
void MacroRoutine::execute() {
    for (SmartCommand* command : commands) {
        if (command) { // Ensure command is not null
            command->execute();
        }
    }
}

/**
 * @brief Adds a command to the macro routine.
 * 
 * @param command Pointer to the command to be added.
 */
void MacroRoutine::addProcedure(SmartCommand* command) {
    commands.push_back(command);
}

/**
 * @brief Removes a command from the macro routine.
 * 
 * @param command Pointer to the command to be removed.
 * 
 * Uses std::remove to find and erase the command from the list.
 */
void MacroRoutine::removeProcedure(SmartCommand* command) {
    auto it = std::remove(commands.begin(), commands.end(), command);
    if (it != commands.end()) {
        commands.erase(it, commands.end());
    }
}
