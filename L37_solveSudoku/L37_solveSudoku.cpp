//
// Created by garen-lee on 2025/5/5.
/**
  ******************************************************************************
  * @file           : L37_solveSudoku.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/5
  ******************************************************************************
  */
//

#include "L37_solveSudoku.h"

void L37_solveSudoku::dfs(vector<vector<char>> &board, int pos) {
    if (pos == spaces.size()) {
        valid = true;
        return;
    }
    auto [i, j] = spaces[pos];
    for (int digit = 0; digit < 9 && !valid; ++digit) {
        if (!line[i][digit] && !column[j][digit] && !block[i / 3][j / 3][digit]) {
            line[i][digit] = column[j][digit] = block[i / 3][j / 3][digit] = true;
            board[i][j] = digit + '0' + 1;
            dfs(board, pos + 1);
            line[i][digit] = column[j][digit] = block[i / 3][j / 3][digit] = false;
        }
    }
}

void L37_solveSudoku::solveSudoku(vector<vector<char>> &board) {
    memset(line, false, sizeof(line));
    memset(column, false, sizeof(column));
    memset(block, false, sizeof(block));
    valid = false;

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (board[i][j] == '.') {
                spaces.emplace_back(i, j);
            }
            else {
                int digit = board[i][j] - '0' - 1;
                line[i][digit] = column[j][digit] = block[i / 3][j / 3][digit] = true;
            }
        }
    }

    dfs(board, 0);
}

void L37_solveSudoku::test() {
    vector<vector<char>> board = {
            {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
            {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
            {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
            {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
            {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
            {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
            {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
            {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
            {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };
    solveSudoku(board);
    print_vector_vector(board);
    board = {
            {'8', '3', '.', '.', '7', '.', '.', '.', '.'},
            {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
            {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
            {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
            {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
            {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
            {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
            {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
            {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };
    solveSudoku(board);
    print_vector_vector(board);
}