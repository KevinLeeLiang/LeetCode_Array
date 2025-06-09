//
// Created by garen_lee on 2025/6/9.
/**
  ******************************************************************************
  * @file           : L51_solveNQueens.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/9
  ******************************************************************************
  */
//

#include "L51_solveNQueens.h"
vector<string> L51_solveNQueens::generateBoard(vector<int> &queens, int n) {
    auto board = vector<string>();
    for (int i = 0; i < n; i++) {
        string row = string(n, '.');
        row[queens[i]] = 'Q';
        board.push_back(row);
    }
    return board;
}
void L51_solveNQueens::backtrack(vector<vector<string>> &solutions, vector<int> &queens, int n, int row, unordered_set<int> &columns, unordered_set<int> &diagonals1, unordered_set<int> &diagonals2) {
    if (row == n) {
        vector<string> board = generateBoard(queens, n);
        solutions.push_back(board);
    } else {
        for (int i = 0; i < n; i++) {
            if (columns.find(i) != columns.end()) {
                continue;
            }
            int diagonal1 = row - i;
            if (diagonals1.find(diagonal1) != diagonals1.end()) {
                continue;
            }
            int diagonal2 = row + i;
            if (diagonals2.find(diagonal2) != diagonals2.end()) {
                continue;
            }
            queens[row] = i;
            columns.insert(i);
            diagonals1.insert(diagonal1);
            diagonals2.insert(diagonal2);
            backtrack(solutions, queens, n, row + 1, columns, diagonals1, diagonals2);
            queens[row] = -1;
            columns.erase(i);
            diagonals1.erase(diagonal1);
            diagonals2.erase(diagonal2);
        }
    }
}

vector<vector<string>> L51_solveNQueens::solveNQueens(int n) {
    auto solutions = vector<vector<string>>();
    auto queens = vector<int>(n, -1);
    auto columns = unordered_set<int>();
    auto diagonals1 = unordered_set<int>();
    auto diagonals2 = unordered_set<int>();
    backtrack(solutions, queens, n, 0, columns, diagonals1, diagonals2);
    return solutions;
}

void L51_solveNQueens::test() {
    vector<vector<string>> result = solveNQueens(4);
    print_vector_vector(result);
    result  = solveNQueens(1);
    print_vector_vector(result);
}