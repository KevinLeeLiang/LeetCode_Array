//
// Created by garen_lee on 2025/5/26.
/**
  ******************************************************************************
  * @file           : L45_jump.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/26
  ******************************************************************************
  */
//

#include "L45_jump.h"

int L45_jump::jump(vector<int> &nums) {
    int n = nums.size();
    vector<int> dp(n, n);
    dp[0] = 0;
    // 动态规划填表：dp[j] 表示跳到位置 j 所需的最小跳跃次数
    for (int i = 0; i < n; i++) {
        // 从当前位置 i 出发，所能到达的最远位置为 i + nums[i]
        // 遍历从 i+1 到 i + nums[i] 的每一个位置 j
        for (int j = i + 1; j <= i + nums[i] && j < n; j++) {
            // 更新 dp[j]，取当前值和通过 i 到达 j 的跳跃次数（dp[i] + 1）的较小者
            dp[j] = min(dp[j], dp[i] + 1);
        }
    }
    return dp[n - 1];
}

void L45_jump::test() {
    vector<int> nums = {2, 3, 1, 1, 4};
    cout << jump(nums) << endl;
    nums = {2, 3, 0, 1, 4};
    cout << jump(nums) << endl;
}