//
// Created by garen_lee on 2025/4/21.
/**
  ******************************************************************************
  * @file           : L31_nextPermutation.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/21
  ******************************************************************************
  */
//

#ifndef ARRAY_L31_NEXTPERMUTATION_H
#define ARRAY_L31_NEXTPERMUTATION_H

#include "util.h"
class L31_nextPermutation : public LeetcodeArray {
private:
    void nextPermutation(vector<int> &nums);
public:
    L31_nextPermutation() {}
    void test();
};


#endif //ARRAY_L31_NEXTPERMUTATION_H
