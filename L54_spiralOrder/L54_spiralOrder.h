//
// Created by garen_lee on 2025/6/16.
/**
  ******************************************************************************
  * @file           : L54_spiralOrder.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/16
  ******************************************************************************
  */
//

#ifndef ARRAY_L54_SPIRALORDER_H
#define ARRAY_L54_SPIRALORDER_H

#include "util.h"
class L54_spiralOrder : public LeetcodeArray {
private:
    vector<int> spiralOrder(vector<vector<int>>& matrix);
public:
    L54_spiralOrder() {}
    void test();
};


#endif //ARRAY_L54_SPIRALORDER_H
