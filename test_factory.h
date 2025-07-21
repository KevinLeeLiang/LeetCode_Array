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
#include "L11_maxArea/L11_maxArea.h"
#include "L15_threeSum/L15_threeSum.h"
#include "L16_threeSumClosest/L16_threeSumClosest.h"
#include "L18_fourSum/L18_fourSum.h"
#include "L26_removeDuplicates/L26_removeDuplicates.h"
#include "L27_removeElement/L27_removeDuplicates.h"
#include "L31_nextPermutation/L31_nextPermutation.h"
#include "L33_search/L33_search.h"
#include "L34_searchRange/L34_searchRange.h"
#include "L35_searchInsert/L35_searchInsert.h"
#include "L36_isValidSudoku/L36_isValidSudoku.h"
#include "L37_solveSudoku/L37_solveSudoku.h"
#include "L39_combinationSum/L39_combinationSum.h"
#include "L40_combinationSum2/L40_combinationSum2.h"
#include "L41_firstMissingPositive/L41_firstMissingPositive.h"
#include "L42_trap/L42_trap.h"
#include "L45_jump/L45_jump.h"
#include "L46_permute/L46_premute.h"
#include "L47_permuteUnique/L47_permuteUnique.h"
#include "L48_rotate/L48_rotate.h"
#include "L49_groupAnagrams/L49_groupAnagrams.h"
#include "L51_solveNQueens/L51_solveNQueens.h"
#include "L53_maxSubArray/L53_maxSubArray.h"
#include "L54_spiralOrder/L54_spiralOrder.h"
#include "L55_canJump/L55_canJump.h"
#include "L56_merge/L56_merge.h"
#include "L57_insert/L57_insert.h"
#include "L59_generateMatrix/L59_generateMatrix.h"
#include "L63_uniquePathsWithObstacles/L63_uniquePathsWithObstacles.h"
#include "L64_minPathSum/L64_minPathSum.h"
#include "L66_plusOne/L66_plusOne.h"
#include "L68_fullJustify/L68_fullJustify.h"

class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L1") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L1_twoSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L4") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L4_findMedianSortedArrays>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L11") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L11_maxArea>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L15") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L15_threeSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L16") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L16_threeSumClosest>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L18") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L18_fourSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L26") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L26_removeDuplicates>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L27") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L27_removeDuplicates>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L31") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L31_nextPermutation>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L33") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L33_search>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L34") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L34_searchRange>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L35") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L35_searchInsert>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L36") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L36_isValidSudoku>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L37") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L37_solveSudoku>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L39") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L39_combinationSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L40") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L40_combinationSum2>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L41") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L41_firstMissingPositive>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L42") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L42_trap>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L45") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L45_jump>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L46") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L46_premute>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L47") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L47_permuteUnique>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L48") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L48_rotate>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L49") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L49_groupAnagrams>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L51") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L51_solveNQueens>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L53") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L53_maxSubArray>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L54") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L54_spiralOrder>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L55") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L55_canJump>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L56") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L56_merge>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L57") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L57_insert>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L59") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L59_generateMatrix>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L63") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L63_uniquePathsWithObstacles>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L64") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L64_minPathSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L66") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L66_plusOne>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
        } else if (title == "L68") {
            std::shared_ptr<LeetcodeArray> tmp = std::make_shared<L68_fullJustify>();
            solution_ = std::dynamic_pointer_cast<LeetcodeArray>(tmp);
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
