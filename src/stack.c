#include "stack.h"
#include<stdlib.h>


void init_stack(Stack* stack) {
  stack->top = NULL;
}


void push(Stack* stack, int value) {
  StackNode* new_node = (StackNode*)malloc(sizeof(StackNode));
  new_node->value = value;
  new_node->next = stack->top;
  stack->top = new_node;

}

int pop(Stack* stack) {
  if(stack->top == NULL) return -1;
  StackNode* tmp = stack->top;
  int value = tmp->value;
  stack->top = tmp->next;
  free(tmp);
  return value;

}


int is_empty(Stack* stack) {
  return stack->top == NULL;

}

void clear_stack(Stack* stack) {
  while(stack->top) {
    StackNode* tmp = stack->top;
    stack->top = tmp->next;
    free(tmp);

  }

}
