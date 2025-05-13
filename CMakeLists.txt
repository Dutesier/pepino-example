cmake_minimum_required(VERSION 3.10)

# Set the project name
project(PepinoExample)

# Add the pepino library
add_subdirectory(pepino)

# Add the executable
add_library(PepinoExample PepinoExample.cpp)

# Link the pepino library
target_link_libraries(PepinoExample PUBLIC pepino)

find_package(GTest)

add_executable(PepinoExampleTest PepinoExample_test.cpp) 

target_link_libraries(PepinoExampleTest PRIVATE PepinoExample GTest::gtest_main)

