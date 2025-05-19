//
// Created by garen_lee on 2025/5/19.
/**
  ******************************************************************************
  * @file           : L41_firstMissingPositive.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/19
  ******************************************************************************
  */
//

#ifndef ARRAY_L41_FIRSTMISSINGPOSITIVE_H
#define ARRAY_L41_FIRSTMISSINGPOSITIVE_H

#include "util.h"
class L41_firstMissingPositive : public LeetcodeArray {
private:
    int firstMissingPositive(vector<int>& nums);
public:
    L41_firstMissingPositive() {}
    void test();
};


#endif //ARRAY_L41_FIRSTMISSINGPOSITIVE_H
