//
// Created by garen_lee on 2025/7/21.
/**
  ******************************************************************************
  * @file           : L68_fullJustify.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/21
  ******************************************************************************
  */
//

#ifndef ARRAY_L68_FULLJUSTIFY_H
#define ARRAY_L68_FULLJUSTIFY_H

#include "util.h"
class L68_fullJustify : public LeetcodeArray {
private:
    vector<string> fullJustify(vector<string> &words, int maxWidth);
    string join(vector<string> &words, int left, int right, string sep);
    string blank(int n);
public:
    L68_fullJustify() {}
    void test();
};


#endif //ARRAY_L68_FULLJUSTIFY_H
