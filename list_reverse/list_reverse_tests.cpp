#include <gtest/gtest.h>
#include "list_reverse.h"

using namespace list_reverse;

TEST(LinkedListTest, HandlesEmptyList) {
    LinkedList<int> list;
    list.reverseRecursive();
    EXPECT_TRUE(list.toVector().empty());
}

TEST(LinkedListTest, HandlesSingleElement) {
    LinkedList<int> list;
    list.pushBack(1);
    list.reverseRecursive();

    std::vector<int> expected = { 1 };
    EXPECT_EQ(list.toVector(), expected);
}

TEST(LinkedListTest, HandlesMultipleElements) {
    LinkedList<int> list;
    list.pushBack(1);
    list.pushBack(2);
    list.pushBack(3);

    list.reverseRecursive();

    std::vector<int> expected = { 3, 2, 1 };
    EXPECT_EQ(list.toVector(), expected);
}

TEST(LinkedListTest, HandlesLargeList) {
    LinkedList<int> list;
    for (int i = 0; i < 5; ++i) list.pushBack(i);

    list.reverseRecursive();

    std::vector<int> expected = { 4, 3, 2, 1, 0 };
    EXPECT_EQ(list.toVector(), expected);
}