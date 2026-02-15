# Inclure le dossier src pour trouver linked_list.h
include_directories(${CMAKE_SOURCE_DIR}/src)

# Déclare un exécutable pour les tests
add_executable(runTests
    linked_list_test.cpp

)

# Lier avec Google Test et l'exécutable principal
target_link_libraries(runTests
    GTest::GTest
    GTest::Main
    linked_list

)

# Déclarer les tests
add_test(NAME LinkedListTests COMMAND runTests)

# Test pour la pile
add_executable(runStackTests stack_test.cpp)
target_link_libraries(runStackTests GTest::GTest GTest::Main stack)
add_test(NAME StackTests COMMAND runStackTests)

# Test pour la liste doublement chainée
add_executable(runDoublyListTests doubly_linked_list_test.cpp)
target_link_libraries(runDoublyListTests GTest::GTest GTest::Main doubly_linked_list)
add_test(NAME DoublyLinkedListTests COMMAND runDoublyListTests)

# Test pour le Heap
add_executable(runHeapTests heap_test.cpp)
target_link_libraries(runHeapTests GTest::GTest GTest::Main heap)
add_test(NAME HeapTests COMMAND runHeapTests)

# Test pour le Map
add_executable(runMapTests map_test.cpp)
target_link_libraries(runMapTests GTest::GTest GTest::Main map)
add_test(NAME MapTests COMMAND runMapTests)

# Test pour le Binary_tree
add_executable(runBinaryTreeTests binary_tree_test.cpp)
target_link_libraries(runBinaryTreeTests GTest::GTest GTest::Main binary_tree)
add_test(NAME BinaryTreeTests COMMAND runBinaryTreeTests)
