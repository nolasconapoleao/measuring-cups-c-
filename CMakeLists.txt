cmake_minimum_required(VERSION 3.13)
project(measuring_cups)

set(CMAKE_CXX_STANDARD 14)

add_executable(measuring_cups main.cpp src/CupList.cpp src/CupList.h src/Cup.cpp src/Cup.h include/utils.cpp include/utils.h tests/cup.cpp tests/utils.cpp tests/cupList.cpp)