# Specify the minimum version for CMake
cmake_minimum_required(VERSION 2.8)

# Project's name
project(hello)

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# The following folder will be included
include_directories("${PROJECT_SOURCE_DIR}/include")

# add the files which are needed to generate the binary and also the name of the binary
add_executable(library ${PROJECT_SOURCE_DIR}/main.c ${PROJECT_SOURCE_DIR}/string_add.c ${PROJECT_SOURCE_DIR}/library.c)
