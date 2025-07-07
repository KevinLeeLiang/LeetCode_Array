//
// Created by garen_lee on 2025/7/7.
/**
  ******************************************************************************
  * @file           : L63_uniquePathsWithObstacles.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/7
  ******************************************************************************
  */
//

#include "L63_uniquePathsWithObstacles.h"

int L63_uniquePathsWithObstacles::uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
    int n = obstacleGrid.size();
    int m = obstacleGrid[0].size();
    vector<int>f(m);
    f[0] = obstacleGrid[0][0] == 1 ? 0 : 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (obstacleGrid[i][j] == 1) {
                f[j] = 0;
                continue;
            }
            if (j - 1 >= 0 && obstacleGrid[i][j - 1] == 0) {
                f[j] += f[j - 1];
            }
        }
    }
    return f.back();
}

void L63_uniquePathsWithObstacles::test() {
    vector<vector<int>> obstacleGrid = {{0, 0, 0},
                                        {0, 1, 0},
                                        {0, 0, 0}};
    cout << uniquePathsWithObstacles(obstacleGrid) << endl;
    obstacleGrid = {{0, 1},
                   {0, 0}};
    cout << uniquePathsWithObstacles(obstacleGrid) << endl;
}