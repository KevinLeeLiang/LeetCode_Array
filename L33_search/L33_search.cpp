//
// Created by garen_lee on 2025/4/21.
/**
  ******************************************************************************
  * @file           : L33_search.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/21
  ******************************************************************************
  */
//

#include "L33_search.h"

int L33_search::search(vector<int> &nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < nums[right]) {
            if (nums[mid] < target && target <= nums[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        } else {
            if (nums[left] <= target && target < nums[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
    }
    return -1;
}

void L33_search::test() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    cout << search(nums, 0) << endl;
    nums = {4, 5, 6, 7, 0, 1, 2};
    cout << search(nums, 3) << endl;
    nums = {1};
    cout << search(nums, 0) << endl;
    nums = {3,5,1};
    cout << search(nums, 3) << endl;
}