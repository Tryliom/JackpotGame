#pragma once

#include <string>

class GameController {
private:
	int money;
	int goal;

	void init();
public:
	GameController();
	void startGame();
};
