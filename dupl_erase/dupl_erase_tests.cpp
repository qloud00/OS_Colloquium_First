#include <gtest/gtest.h>
#include "dupl_erase.h"

using namespace dupl_erase;

TEST(RemoveDuplicatesTest, HandlesEmptyInput) {
    std::vector<int> input = {};
    std::vector<int> expected = {};
    EXPECT_EQ(removeDuplicates(input), expected);
}

TEST(RemoveDuplicatesTest, HandlesNoDuplicates) {
    std::vector<int> input = { 1, 2, 3, 4, 5 };
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    EXPECT_EQ(removeDuplicates(input), expected);
}

TEST(RemoveDuplicatesTest, HandlesAllDuplicates) {
    std::vector<int> input = { 1, 1, 1, 1 };
    std::vector<int> expected = { 1 };
    EXPECT_EQ(removeDuplicates(input), expected);
}

TEST(RemoveDuplicatesTest, HandlesMixedDuplicatesPreservingOrder) {
    std::vector<int> input = { 10, 20, 10, 30, 20, 10, 40 };
    std::vector<int> expected = { 10, 20, 30, 40 };
    EXPECT_EQ(removeDuplicates(input), expected);
}

TEST(RemoveDuplicatesTest, HandlesNegativeNumbers) {
    std::vector<int> input = { -5, -1, -5, -2 };
    std::vector<int> expected = { -5, -1, -2 };
    EXPECT_EQ(removeDuplicates(input), expected);
}