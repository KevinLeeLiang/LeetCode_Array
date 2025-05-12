//
// Created by garen_lee on 2025/5/12.
/**
  ******************************************************************************
  * @file           : L39_combinationSum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/12
  ******************************************************************************
  */
//

#ifndef ARRAY_L39_COMBINATIONSUM_H
#define ARRAY_L39_COMBINATIONSUM_H

#include "util.h"
class L39_combinationSum : public LeetcodeArray {
private:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target);
    void combinationSumCore(vector<int> &candidates, int target, int start, vector<int> &path, vector<vector<int>> &result);
public:
    L39_combinationSum() {}
    void test();
};


#endif //ARRAY_L39_COMBINATIONSUM_H
