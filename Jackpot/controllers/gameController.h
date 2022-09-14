#pragma once

#include <string>

class GameController {
private:
	int _money;
	int _goal;

	void restart();
public:
	GameController();
	void StartGame();
};
