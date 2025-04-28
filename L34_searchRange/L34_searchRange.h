//
// Created by garen_lee on 2025/4/28.
/**
  ******************************************************************************
  * @file           : L34_searchRange.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/28
  ******************************************************************************
  */
//

#ifndef ARRAY_L34_SEARCHRANGE_H
#define ARRAY_L34_SEARCHRANGE_H

#include "util.h"
class L34_searchRange : public LeetcodeArray {
private:
    vector<int> searchRange(vector<int>& nums, int target);
public:
    L34_searchRange() {}
    void test();
};


#endif //ARRAY_L34_SEARCHRANGE_H
