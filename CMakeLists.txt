cmake_minimum_required(VERSION 3.10)
project(IntegralAreaCalculator)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories(lib)

add_executable(IntegralAreaCalculator
    src/main.cpp
    src/integral_calculator.cpp
    src/input_parser.cpp
    lib/math_utils.cpp
)
