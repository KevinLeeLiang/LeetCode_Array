//
// Created by garen_lee on 2025/5/19.
/**
  ******************************************************************************
  * @file           : L42_trap.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/19
  ******************************************************************************
  */
//

#ifndef ARRAY_L42_TRAP_H
#define ARRAY_L42_TRAP_H

#include "util.h"
class L42_trap : public LeetcodeArray {
private:
    int trap(vector<int> &height);
public:
    L42_trap() {}
    void test();
};


#endif //ARRAY_L42_TRAP_H
