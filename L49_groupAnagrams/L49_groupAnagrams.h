//
// Created by garen_lee on 2025/6/9.
/**
  ******************************************************************************
  * @file           : L49_groupAnagrams.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/9
  ******************************************************************************
  */
//

#ifndef ARRAY_L49_GROUPANAGRAMS_H
#define ARRAY_L49_GROUPANAGRAMS_H

#include "util.h"
class L49_groupAnagrams : public LeetcodeArray {
private:
    vector<vector<string>> groupAnagrams(vector<string>& strs);
public:
    L49_groupAnagrams() {}
    void test();
};


#endif //ARRAY_L49_GROUPANAGRAMS_H
