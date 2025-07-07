//
// Created by garen_lee on 2025/7/7.
/**
  ******************************************************************************
  * @file           : L63_uniquePathsWithObstacles.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/7
  ******************************************************************************
  */
//

#ifndef ARRAY_L63_UNIQUEPATHSWITHOBSTACLES_H
#define ARRAY_L63_UNIQUEPATHSWITHOBSTACLES_H

#include "util.h"
class L63_uniquePathsWithObstacles : public LeetcodeArray {
private:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid);
public:
    L63_uniquePathsWithObstacles() {}
    void test();
};


#endif //ARRAY_L63_UNIQUEPATHSWITHOBSTACLES_H
