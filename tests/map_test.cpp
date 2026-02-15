#include "map.h"
#include <gtest/gtest.h>

TEST(MapTest, PutGetContains) {
    Map map;
    init_map(&map, 10);
    put(&map, "apple", 5);
    put(&map, "banana", 10);
    EXPECT_EQ(get(&map, "apple"), 5);
    EXPECT_EQ(get(&map, "banana"), 10);
    EXPECT_TRUE(contains_key(&map, "apple"));
    EXPECT_FALSE(contains_key(&map, "cherry"));
    clear_map(&map);
}

TEST(MapTest, RemoveKey) {
    Map map;
    init_map(&map, 10);
    put(&map, "dog", 1);
    put(&map, "cat", 2);
    remove_key(&map, "dog");
    EXPECT_EQ(get(&map, "dog"), -1);
    EXPECT_TRUE(contains_key(&map, "cat"));
    clear_map(&map);
}

