#include <iostream>
#include "linked_list.h"
#include "stack.h"
#include "doubly_linked_list.h"
#include "heap.h"
#include "map.h"
#include "binary_tree.h"

int main() {
    std::cout << "=== Démonstration des structures de données ===\n\n";

    // Linked List
    std::cout << "--- Linked List ---\n";
    LinkedList list;
    init_list(&list);
    insert(&list, 10);
    insert(&list, 20);
    insert(&list, 30);
    print_list(&list);
    delete_node(&list, 20);
    print_list(&list);
    clear_list(&list);
    std::cout << "\n";

    // Stack
    std::cout << "--- Stack ---\n";
    Stack stack;
    init_stack(&stack);
    push(&stack, 5);
    push(&stack, 15);
    push(&stack, 25);
    std::cout << "Pop: " << pop(&stack) << "\n";
    std::cout << "Pop: " << pop(&stack) << "\n";
    clear_stack(&stack);
    std::cout << "\n";

    // Doubly Linked List
    std::cout << "--- Doubly Linked List ---\n";
    DoublyLinkedList dlist;
    init_dlist(&dlist);
    add_front(&dlist, 1);
    add_back(&dlist, 2);
    add_back(&dlist, 3);
    std::cout << "Remove front: " << remove_front(&dlist) << "\n";
    std::cout << "Remove back: " << remove_back(&dlist) << "\n";
    clear_dlist(&dlist);
    std::cout << "\n";

    // Heap
    std::cout << "--- Heap ---\n";
    Heap heap;
    init_heap(&heap, 10);
    insert_heap(&heap, 50);
    insert_heap(&heap, 30);
    insert_heap(&heap, 70);
    std::cout << "Max extrait: " << extract_max(&heap) << "\n";
    clear_heap(&heap);
    std::cout << "\n";

    // Map/Dictionnaire
    std::cout << "--- Map ---\n";
    Map map;
    init_map(&map, 10);
    put(&map, "Alice", 25);
    put(&map, "Bob", 30);
    std::cout << "Valeur associée à Alice: " << get(&map, "Alice") << "\n";
    std::cout << "Valeur associée à Bob: " << get(&map, "Bob") << "\n";
    clear_map(&map);
    std::cout << "\n";

    // Binary Tree
    std::cout << "--- Binary Tree ---\n";
    BinaryTree tree;
    init_tree(&tree);
    insert_tree(&tree, 40);
    insert_tree(&tree, 20);
    insert_tree(&tree, 60);
    insert_tree(&tree, 10);
    insert_tree(&tree, 30);
    std::cout << "Recherche 20: " << (search_tree(&tree, 20) ? "Trouvé" : "Non trouvé") << "\n";
    clear_tree(&tree);
    std::cout << "\n";

    return 0;
}
