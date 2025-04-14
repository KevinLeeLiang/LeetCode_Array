//
// Created by garen_lee on 2025/4/14.
/**
  ******************************************************************************
  * @file           : L27_removeDuplicates.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/14
  ******************************************************************************
  */
//

#ifndef ARRAY_L27_REMOVEDUPLICATES_H
#define ARRAY_L27_REMOVEDUPLICATES_H

#include "util.h"
class L27_removeDuplicates : public LeetcodeArray {
private:
    int removeElement(vector<int>& nums, int val);
public:
    L27_removeDuplicates() {}
    void test();
};


#endif //ARRAY_L27_REMOVEDUPLICATES_H
