#include "heap.h"
#include <gtest/gtest.h>

TEST(HeapTest, InsertExtractMax) {
    Heap heap;
    init_heap(&heap, 10);
    insert_heap(&heap, 5);
    insert_heap(&heap, 10);
    insert_heap(&heap, 3);
    EXPECT_EQ(extract_max(&heap), 10);
    EXPECT_EQ(extract_max(&heap), 5);
    EXPECT_EQ(extract_max(&heap), 3);
    EXPECT_TRUE(is_empty_heap(&heap));
    clear_heap(&heap);
}
