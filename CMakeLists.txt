# CMakeList.txt : CMake project for 25.4.1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("25.4.1")

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

# Add source to this project's executable.
add_subdirectory(src)

# TODO: Add tests and install targets if needed.
