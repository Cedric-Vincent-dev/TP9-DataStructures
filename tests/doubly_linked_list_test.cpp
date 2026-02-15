#include "doubly_linked_list.h"
#include <gtest/gtest.h>

TEST(DoublyLinkedListTest, AddRemoveFront) {
    DoublyLinkedList list;
    init_dlist(&list);
    add_front(&list, 10);
    add_front(&list, 20);
    EXPECT_EQ(remove_front(&list), 20);
    EXPECT_EQ(remove_front(&list), 10);
    EXPECT_TRUE(is_empty_dlist(&list));
}

TEST(DoublyLinkedListTest, AddRemoveBack) {
    DoublyLinkedList list;
    init_dlist(&list);
    add_back(&list, 1);
    add_back(&list, 2);
    add_back(&list, 3);
    EXPECT_EQ(remove_back(&list), 3);
    EXPECT_EQ(remove_back(&list), 2);
    EXPECT_EQ(remove_back(&list), 1);
    EXPECT_TRUE(is_empty_dlist(&list));
}
