//
// Created by garen_lee on 2025/6/16.
/**
  ******************************************************************************
  * @file           : L53_maxSubArray.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/16
  ******************************************************************************
  */
//

#include "L53_maxSubArray.h"

int L53_maxSubArray::maxSubArray(vector<int> &nums) {
    vector<int> dp(nums.size(), 0);
    dp[0] = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        dp[i] = max(dp[i - 1] + nums[i], nums[i]);
    }
    return *max_element(dp.begin(), dp.end());
}

void L53_maxSubArray::test() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(nums) << endl;
    nums = {1};
    cout << maxSubArray(nums) << endl;
    nums = {5, 4, -1, 7, 8};
    cout << maxSubArray(nums) << endl;
}