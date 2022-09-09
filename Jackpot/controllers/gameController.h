#pragma once

#include <string>

class GameController {
private:
	int money;
	int goal;

	void restart();
public:
	GameController();
	void startGame();
};
