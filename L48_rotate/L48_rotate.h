//
// Created by garen-lee on 2025/6/2.
/**
  ******************************************************************************
  * @file           : L48_rotate.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/2
  ******************************************************************************
  */
//

#ifndef ARRAY_L48_ROTATE_H
#define ARRAY_L48_ROTATE_H

#include "util.h"
class L48_rotate : public LeetcodeArray {
private:
    void rotate(vector<vector<int>>& matrix);
public:
    L48_rotate() {}
    void test();
};


#endif //ARRAY_L48_ROTATE_H
