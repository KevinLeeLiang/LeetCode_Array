//
// Created by garen-lee on 2025/6/2.
/**
  ******************************************************************************
  * @file           : L47_permuteUnique.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/2
  ******************************************************************************
  */
//

#include "L47_permuteUnique.h"

void L47_permuteUnique::backTrack(vector<int> &nums, vector<int> &vis, vector<vector<int>> &res, int index, vector<int> &perm) {
    if (index == nums.size()) {
        res.push_back(perm);
        return;
    }
    for (int i = 0; i < (int)nums.size(); i++) {
        if (vis[i] == 1) continue;
        if (i > 0 && nums[i] == nums[i - 1] && vis[i - 1] == 0) continue;
        perm.push_back(nums[i]);
        vis[i] = 1;
        backTrack(nums, vis, res, index + 1, perm);
        vis[i] = 0;
        perm.pop_back();
    }
}

vector<vector<int>> L47_permuteUnique::permuteUnique(vector<int> &nums) {
    vector<int>vis;
    vector<vector<int>> res;
    vis.resize(nums.size(), 0);
    vector<int>perm;
    sort (nums.begin(), nums.end());
    backTrack(nums, vis, res, 0, perm);
    return res;
}

void L47_permuteUnique::test() {
    vector<int> nums = {1, 1, 2};
    vector<vector<int>> result = permuteUnique(nums);
    print_vector_vector(result);
    nums = {1, 2, 3};
    result = permuteUnique(nums);
    print_vector_vector(result);
}