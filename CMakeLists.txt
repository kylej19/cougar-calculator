# CMakeLists.txt - Build instructions for Cougar Calculator CLI
#
# What this file does:
#   1. Sets the minimum required CMake version.
#   2. Names the project "CougarCalculator".
#   3. Sets the C++ standard to C++17.
#   4. Tells CMake which source files to compile:
#       - In this case the 'main.cpp' file
#   5. Creates the executable called "cougar_calculator".
#
# How to build the project from the terminal:
#   1. Create a build folder: mkdir build
#   2. Go into the build folder: cd build
#   3. Configure the project: cmake ..
#   4. Compile the program: cmake --build .
#   5. Run the program: ./cougar_calculator
#
# Notes for beginners:
#   - You don't need to put your source files in the build folder.
#   - CLion automatically detects and uses this CMakeLists.txt.
#   - Any new .cpp files you create must be added to the add_executable() line.

cmake_minimum_required(VERSION 3.10)
project(CougarCalculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(cougar_calculator main.cpp)

