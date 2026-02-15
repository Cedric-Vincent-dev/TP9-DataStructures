#include "binary_tree.h"
#include <gtest/gtest.h>

TEST(BinaryTreeTest, InsertSearch) {
    BinaryTree tree;
    init_tree(&tree);
    insert_tree(&tree, 10);
    insert_tree(&tree, 5);
    insert_tree(&tree, 15);
    EXPECT_TRUE(search_tree(&tree, 10));
    EXPECT_TRUE(search_tree(&tree, 5));
    EXPECT_TRUE(search_tree(&tree, 15));
    EXPECT_FALSE(search_tree(&tree, 20));
    clear_tree(&tree);
}

