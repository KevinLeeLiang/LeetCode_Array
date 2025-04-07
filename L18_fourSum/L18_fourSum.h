//
// Created by garen_lee on 2025/4/7.
/**
  ******************************************************************************
  * @file           : L18_fourSum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/7
  ******************************************************************************
  */
//

#ifndef ARRAY_L18_FOURSUM_H
#define ARRAY_L18_FOURSUM_H

#include "util.h"
class L18_fourSum : public LeetcodeArray {
private:
    vector<vector<int>> fourSum(vector<int> &nums, int target);
public:
    L18_fourSum() {}
    void test();
};


#endif //ARRAY_L18_FOURSUM_H
