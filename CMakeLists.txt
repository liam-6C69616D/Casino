cmake_minimum_required(VERSION 3.16)
project(C___Casino_Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(C___Casino_Project main.cpp src/Card.cpp src/Deck.cpp src/blackjack/Blackjack.cpp)