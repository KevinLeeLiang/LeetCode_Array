//
// Created by garen_lee on 2025/4/7.
/**
  ******************************************************************************
  * @file           : L16_threeSumClosest.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/7
  ******************************************************************************
  */
//

#ifndef ARRAY_L16_THREESUMCLOSEST_H
#define ARRAY_L16_THREESUMCLOSEST_H

#include "util.h"
class L16_threeSumClosest : public LeetcodeArray {
private:
    int threeSumClosest(vector<int>& nums, int target);
public:
    L16_threeSumClosest() {}
    void test();
};


#endif //ARRAY_L16_THREESUMCLOSEST_H
