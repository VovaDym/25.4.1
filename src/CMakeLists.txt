cmake_minimum_required (VERSION 3.8)

project ("25.4.1")



add_executable (25.4.1 "25.4.1.cpp" "${MY_INCLUDE_DIR}/dots.h" "${MY_INCLUDE_DIR}/instruments.h")

target_include_directories(25.4.1 PUBLIC ${MY_INCLUDE_DIR})
