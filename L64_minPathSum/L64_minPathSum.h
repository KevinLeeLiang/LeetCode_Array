//
// Created by garen_lee on 2025/7/7.
/**
  ******************************************************************************
  * @file           : L64_minPathSum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/7
  ******************************************************************************
  */
//

#ifndef ARRAY_L64_MINPATHSUM_H
#define ARRAY_L64_MINPATHSUM_H

#include "util.h"
class L64_minPathSum : public LeetcodeArray {
private:
    int minPathSum(vector<vector<int>>& grid);
public:
    L64_minPathSum() {}
    void test();
};


#endif //ARRAY_L64_MINPATHSUM_H
