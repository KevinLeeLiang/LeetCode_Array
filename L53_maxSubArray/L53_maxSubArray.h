//
// Created by garen_lee on 2025/6/16.
/**
  ******************************************************************************
  * @file           : L53_maxSubArray.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/16
  ******************************************************************************
  */
//

#ifndef ARRAY_L53_MAXSUBARRAY_H
#define ARRAY_L53_MAXSUBARRAY_H

#include "util.h"
class L53_maxSubArray : public LeetcodeArray {
private:
    int maxSubArray(vector<int>& nums);
public:
    L53_maxSubArray() {}
    void test();
};


#endif //ARRAY_L53_MAXSUBARRAY_H
