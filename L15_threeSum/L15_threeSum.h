//
// Created by garen_lee on 2025/4/1.
/**
  ******************************************************************************
  * @file           : L15_threeSum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/1
  ******************************************************************************
  */
//

#ifndef ARRAY_L15_THREESUM_H
#define ARRAY_L15_THREESUM_H

#include "util.h"
class L15_threeSum : public LeetcodeArray {
private:
    vector<vector<int>> threeSum(vector<int> &nums);
public:
    L15_threeSum() {}
    void test();
};


#endif //ARRAY_L15_THREESUM_H
