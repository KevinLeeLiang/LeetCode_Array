//
// Created by garen-lee on 2025/3/29.
/**
  ******************************************************************************
  * @file           : L1_twoSum.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/29
  ******************************************************************************
  */
//

#ifndef ARRAY_L1_TWOSUM_H
#define ARRAY_L1_TWOSUM_H

#include "util.h"
class L1_twoSum : public LeetcodeArray {
private:
    vector<int> twoSum(vector<int> &nums, int target);
public:
    L1_twoSum() {}
    void test();
};


#endif //ARRAY_L1_TWOSUM_H
