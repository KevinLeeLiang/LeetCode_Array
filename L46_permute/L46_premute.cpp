//
// Created by garen_lee on 2025/5/26.
/**
  ******************************************************************************
  * @file           : L46_premute.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/26
  ******************************************************************************
  */
//

#include "L46_premute.h"

void L46_premute::backtrack(vector<vector<int>>& res, vector<int>& output, int first, int len){
    // 所有数都填完了
    if (first == len) {
        res.emplace_back(output);
        return;
    }
    for (int i = first; i < len; ++i) {
        // 动态维护数组
        swap(output[i], output[first]);
        // 继续递归填下一个数
        backtrack(res, output, first + 1, len);
        // 撤销操作
        swap(output[i], output[first]);
    }
}

vector<vector<int>> L46_premute::permute(vector<int>& nums) {
    vector<vector<int> > res;
    backtrack(res, nums, 0, (int)nums.size());
    return res;
}

void L46_premute::test() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> res = permute(nums);
    print_vector_vector(res);
    cout << "-------------" << endl;
    nums = {0,1};
    res = permute(nums);
    print_vector_vector(res);
    cout << "-------------" << endl;
    nums = {1};
    res = permute(nums);
    print_vector_vector(res);
    cout << "-------------" << endl;
}