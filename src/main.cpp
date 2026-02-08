#include "linked_list.h"
#include <iostream>

int main(){

  LinkedList list;
  init_list(&list);
  insert(&list, 42);
  std::cout << "First element: " << list.head->value << std::endl;
  clear_list(&list);

  return 0;

}


