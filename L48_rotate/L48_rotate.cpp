//
// Created by garen-lee on 2025/6/2.
/**
  ******************************************************************************
  * @file           : L48_rotate.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/2
  ******************************************************************************
  */
//

#include "L48_rotate.h"

void L48_rotate::rotate(vector<vector<int>> &matrix) {
    int n = matrix.size();
    // 1. 转置矩阵（行列互换）
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {  // j从i开始，避免重复交换
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // 2. 水平翻转每一行（reverse每行）
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

void L48_rotate::test() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(matrix);
    print_vector_vector(matrix);
    matrix = {{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
    rotate(matrix);
    print_vector_vector(matrix);
}