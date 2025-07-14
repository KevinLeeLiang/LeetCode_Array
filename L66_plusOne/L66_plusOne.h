//
// Created by garen_lee on 2025/7/14.
/**
  ******************************************************************************
  * @file           : L66_plusOne.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/14
  ******************************************************************************
  */
//

#ifndef ARRAY_L66_PLUSONE_H
#define ARRAY_L66_PLUSONE_H

#include "util.h"
class L66_plusOne : public LeetcodeArray {
private:
    vector<int> plusOne(vector<int> &digits);
public:
    L66_plusOne() {}
    void test();
};


#endif //ARRAY_L66_PLUSONE_H
