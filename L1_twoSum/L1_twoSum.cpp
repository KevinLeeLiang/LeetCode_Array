//
// Created by garen-lee on 2025/3/29.
/**
  ******************************************************************************
  * @file           : L1_twoSum.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/29
  ******************************************************************************
  */
//

#include "L1_twoSum.h"

vector<int> L1_twoSum::twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> hash;
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        if (hash.find(target - nums[i]) != hash.end()) {
            return {hash[target - nums[i]], i};
        } else {
            hash[nums[i]] = i;
        }
    }
    return {};
}

void L1_twoSum::test() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    print_vector(result);
    nums = {3, 2, 4};
    target = 6;
    result = twoSum(nums, target);
    print_vector(result);
    nums = {3, 3};
    target = 6;
    result = twoSum(nums, target);
    print_vector(result);
}