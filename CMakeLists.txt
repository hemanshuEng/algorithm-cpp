cmake_minimum_required(VERSION 3.19)
project(algorithm)

set(CMAKE_CXX_STANDARD 14)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)

add_test (NAME TwoSum COMMAND two_sum_test)