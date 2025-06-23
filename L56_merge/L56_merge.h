//
// Created by garen_lee on 2025/6/23.
/**
  ******************************************************************************
  * @file           : L56_merge.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/23
  ******************************************************************************
  */
//

#ifndef ARRAY_L56_MERGE_H
#define ARRAY_L56_MERGE_H

#include "util.h"
class L56_merge : public LeetcodeArray {
private:
    vector<vector<int>> merge(vector<vector<int>>& intervals);
public:
    L56_merge() {}
    void test();
};


#endif //ARRAY_L56_MERGE_H
