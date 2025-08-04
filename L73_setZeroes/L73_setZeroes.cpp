//
// Created by garen_lee on 2025/8/4.
/**
  ******************************************************************************
  * @file           : L73_setZeroes.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/4
  ******************************************************************************
  */
//

#include "L73_setZeroes.h"

void L73_setZeroes::setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    bool row0_has_zero = false, col0_has_zero = false;
    for (int j = 0; j < n; j++) {
        if (matrix[0][j] == 0) {
            row0_has_zero = true;
            break;
        }
    }
    for (int i = 0; i < m; i++) {
        if (matrix[i][0] == 0) {
            col0_has_zero = true;
        }
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = matrix[0][j] = 0;
            }
        }
    }
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }
    if (row0_has_zero) {
        for (int j = 0; j < n; j++) {
            matrix[0][j] = 0;
        }
    }
    if (col0_has_zero) {
        for (int i = 0; i < m; i++) {
            matrix[i][0] = 0;
        }
    }
}

void L73_setZeroes::test() {
    vector<vector<int>> matrix = {{1,1,1}, {1,0,1}, {1,1,1}};
    setZeroes(matrix);
    print_vector_vector(matrix);
    matrix = {{0,1,2,0}, {3,4,5,2}, {1,3,1,5}};
    setZeroes(matrix);
    print_vector_vector( matrix);
}