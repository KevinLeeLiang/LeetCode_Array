//
// Created by garen_lee on 2025/4/7.
/**
  ******************************************************************************
  * @file           : L16_threeSumClosest.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/7
  ******************************************************************************
  */
//

#include "L16_threeSumClosest.h"

int L16_threeSumClosest::threeSumClosest(vector<int> &nums, int target) {
    sort(nums.begin(), nums.end());
    int best = 1e7;
    int n = nums.size();
    // 根据差值的绝对值来更新答案
    auto update = [&](int cur) {
        if (abs(cur - target) < abs(best - target)) {
            best = cur;
        }
    };
    // 枚举 a
    for (int i = 0; i < n; ++i) {
        // 需要和上一次枚举的数不相同
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        // 使用双指针枚举 b 和 c
        int j = i + 1, k = n - 1;
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == target) {
                return target;
            } else if (sum > target) {
                update(sum);
                // 如果和大于 target，移动 c 对应的指针
                int k0 = k - 1;
                // 移动到下一个不相等的元素
                while (j < k0 && nums[k0] == nums[k]) {
                    --k0;
                }
                k = k0;
            } else {
                update(sum);
                // 如果和小于 target，移动 b 对应的指针
                int j0 = j + 1;
                // 移动到下一个不相等的元素
                while (j0 < k && nums[j0] == nums[j]) {
                    ++j0;
                }
                j = j0;
            }
        }
    }
    return best;
}

void L16_threeSumClosest::test() {
    vector<int>nums = {-1, 2, 1, -4};
    int target = 1;
    cout << threeSumClosest(nums, target) << endl;
    nums = {0, 0, 0};
    target = 1;
    cout << threeSumClosest(nums, target) << endl;
}