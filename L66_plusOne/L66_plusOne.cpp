//
// Created by garen_lee on 2025/7/14.
/**
  ******************************************************************************
  * @file           : L66_plusOne.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/14
  ******************************************************************************
  */
//

#include "L66_plusOne.h"

vector<int> L66_plusOne::plusOne(vector<int>& digits) {
    int n = digits.size();
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] != 9) {
            ++digits[i];
            for (int j = i + 1; j < n; j++) {
                digits[j] = 0;
            }
            return digits;
        }
    }
    vector<int> ans(n + 1, 0);
    ans[0] = 1;
    return ans;
}

void L66_plusOne::test() {
    vector<int> digits = {1,2,3};
    vector<int> res = plusOne(digits);
    print_vector(res);
    digits = {4,3,2,1};
    res = plusOne(digits);
    print_vector(res);
    digits = {9};
    res = plusOne(digits);
    print_vector(res);
    digits = {8,9,9,9};
    res = plusOne(digits);
    print_vector(res);
}