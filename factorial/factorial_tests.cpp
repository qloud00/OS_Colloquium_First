#include <gtest/gtest.h>
#include "factorial.h"

TEST(FactorialTest, HandlesZeroAndOne) {
    EXPECT_EQ(factorial(0), 1);
    EXPECT_EQ(factorial(1), 1);
}

TEST(FactorialTest, HandlesStandardValues) {
    EXPECT_EQ(factorial(5), 120);
    EXPECT_EQ(factorial(3), 6);
}

TEST(FactorialTest, HandlesMaxBoundary) {
    EXPECT_EQ(factorial(20), 2432902008176640000ULL);
}

TEST(FactorialTest, ThrowsOnOverflow) {
    EXPECT_THROW(factorial(21), std::overflow_error);
}

TEST(FactorialTest, ThrowsOnNegative) {
    EXPECT_THROW(factorial(-1), std::invalid_argument);
}

TEST(FactorialSequenceTest, GeneratesCorrectSequence) {
    std::vector<uint64_t> expected = { 1, 2, 6, 24, 120 };
    EXPECT_EQ(getFactorialsSequence(5), expected);
}

TEST(FactorialSequenceTest, HandlesZeroLength) {
    EXPECT_TRUE(getFactorialsSequence(0).empty());
}

TEST(FactorialSequenceTest, HandlesOneLength) {
    std::vector<uint64_t> expected = { 1 };
    EXPECT_EQ(getFactorialsSequence(1), expected);
}

TEST(FactorialSequenceTest, ThrowsOnOverflowSequence) {
    EXPECT_THROW(getFactorialsSequence(21), std::overflow_error);
}

TEST(FactorialSequenceTest, ThrowsOnNegativeSequence) {
    EXPECT_THROW(getFactorialsSequence(-5), std::invalid_argument);
}