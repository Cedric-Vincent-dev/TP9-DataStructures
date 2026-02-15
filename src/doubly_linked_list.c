#include "doubly_linked_list.h"
#include <stdlib.h>

void init_dlist(DoublyLinkedList* list) {
    list->head = NULL;
    list->tail = NULL;
}

void add_front(DoublyLinkedList* list, int value) {
    DNode* new_node = (DNode*)malloc(sizeof(DNode));
    new_node->value = value;
    new_node->prev = NULL;
    new_node->next = list->head;
    if (list->head) list->head->prev = new_node;
    else list->tail = new_node;
    list->head = new_node;
}

void add_back(DoublyLinkedList* list, int value) {
    DNode* new_node = (DNode*)malloc(sizeof(DNode));
    new_node->value = value;
    new_node->next = NULL;
    new_node->prev = list->tail;
    if (list->tail) list->tail->next = new_node;
    else list->head = new_node;
    list->tail = new_node;
}

int remove_front(DoublyLinkedList* list) {
    if (!list->head) return -1;
    DNode* tmp = list->head;
    int value = tmp->value;
    list->head = tmp->next;
    if (list->head) list->head->prev = NULL;
    else list->tail = NULL;
    free(tmp);
    return value;
}

int remove_back(DoublyLinkedList* list) {
    if (!list->tail) return -1;
    DNode* tmp = list->tail;
    int value = tmp->value;
    list->tail = tmp->prev;
    if (list->tail) list->tail->next = NULL;
    else list->head = NULL;
    free(tmp);
    return value;
}

int is_empty_dlist(DoublyLinkedList* list) {
    return list->head == NULL;
}

void clear_dlist(DoublyLinkedList* list) {
    while (list->head) {
        DNode* tmp = list->head;
        list->head = tmp->next;
        free(tmp);
    }
    list->tail = NULL;
}
