//
// Created by garen_lee on 2025/6/30.
/**
  ******************************************************************************
  * @file           : L57_insert.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/30
  ******************************************************************************
  */
//

#include "L57_insert.h"

vector<vector<int>> L57_insert::insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    int left = newInterval[0], right = newInterval[1];
    bool placed = false;
    vector<vector<int>>ans;
    for (const auto& interval : intervals) {
        if (interval[0] > right) {
            if (!placed) {
                ans.push_back({left, right});
                placed = true;
            }
            ans.push_back(interval);
        } else if (interval[1] < left) {
            ans.push_back(interval);
        } else {
            left = min(left, interval[0]);
            right = max(right, interval[1]);
        }
    }
    if (!placed) {
        ans.push_back({left, right});
    }
    return ans;
}

void L57_insert::test() {
    vector<vector<int>> intervals = {{1, 3}, {6, 9}};
    vector<int> newInterval = {2, 5};
    vector<vector<int>> result = insert(intervals, newInterval);
    print_vector_vector( result);
    intervals = {{1, 2}, {3, 5}, {6, 7}, {8, 10}, {12, 16}};
    newInterval = {4, 8};
    result = insert(intervals, newInterval);
    print_vector_vector(result);
}