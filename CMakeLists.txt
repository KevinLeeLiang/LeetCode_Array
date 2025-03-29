cmake_minimum_required(VERSION 3.17)
project(Array)

set(CMAKE_CXX_STANDARD 20)
include_directories(util)
add_executable(Array main.cpp util/util.h test_factory.h L1_twoSum/L1_twoSum.cpp L1_twoSum/L1_twoSum.h L4_findMedianSortedArrays/L4_findMedianSortedArrays.cpp L4_findMedianSortedArrays/L4_findMedianSortedArrays.h)