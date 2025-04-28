//
// Created by garen_lee on 2025/4/28.
/**
  ******************************************************************************
  * @file           : L34_searchRange.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/28
  ******************************************************************************
  */
//

#include "L34_searchRange.h"

vector<int> L34_searchRange::searchRange(vector<int> &nums, int target) {
    if (nums.empty()) {
        return { -1, -1 };
    }
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] < target) {
            left = mid + 1;
        } else if (nums[mid] > target) {
            right = mid - 1;
        } else {
            int left_index = mid, right_index = mid;
            while (left_index >= 0 && nums[left_index] == target) {
                left_index--;
            }
            while (right_index < nums.size() && nums[right_index] == target) {
                right_index++;
            }
            left = left_index + 1;
            right = right_index - 1;
            return { left, right };
        }
    }
    return { -1, -1 };
}

void L34_searchRange::test() {
    vector<int>nums = {5,7,7,8,8,10};
    vector<int>result = searchRange(nums, 8);
    cout << "result: " << result[0] << " " << result[1] << endl;
    nums = {5,7,7,8,8,10};
    result = searchRange(nums, 6);
    cout << "result: " << result[0] << " " << result[1] << endl;
    nums = {};
    result = searchRange(nums, 0);
    cout << "result: " << result[0] << " " << result[1] << endl;
    nums = {2,2};
    result = searchRange(nums, 3);
    cout << "result: " << result[0] << " " << result[1] << endl;
}