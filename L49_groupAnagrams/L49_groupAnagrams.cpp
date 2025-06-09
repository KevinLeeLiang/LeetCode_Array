//
// Created by garen_lee on 2025/6/9.
/**
  ******************************************************************************
  * @file           : L49_groupAnagrams.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/9
  ******************************************************************************
  */
//

#include "L49_groupAnagrams.h"

vector<vector<string>> L49_groupAnagrams::groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>>map;
    vector<vector<string>>res;
    for (int i = 0; i < strs.size(); ++i) {
        auto str = strs[i];
        sort(str.begin(), str.end());
        if (map.find(str) == map.end()) {
            map[str] = vector<string>();
            map[str].push_back(strs[i]);
        } else {
            map[str].push_back(strs[i]);
        }
    }
    for (auto it = map.begin(); it != map.end(); ++it) {
        res.push_back(it->second);
    }
    return res;
}

void L49_groupAnagrams::test() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupAnagrams(strs);
    print_vector_vector(result);
    strs = {""};
    result = groupAnagrams(strs);
    print_vector_vector(result);
    strs = {"a"};
    result = groupAnagrams(strs);
    print_vector_vector(result);
}