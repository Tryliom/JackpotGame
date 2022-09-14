#include <iostream>
#include <vector>
#include <limits>
#include "gameController.h"
#include "../models/dice/dice.h"
#include "../models/dice/dices/d6.h"
#include "../utility/utils.h"

void GameController::restart() {
	this->_money = 5;
	this->_goal = 7;
}

GameController::GameController() {
	this->_money = 5;
	this->_goal = 7;
}

void GameController::startGame() {
	const std::vector<Dice*> dices = {
		new D6(),
		new D6()
	};

	while (true) {
		// Clear the console
		Utils::ClearConsole();
		// Display all information for the player
		Utils::Say("Money: " + std::to_string(this->_money) + "$");
		Utils::Say("You need to make more than " + std::to_string(this->_goal) + " with 2 dices of 6 to double your money");
		// Ask the player to press Enter key to continue
		Utils::Say("Press Enter to roll the dices..");
		std::cin.ignore();

		// Roll the dices
		int total = 0;
		std::string allDiceRolled;
		for (Dice* dice: dices) {
			dice->Roll();
			if (!allDiceRolled.empty())
				allDiceRolled += " + ";
			allDiceRolled += std::to_string(dice->GetValue());
			total += dice->GetValue();
		}
		// Show to the player the result of the dices rolled
		Utils::Say("You rolled " + std::to_string(dices.size()) + " dices making: " + allDiceRolled + " = " + std::to_string(total));
		// Check if he win or lose
		if (total > this->_goal) {
			this->_goal = total;
			this->_money *= 2;
			Utils::Say("You won ! " + std::to_string(this->_money / 2) + "$ -> " + std::to_string(this->_money) + "$");
		} else {
			Utils::Say("You lost ! " + std::to_string(this->_money) + "$ -> 0$");
			// Restart data
			this->restart();
		}

		// Ask the player if he want to continue or not
		std::cout << "Press Enter to continue, any other key to stop.." << std::endl;
		// If the key press is not Enter, break, otherwise continue
		if (std::cin.peek() != '\n') {
			break;
		}
		std::cin.ignore();
	}
}
