#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#ifdef __cplusplus
extern "C" {
#endif

  
typedef struct Node {
  int value;
  struct Node* next;

} Node;

typedef struct LinkedList {
  Node* head;

} LinkedList;

void init_list(LinkedList* list);
void insert(LinkedList* list, int value);
void clear_list(LinkedList* list);

#ifdef __cplusplus
}
#endif

#endif

