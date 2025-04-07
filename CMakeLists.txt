cmake_minimum_required(VERSION 3.17)
project(Array)

set(CMAKE_CXX_STANDARD 20)
include_directories(util)
add_executable(Array main.cpp util/util.h test_factory.h L1_twoSum/L1_twoSum.cpp L1_twoSum/L1_twoSum.h L4_findMedianSortedArrays/L4_findMedianSortedArrays.cpp L4_findMedianSortedArrays/L4_findMedianSortedArrays.h L11_maxArea/L11_maxArea.cpp L11_maxArea/L11_maxArea.h L15_threeSum/L15_threeSum.cpp L15_threeSum/L15_threeSum.h L16_threeSumClosest/L16_threeSumClosest.cpp L16_threeSumClosest/L16_threeSumClosest.h L18_fourSum/L18_fourSum.cpp L18_fourSum/L18_fourSum.h)