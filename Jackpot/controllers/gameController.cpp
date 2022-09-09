#include <iostream>
#include <vector>
#include <limits>
#include "gameController.h"
#include "../models/dice/dice.h"
#include "../models/dice/dices/d6.h"
#include "../utility/utils.h"

void GameController::init() {
	this->money = 5;
	this->goal = 7;
}

GameController::GameController() {
	this->init();
}

void GameController::startGame() {
	std::vector<Dice*> dices = {
			new D6(),
			new D6()
	};

	while (true) {
		Utils::clearConsole();
		Utils::say("Money: " + std::to_string(this->money) + "$");
		Utils::say("You need to make more than " + std::to_string(this->goal) + " with 2 dices of 6 to double your money");
		Utils::say("Press Enter to roll the dices..");
		std::cin.ignore();

		int total = 0;
		for (Dice* dice: dices) {
			dice->throwDice();
			total += dice->getValue();
		}
		Utils::say("You rolled " + std::to_string(total));
		if (total > this->goal) {
			this->goal = total;
			this->money *= 2;
			Utils::say("You won ! " + std::to_string(this->money / 2) + "$ -> " + std::to_string(this->money) + "$");
		} else {
			Utils::say("You lost ! " + std::to_string(this->money) + "$ -> 0$");
			this->init();
		}

		std::cout << "Press Enter to continue, any other key to stop.." << std::endl;
		if (std::cin.peek() != '\n') {
			break;
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}
