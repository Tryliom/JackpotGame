#pragma once

/**
 * @brief A class that represents a dice.
 */
class Dice {
private:
	int _min;
	int _max;
	int _value;

public:
	/**
	 * @brief Construct a new Dice object.
	 * @param min The minimum value of the dice.
	 * @param max The maximum value of the dice.
	 */
	Dice(const int min, const int max);

	/**
	 * @brief Throw the dice and get a random value between min and max.
	 */
	void Roll();

	/**
	 * @brief Get the value of the dice.
	 * @return int The value of the dice.
	 */
	int GetValue() const;
};
