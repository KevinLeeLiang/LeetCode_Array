//
// Created by garen-lee on 2025/5/5.
/**
  ******************************************************************************
  * @file           : L37_solveSudoku.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/5
  ******************************************************************************
  */
//

#ifndef ARRAY_L37_SOLVESUDOKU_H
#define ARRAY_L37_SOLVESUDOKU_H

#include "util.h"
class L37_solveSudoku : public LeetcodeArray {
private:
    void solveSudoku(vector<vector<char>>& board);
private:
    bool line[9][9];
    bool column[9][9];
    bool block[3][3][9];
    bool valid;
    vector<pair<int, int>> spaces;
    void dfs(vector<vector<char>>& board, int pos);
public:
    L37_solveSudoku() {};
    void test();
};


#endif //ARRAY_L37_SOLVESUDOKU_H
