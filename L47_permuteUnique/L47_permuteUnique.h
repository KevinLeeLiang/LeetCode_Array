//
// Created by garen-lee on 2025/6/2.
/**
  ******************************************************************************
  * @file           : L47_permuteUnique.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/2
  ******************************************************************************
  */
//

#ifndef ARRAY_L47_PERMUTEUNIQUE_H
#define ARRAY_L47_PERMUTEUNIQUE_H

#include "util.h"
class L47_permuteUnique : public LeetcodeArray {
private:
    vector<vector<int>> permuteUnique(vector<int>& nums);
    void backTrack(vector<int> &nums, vector<int> &vis, vector<vector<int>> &res, int index, vector<int>&perm);
public:
    L47_permuteUnique() {}
    void test();
};


#endif //ARRAY_L47_PERMUTEUNIQUE_H
