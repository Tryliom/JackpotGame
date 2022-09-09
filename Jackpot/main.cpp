#include <iostream>
#include <string>
#include <vector>
#include "models/dice/dice.h"
#include "models/dice/dices/d6.h"

int main() {
	int playerMoney = 5;
	int score = 7;
	std::vector<Dice*> dices = {
		new D6(),
		new D6()
	};

	while (true) {
		system("cls");
		std::string yesNo;
		std::cout << "Money: " << std::to_string(playerMoney) << " gold" << std::endl;
		std::cout << "You need to make more than " << std::to_string(score) << " with 2 dices of 6 to double your money" << std::endl;
		std::cout << "Do you want to try to double your money ? [y/n]" << std::endl;
		std::cin >> yesNo;

		if (yesNo == "y") {
			int total = 0;
			for (Dice* dice: dices) {
				dice->throwDice();
				total += dice->getValue();
			}
			std::cout << "You have throw 2 dices making a total of " << std::to_string(total) << std::endl;
			if (total > score) {
				score = total;
				playerMoney *= 2;
				std::cout << "You win !" << std::endl;
				std::cout << std::to_string(playerMoney / 2) << " -> " << std::to_string(playerMoney) << std::endl;
			} else {
				std::cout << "Lose.." << std::endl;
				playerMoney = 5;
				score = 7;
			}

			std::cout << "Do you want to continue ? [y/n]" << std::endl;
			std::cin >> yesNo;
			if (yesNo == "y") {
				continue;
			} else {
				break;
			}
		} else {
			break;
		}
	}

	return 0;
}