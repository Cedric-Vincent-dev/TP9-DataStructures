#include "stack.h"
#include<gtest/gtest.h>


TEST(StackTest, PushPopOneElement) {
  Stack stack;
  init_stack(&stack);
  push(&stack, 42);
  EXPECT_FALSE(is_empty(&stack));
  EXPECT_EQ(pop(&stack), 42);
  EXPECT_TRUE(is_empty(&stack));

}

TEST(StackTest, PushPopMultiElement) {
  Stack stack;
  init_stack(&stack);
  push(&stack, 1);
  push(&stack, 2);
  push(&stack, 3);
  EXPECT_EQ(pop(&stack), 3);
  EXPECT_EQ(pop(&stack), 2);
  EXPECT_EQ(pop(&stack), 1);
  EXPECT_TRUE(is_empty(&stack));

}
