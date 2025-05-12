//
// Created by garen_lee on 2025/5/12.
/**
  ******************************************************************************
  * @file           : L39_combinationSum.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/12
  ******************************************************************************
  */
//

#include "L39_combinationSum.h"

void L39_combinationSum::combinationSumCore(vector<int> &candidates, int target, int start, vector<int> &path, vector<vector<int>> &result) {
    if (target == 0) {
        result.push_back(path);
        return;
    }
    for (int i = start; i < candidates.size(); i++) {
        if (target - candidates[i] < 0)
            break;
        path.push_back(candidates[i]);
        combinationSumCore(candidates, target - candidates[i], i, path, result);
        path.pop_back();
    }
}

vector<vector<int>> L39_combinationSum::combinationSum(vector<int> &candidates, int target) {
    vector<vector<int>> result;
    vector<int> path;
    combinationSumCore(candidates, target, 0, path, result);
    return result;
}

void L39_combinationSum::test() {
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> result = combinationSum(candidates, target);
    print_vector_vector(result);
    candidates = {2, 3, 5};
    target = 8;
    result = combinationSum(candidates, target);
    print_vector_vector(result);
    candidates = {2};
    target = 1;
    result = combinationSum(candidates, target);
    print_vector_vector(result);
}