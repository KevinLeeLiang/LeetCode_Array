//
// Created by garen_lee on 2025/6/9.
/**
  ******************************************************************************
  * @file           : L51_solveNQueens.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/9
  ******************************************************************************
  */
//

#ifndef ARRAY_L51_SOLVENQUEENS_H
#define ARRAY_L51_SOLVENQUEENS_H

#include "util.h"
class L51_solveNQueens : public LeetcodeArray {
private:
    vector<vector<string>> solveNQueens(int n);
    vector<string> generateBoard(vector<int> &queens, int n);
    void backtrack(vector<vector<string>> &solutions, vector<int> &queens, int n, int row, unordered_set<int> &columns, unordered_set<int> &diagonals1, unordered_set<int> &diagonals2);
public:
    L51_solveNQueens() {}
    void test();
};


#endif //ARRAY_L51_SOLVENQUEENS_H
