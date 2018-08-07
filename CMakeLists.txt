cmake_minimum_required(VERSION 3.5)
project(Monty_Hall_Game) # Project name
set(CMAKE_CXX_FLAGS "-Wextra -Wall -Werror -pedantic -std=c++11") # Compilation flags

# Set the target name and source
add_executable(Monty_Hall_Game src/main.cpp)
