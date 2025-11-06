cmake_minimum_required(VERSION 3.10)
project(Practice-Repository)

add_executable(bitflip src/main.cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)

target_include_directories(bitflip PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/lib)