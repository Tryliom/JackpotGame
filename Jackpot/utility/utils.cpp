#include <random>
#include <iostream>
#include "utils.h"

namespace Utils {
	int getRandomInt(int min, int max) {
		std::random_device os_seed;
		uint_least32_t seed = os_seed();

		std::mt19937 generator(seed);
		std::uniform_int_distribution<uint_least32_t> distribute(min, max);

		return (int) distribute(generator);
	}

	void clearConsole() {
		#if defined _WIN32
			system("cls");
		#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__) || defined (__APPLE__)
			system("clear");
		#endif
	}

	void say(const std::string& message) {
		std::cout << message << std::endl;
	}
};