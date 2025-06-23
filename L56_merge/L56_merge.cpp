//
// Created by garen_lee on 2025/6/23.
/**
  ******************************************************************************
  * @file           : L56_merge.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/23
  ******************************************************************************
  */
//

#include "L56_merge.h"
static bool cmp1(vector<int> a, vector<int> b) { //int为数组数据类型
    return a[0]<b[0];//降序排列
//return a<b;//默认的升序排列
}

vector<vector<int>> L56_merge::merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), cmp1);
    vector<vector<int>>res;
    int start = intervals[0][0];
    int end = intervals[0][1];
    if (intervals.size() == 1)
        res.push_back({start, end});
    for (int i = 1; i < intervals.size(); ++i) {
        auto interval = intervals[i];
        if (end < interval[0]) {
            res.push_back({start, end});
            start = interval[0];
            end = interval[1];
        } else if (end >= interval[1]) {

        } else {
            end = interval[1];
        }
        if (i == intervals.size() - 1) {
            res.push_back({start, end});
        }
    }
    return res;
}

void L56_merge::test() {
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> res = merge(intervals);
    print_vector_vector( res);
    intervals = {{1,4},{4,5}};
    res = merge(intervals);
    print_vector_vector( res);
}