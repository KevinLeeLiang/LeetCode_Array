//
// Created by garen_lee on 2025/4/21.
/**
  ******************************************************************************
  * @file           : L33_search.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/21
  ******************************************************************************
  */
//

#ifndef ARRAY_L33_SEARCH_H
#define ARRAY_L33_SEARCH_H

#include "util.h"
class L33_search : public LeetcodeArray {
private:
    int search(vector<int>& nums, int target);
public:
    L33_search() {}
    void test();
};


#endif //ARRAY_L33_SEARCH_H
