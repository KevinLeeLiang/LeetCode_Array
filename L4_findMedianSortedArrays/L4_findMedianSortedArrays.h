//
// Created by garen-lee on 2025/3/29.
/**
  ******************************************************************************
  * @file           : L4_findMedianSortedArrays.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/29
  ******************************************************************************
  */
//

#ifndef ARRAY_L4_FINDMEDIANSORTEDARRAYS_H
#define ARRAY_L4_FINDMEDIANSORTEDARRAYS_H

#include "util.h"
class L4_findMedianSortedArrays : public LeetcodeArray {
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
    int getKthElement(const vector<int>& nums1, const vector<int>& nums2, int k);
public:
    L4_findMedianSortedArrays() {}
    void test();
};


#endif //ARRAY_L4_FINDMEDIANSORTEDARRAYS_H
