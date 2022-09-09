cmake_minimum_required(VERSION 3.16)
project(Jackpot)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Jackpot/models/dice)
include_directories(Jackpot/models/dice/dices)
include_directories(Jackpot/utility)
include_directories(Jackpot/controllers)

add_executable(Jackpot
        Jackpot/models/dice/dices/d6.cpp
        Jackpot/models/dice/dices/d6.h
        Jackpot/models/dice/dice.cpp
        Jackpot/models/dice/dice.h
        Jackpot/utility/utils.cpp
        Jackpot/utility/utils.h
        Jackpot/controllers/gameController.cpp
        Jackpot/controllers/gameController.h
        Jackpot/main.cpp)
