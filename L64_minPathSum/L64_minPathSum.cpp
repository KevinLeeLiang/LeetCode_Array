//
// Created by garen_lee on 2025/7/7.
/**
  ******************************************************************************
  * @file           : L64_minPathSum.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/7
  ******************************************************************************
  */
//

#include "L64_minPathSum.h"

int L64_minPathSum::minPathSum(vector<vector<int>> &grid) {
    if (grid.size() == 0 || grid[0].size() == 0) {
        return 0;
    }
    int rows = grid.size(), columns = grid[0].size();
    auto dp = vector < vector <int> > (rows, vector <int> (columns));
    dp[0][0] = grid[0][0];
    for (int i = 1; i < rows; i++) {
        dp[i][0] = dp[i - 1][0] + grid[i][0];
    }
    for (int j = 1; j < columns; j++) {
        dp[0][j] = dp[0][j - 1] + grid[0][j];
    }
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < columns; j++) {
            dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
        }
    }
    return dp[rows - 1][columns - 1];
}

void L64_minPathSum::test() {
    vector<vector<int>> grid = {{1, 3, 1},
                              {1, 5, 1},
                              {4, 2, 1}};
    cout << minPathSum(grid) << endl;
    grid = {{1, 2, 3},
            {4, 5, 6}};
    cout << minPathSum(grid) << endl;
}