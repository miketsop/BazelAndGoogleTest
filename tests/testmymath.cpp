#include "lib/mymath.hpp"
#include "gtest/gtest.h"

TEST(MathTest, TestADD){
    int sum = myAdd(1,9);
    EXPECT_EQ(sum, 10);
}

TEST(MathTest, TestADD2){
    int sum = myAdd(1,1);
    EXPECT_EQ(sum, 2);
}

TEST(MathTest, TestSUB){
    int sum = mySub(1,6);
    EXPECT_EQ(sum, -5);
}

