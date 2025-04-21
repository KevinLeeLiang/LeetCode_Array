//
// Created by garen_lee on 2025/4/21.
/**
  ******************************************************************************
  * @file           : L31_nextPermutation.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/21
  ******************************************************************************
  */
//

#include "L31_nextPermutation.h"

void L31_nextPermutation::nextPermutation(vector<int> &nums) {
    int i = nums.size() - 2;
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }
    if (i >= 0) {
        int j = nums.size() - 1;
        while (j >= 0 && nums[i] >= nums[j]) {
            j--;
        }
        swap(nums[i], nums[j]);
    }
    reverse(nums.begin() + i + 1, nums.end());
}

void L31_nextPermutation::test() {
    vector<int> nums = {1, 2, 3};
    nextPermutation(nums);
    print_vector(nums);
    nums = {3, 2, 1};
    nextPermutation(nums);
    print_vector(nums);
    nums = {1, 1, 5};
    nextPermutation(nums);
    print_vector(nums);
    nums = {1,3,2,4};
    nextPermutation(nums);
    print_vector(nums);
    nums = {1,3,2};
    nextPermutation(nums);
    print_vector(nums);
}