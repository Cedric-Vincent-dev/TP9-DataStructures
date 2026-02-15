#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#ifdef __cplusplus
extern "C" {
#endif

  typedef struct DNode {
    int value;
    struct DNode* next;
    struct DNode* prev;

  } DNode;

  
  typedef struct DoublyLinkedList {
    DNode* head;
    DNode* tail;

  } DoublyLinkedList;


void init_dlist(DoublyLinkedList* list);
void add_front(DoublyLinkedList* list, int value);
void add_back(DoublyLinkedList* list, int value);
int remove_front(DoublyLinkedList* list);
int remove_back(DoublyLinkedList* list);
int is_empty_dlist(DoublyLinkedList* list);
void clear_dlist(DoublyLinkedList* list);

#ifdef __cplusplus
}
#endif

#endif
