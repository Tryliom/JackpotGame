#include "dice.h"
#include "../../utility/utils.h"

Dice::Dice(const int min, const int max) {
	this->_min = min;
	this->_max = max;
	this->_value = 0;
}

void Dice::Roll() {
	this->_value = Utils::GetRandomInt(this->_min, this->_max);
}

int Dice::GetValue() const {
	return this->_value;
}