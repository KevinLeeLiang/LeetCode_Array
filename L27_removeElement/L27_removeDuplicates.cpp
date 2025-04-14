//
// Created by garen_lee on 2025/4/14.
/**
  ******************************************************************************
  * @file           : L27_removeDuplicates.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/14
  ******************************************************************************
  */
//

#include "L27_removeDuplicates.h"

int L27_removeDuplicates::removeElement(vector<int> &nums, int val) {
    int n = nums.size();
    int left = 0;
    for (int right = 0; right < n; right++) {
        if (nums[right] != val) {
            nums[left] = nums[right];
            left++;
        }
    }
    return left;
}

void L27_removeDuplicates::test(){
    vector<int> nums = {3,2,2,3};
    int val = 3;
    int result = removeElement(nums, val);
    cout << "result: " << result << endl;
    nums = {0,1,2,2,3,0,4,2};
    val = 2;
    result = removeElement(nums, val);
    cout << "result: " << result << endl;
}