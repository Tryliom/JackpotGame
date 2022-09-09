#include "dice.h"

Dice::Dice(int min, int max) {
	this->min = min;
	this->max = max;
}

void Dice::throwDice() {
	this->value = Utils::getRandomInt(this->min, this->max);
}

int Dice::getValue() {
	return this->value;
}