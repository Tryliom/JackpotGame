#pragma once

/**
 * @brief A class that represents a dice.
 */
class Dice {
private:
	int min;
	int max;
	int value;

public:
	/**
	 * @brief Construct a new Dice object.
	 * @param min The minimum value of the dice.
	 * @param max The maximum value of the dice.
	 */
	Dice(int min, int max);

	/**
	 * @brief Throw the dice and get a random value between min and max.
	 */
	void throwDice();

	/**
	 * @brief Get the value of the dice.
	 * @return int The value of the dice.
	 */
	int getValue();
};
