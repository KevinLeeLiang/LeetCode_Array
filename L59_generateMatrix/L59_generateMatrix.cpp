//
// Created by garen_lee on 2025/6/30.
/**
  ******************************************************************************
  * @file           : L59_generateMatrix.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/30
  ******************************************************************************
  */
//

#include "L59_generateMatrix.h"

vector<vector<int>> L59_generateMatrix::generateMatrix(int n) {
    int maxNum = n * n;
    int curNum = 1;
    vector<vector<int>> matrix(n, vector<int>(n));
    int row = 0, column = 0;
    vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};  // 右下左上
    int directionIndex = 0;
    while (curNum <= maxNum) {
        matrix[row][column] = curNum;
        curNum++;
        int nextRow = row + directions[directionIndex][0], nextColumn = column + directions[directionIndex][1];
        if (nextRow < 0 || nextRow >= n || nextColumn < 0 || nextColumn >= n || matrix[nextRow][nextColumn] != 0) {
            directionIndex = (directionIndex + 1) % 4;  // 顺时针旋转至下一个方向
        }
        row = row + directions[directionIndex][0];
        column = column + directions[directionIndex][1];
    }
    return matrix;
}

void L59_generateMatrix::test() {
    vector<vector<int>> matrix = generateMatrix(3);
    print_vector_vector( matrix);
    matrix = generateMatrix(1);
    print_vector_vector( matrix);
}