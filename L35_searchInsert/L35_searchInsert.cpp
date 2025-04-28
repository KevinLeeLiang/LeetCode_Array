//
// Created by garen_lee on 2025/4/28.
/**
  ******************************************************************************
  * @file           : L35_searchInsert.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/28
  ******************************************************************************
  */
//

#include "L35_searchInsert.h"

int L35_searchInsert::searchInsert(vector<int> &nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left;
}

void L35_searchInsert::test()
{
    vector<int> nums = {1, 3, 5, 6};
    cout << searchInsert(nums, 5) << endl;
    cout << searchInsert(nums, 2) << endl;
    cout << searchInsert(nums, 7) << endl;
}