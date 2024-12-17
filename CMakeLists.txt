cmake_minimum_required(VERSION 3.10)

# Set the project name
project(PepinoExample)

# Add the pepino library
add_subdirectory(pepino)

# Add the executable
add_executable(PepinoExample PepinoExample.cpp)

# Link the pepino library
target_link_libraries(PepinoExample PUBLIC pepino)

# Enable testing
enable_testing()

# Add Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add the test executable
add_executable(PepinoExampleTest PepinoExample_test.cpp)

# Link the test executable against gtest and gtest_main
target_link_libraries(PepinoExampleTest PRIVATE GTest::GTest GTest::Main pepino)

# Add a test
add_test(NAME PepinoExampleTest COMMAND PepinoExampleTest)
