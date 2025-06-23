//
// Created by garen_lee on 2025/6/23.
/**
  ******************************************************************************
  * @file           : L55_canJump.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/23
  ******************************************************************************
  */
//

#include "L55_canJump.h"

bool L55_canJump::canJump(vector<int> &nums) {
    int n = nums.size();
    int right_most = 0;
    for (int i = 0; i < n; ++i) {
        if (right_most >= i) {
            right_most = max(right_most, nums[i] + i);
            if (right_most >= n - 1) {
                return true;
            }
        }
    }
    return false;
}

void L55_canJump::test() {
    vector<int> nums = {2, 3, 1, 1, 4};
    cout << canJump(nums) << endl;
    nums = {3, 2, 1, 0, 4};
    cout << canJump(nums) << endl;
    nums = {0, 1};
    cout << canJump(nums) << endl;
}