//
// Created by garen-lee on 2025/3/29.
/**
  ******************************************************************************
  * @file           : test_factory.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/29
  ******************************************************************************
  */
//

#ifndef ARRAY_TEST_FACTORY_H
#define ARRAY_TEST_FACTORY_H
#include <memory>
#include "L1_twoSum/L1_twoSum.h"
#include "L4_findMedianSortedArrays/L4_findMedianSortedArrays.h"

class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L1") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L1_twoSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L4") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L4_findMedianSortedArrays>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else {
            cout << "no solution" << endl;
        }
    }
public:
    test_factory(string title) {
        cout << "test " << title << endl;
        buildSolution(title);
    }
    void test() {
        solution_->test();
    }
    ~test_factory() {}

private:
    std::shared_ptr<LeetcodeArray> solution_;
};
#endif //ARRAY_TEST_FACTORY_H
