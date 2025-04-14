//
// Created by garen_lee on 2025/4/14.
/**
  ******************************************************************************
  * @file           : L26_removeDuplicates.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/14
  ******************************************************************************
  */
//

#include "L26_removeDuplicates.h"

int L26_removeDuplicates::removeDuplicates(vector<int> &nums){
    int n = nums.size();
    if (n == 0) {
        return 0;
    }
    int slow = 1, fast = 1;
    while (fast < n) {
        if (nums[fast] != nums[fast - 1]) {
            nums[slow] = nums[fast];
            slow++;
        }
        fast++;
    }
    return slow;
}

void L26_removeDuplicates::test()
{
    vector<int> nums = {1, 1, 2};
    int result = removeDuplicates(nums);
    cout << "result: " << result << endl;
    nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    result = removeDuplicates(nums);
    cout << "result: " << result << endl;
}