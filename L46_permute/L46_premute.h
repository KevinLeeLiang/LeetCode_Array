//
// Created by garen_lee on 2025/5/26.
/**
  ******************************************************************************
  * @file           : L46_premute.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/26
  ******************************************************************************
  */
//

#ifndef ARRAY_L46_PREMUTE_H
#define ARRAY_L46_PREMUTE_H

#include "util.h"
class L46_premute : public LeetcodeArray {
private:
    vector<vector<int>> permute(vector<int>& nums);
    void backtrack(vector<vector<int>>& res, vector<int>& output, int first, int len);
public:
    L46_premute() {}
    void test();
};


#endif //ARRAY_L46_PREMUTE_H
