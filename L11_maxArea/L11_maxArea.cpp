//
// Created by garen_lee on 2025/4/1.
/**
  ******************************************************************************
  * @file           : L11_maxArea.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/1
  ******************************************************************************
  */
//

#include "L11_maxArea.h"

int L11_maxArea::maxArea(vector<int> &height) {
    int l = 0, r = height.size() - 1, res = 0;
    while (l < r) {
        int area = min(height[l], height[r]) * (r - l);
        res = max(res, area);
        if (height[l] < height[r]) {
            l++;
        } else {
            r--;
        }
    }
    return res;
}

void L11_maxArea::test() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height) << endl;
    height = {1, 1};
    cout << maxArea(height) << endl;
}