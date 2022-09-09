#include <random>
#include "utils.h"

namespace Utils {
	int getRandomInt(int min, int max) {
		std::random_device os_seed;
		uint_least32_t seed = os_seed();

		std::mt19937 generator(seed);
		std::uniform_int_distribution<uint_least32_t> distribute(min, max);

		return (int) distribute(generator);
	}
};