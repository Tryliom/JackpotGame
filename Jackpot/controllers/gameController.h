#pragma once

#include <string>

class GameController {
private:
	int _money;
	int _goal;

	/**
	 * @brief Reset values to default.
	 */
	void restart();
public:
	GameController();
	void StartGame();
};
