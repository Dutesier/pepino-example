cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set the project name
project(PepinoExample)

# Add the pepino library
add_subdirectory(pepino)

# Add the executable
add_library(PepinoExample PepinoExample.cpp)


find_package(GTest)

add_executable(PepinoExampleTest PepinoExample_test.cpp) 

target_link_libraries(PepinoExampleTest PRIVATE Pepino PepinoExample GTest::gtest_main)

