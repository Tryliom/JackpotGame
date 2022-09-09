#pragma once

/**
 * @brief A namespace for utility functions.
 */
namespace Utils {
	/**
	 * @brief Get a random integer between min and max included.
	 * @param min The minimum value
	 * @param max The maximum value
	 * @return
	 */
	int getRandomInt(int min, int max);
	/**
	 * @brief Clear the console.
	 */
	void clearConsole();
	/**
	 * @brief Display a message in the console, return to the line.
	 * @param message The message to display.
	 */
	void say(const std::string& message);
};