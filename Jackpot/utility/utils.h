#pragma once
#include <string>

/**
 * @brief A namespace for utility functions.
 */
namespace Utils {
	/**
	 * @brief Get a random integer between min and max included.
	 * @param min The minimum value
	 * @param max The maximum value
	 * @return int A random integer between min and max included.
	 */
	int GetRandomInt(const int min, const int max);
	/**
	 * @brief Clear the console.
	 */
	void ClearConsole();
	/**
	 * @brief Display a message in the console, return to the line.
	 * @param message The message to display.
	 */
	void Say(const std::string& message);
};