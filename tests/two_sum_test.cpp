//
// Created by hemanshu on 25/04/2022.
//
#include <two_sum.h>
#include <gtest/gtest.h>

TEST(TWOSUM, two_sum){
    std::vector<int> nums({2, 7, 11, 15});
    int target(9);
    std::vector<int> expected_vi({0, 1});
    std::vector<int> actual_vi = twoSum(nums, target);
    EXPECT_EQ(actual_vi, expected_vi);
}