//
// Created by garen_lee on 2025/6/23.
/**
  ******************************************************************************
  * @file           : L55_canJump.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/23
  ******************************************************************************
  */
//

#ifndef ARRAY_L55_CANJUMP_H
#define ARRAY_L55_CANJUMP_H

#include "util.h"
class L55_canJump : public LeetcodeArray {
private:
    bool canJump(vector<int> &nums);
public:
    L55_canJump() {}
    void test();
};


#endif //ARRAY_L55_CANJUMP_H
