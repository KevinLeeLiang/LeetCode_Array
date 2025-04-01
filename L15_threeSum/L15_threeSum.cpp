//
// Created by garen_lee on 2025/4/1.
/**
  ******************************************************************************
  * @file           : L15_threeSum.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/1
  ******************************************************************************
  */
//

#include "L15_threeSum.h"

vector<vector<int>> L15_threeSum::threeSum(vector<int> &nums) {
    vector<vector<int>> result;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) {
            break;
        }
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        int j = i + 1, k = n - 1;
        while (j < k) {
            if (j > i + 1 && nums[j] == nums[j - 1]){
                j++;
                continue;
            }
            if (k < n - 1 && nums[k] == nums[k + 1]){
                k--;
                continue;
            }
            if (nums[i] + nums[j] + nums[k] > 0) {
                k--;
            } else if (nums[i] + nums[j] + nums[k] < 0) {
                j++;
            } else {
                result.push_back({nums[i], nums[j], nums[k]});
                j++;
            }

        }
    }
    return result;
}

void L15_threeSum::test() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);
    print_vector_vector(result);
    nums = {0, 1, 1};
    result = threeSum(nums);
    print_vector_vector(result);
    nums = {0, 0, 0};
    result = threeSum(nums);
    print_vector_vector(result);
}