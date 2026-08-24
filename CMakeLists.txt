cmake_minimum_required(VERSION 3.29.2)
project(mathnav LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# add modules library
add_subdirectory(src)

# enable and add subdirectory for tests
enable_testing()
add_subdirectory(tests)
