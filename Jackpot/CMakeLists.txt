cmake_minimum_required(VERSION 3.16)
project(Jackpot)

set(CMAKE_CXX_STANDARD 14)

add_executable(Jackpot
        main.cpp
        controllers/gameController.cpp controllers/gameController.h models/dice/dice.cpp models/dice/dice.h models/dice/dices/d6.h models/dice/dices/d6.cpp utility/utils.h utility/utils.cpp
        )