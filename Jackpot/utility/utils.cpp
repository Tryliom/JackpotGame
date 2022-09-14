#include <random>
#include <iostream>
#include "utils.h"

namespace Utils {
	int GetRandomInt(const int min, const int max) {
		std::random_device osSeed;
		const uint_least32_t seed = osSeed();

		std::mt19937 generator(seed);
		std::uniform_int_distribution<uint_least32_t> distribute(min, max);

		return distribute(generator);
	}

	void ClearConsole() {
		#if defined _WIN32
			system("cls");
		#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__) || defined (__APPLE__)
			system("clear");
		#endif
	}

	void Say(const std::string& message) {
		std::cout << message << std::endl;
	}
};