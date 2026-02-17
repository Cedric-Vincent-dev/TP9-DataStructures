#include "linked_list.h"
#include <iostream>

int main(){

  LinkedList list;
    init_list(&list);

    insert(&list, 10);
    insert(&list, 20);
    insert(&list, 30);

    std::cout << "Liste après insertions: ";
    print_list(&list);

    delete_node(&list, 20);

    std::cout << "Liste après suppression de 20: ";
    print_list(&list);

    clear_list(&list);
    
    return 0;
}



