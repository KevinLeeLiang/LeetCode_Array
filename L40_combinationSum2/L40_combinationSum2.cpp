//
// Created by garen_lee on 2025/5/12.
/**
  ******************************************************************************
  * @file           : L40_combinationSum2.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/12
  ******************************************************************************
  */
//

#include "L40_combinationSum2.h"

void L40_combinationSum2::dfs(int pos, int rest) {
    if (rest == 0) {
        ans.push_back(sequence);
        return;
    }
    if (pos == freq.size() || rest < freq[pos].first) {
        return;
    }

    dfs(pos + 1, rest);

    int most = min(rest / freq[pos].first, freq[pos].second);
    for (int i = 1; i <= most; ++i) {
        sequence.push_back(freq[pos].first);
        dfs(pos + 1, rest - i * freq[pos].first);
    }
    for (int i = 1; i <= most; ++i) {
        sequence.pop_back();
    }
}

vector<vector<int>> L40_combinationSum2::combinationSum2(vector<int> &candidates, int target) {
    sort(candidates.begin(), candidates.end());
    for (int num: candidates) {
        if (freq.empty() || num != freq.back().first) {
            freq.emplace_back(num, 1);
        } else {
            ++freq.back().second;
        }
    }
    dfs(0, target);
    return ans;
}

void L40_combinationSum2::test() {
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;
    vector<vector<int>>res = combinationSum2(candidates, target);
    print_vector_vector(res);
    candidates = {2, 5, 2, 1, 2};
    target = 5;
    res = combinationSum2(candidates, target);
    print_vector_vector(res);

}