//
// Created by garen_lee on 2025/6/30.
/**
  ******************************************************************************
  * @file           : L57_insert.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/30
  ******************************************************************************
  */
//

#ifndef ARRAY_L57_INSERT_H
#define ARRAY_L57_INSERT_H

#include "util.h"
class L57_insert : public  LeetcodeArray {
private:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval);
public:
    L57_insert() {}
    void test();
};


#endif //ARRAY_L57_INSERT_H
