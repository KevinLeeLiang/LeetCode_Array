//
// Created by garen_lee on 2025/5/12.
/**
  ******************************************************************************
  * @file           : L40_combinationSum2.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/12
  ******************************************************************************
  */
//

#ifndef ARRAY_L40_COMBINATIONSUM2_H
#define ARRAY_L40_COMBINATIONSUM2_H

#include "util.h"
class L40_combinationSum2 : public LeetcodeArray {
private:
    vector<pair<int, int>> freq;
    vector<vector<int>> ans;
    vector<int> sequence;
    void dfs(int pos, int rest);
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target);
public:
    L40_combinationSum2() {}
    void test();
};


#endif //ARRAY_L40_COMBINATIONSUM2_H
