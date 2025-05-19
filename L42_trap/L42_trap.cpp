//
// Created by garen_lee on 2025/5/19.
/**
  ******************************************************************************
  * @file           : L42_trap.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/19
  ******************************************************************************
  */
//

#include "L42_trap.h"

int L42_trap::trap(vector<int> &height) {
    int n = height.size();
    if (n < 3) {
        return 0;
    }
    vector<int> left_max(n, 0), right_max(n, 0);
    left_max[0] = height[0];
    for (int i = 1; i < n; i++) {
        left_max[i] = max(left_max[i - 1], height[i]);
    }
    right_max[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        right_max[i] = max(right_max[i + 1], height[i]);
    }
    int ans = 0;
    for (int i = 1; i < n - 1; i++) {
        ans += min(left_max[i], right_max[i]) - height[i];
    }
    return ans;
}

void L42_trap::test() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trap(height) << endl;
    height = {4,2,0,3,2,5};
    cout << trap(height) << endl;
}