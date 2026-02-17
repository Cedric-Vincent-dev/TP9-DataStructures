#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>


void init_list(LinkedList* list){
  list->head = NULL;

}

void insert(LinkedList* list, int value){
  Node* new_node = (Node*)malloc(sizeof(Node));
  new_node->value = value;
  new_node->next = list->head;
  list->head = new_node;

}

void clear_list(LinkedList* list){
  Node* current = list->head;

  while(current){
    Node* tmp = current;
    current = current->next;
    free(tmp);

  }
  list->head = NULL;

}


void delete_node(LinkedList* list, int value) {
    if (list->head == NULL) return;

    Node* current = list->head;
    Node* prev = NULL;

    while (current != NULL) {
        if (current->value == value) {
            if (prev == NULL) {
                // Suppression en tête
                list->head = current->next;
            } else {
                // Suppression au milieu ou en fin
                prev->next = current->next;
            }
            free(current);
            return;
        }
        prev = current;
        current = current->next;
    }
}


void print_list(LinkedList* list) {
    Node* current = list->head;
    while (current != NULL) {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("NULL\n");
}
