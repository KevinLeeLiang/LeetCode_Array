//
// Created by garen-lee on 2025/5/5.
/**
  ******************************************************************************
  * @file           : L36_isValidSudoku.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/5
  ******************************************************************************
  */
//

#ifndef ARRAY_L36_ISVALIDSUDOKU_H
#define ARRAY_L36_ISVALIDSUDOKU_H

#include "util.h"
class L36_isValidSudoku : public LeetcodeArray {
private:
    bool isValidSudoku(vector<vector<char>>& board);
public:
    L36_isValidSudoku() {}
    void test();
};


#endif //ARRAY_L36_ISVALIDSUDOKU_H
