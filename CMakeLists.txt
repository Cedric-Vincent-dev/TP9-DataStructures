cmake_minimum_required(VERSION 3.10)
project(TP9_DataStructures C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Inclure les headers
include_directories(src)

# Créer une seule librairie regroupant toutes les structures
add_library(datastructures
    src/linked_list.c
    src/stack.c
    src/doubly_linked_list.c
    src/heap.c
    src/map.c
    src/binary_tree.c
)

# Exécutable principal
add_executable(tp9 src/main.cpp)
target_link_libraries(tp9 datastructures)

# Tests unitaires avec GoogleTest
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(runTests tests/linked_list_test.cpp)
target_link_libraries(runTests datastructures GTest::GTest GTest::Main)
add_test(NAME LinkedListTests COMMAND runTests)

add_executable(runStackTests tests/stack_test.cpp)
target_link_libraries(runStackTests datastructures GTest::GTest GTest::Main)
add_test(NAME StackTests COMMAND runStackTests)

add_executable(runDoublyListTests tests/doubly_linked_list_test.cpp)
target_link_libraries(runDoublyListTests datastructures GTest::GTest GTest::Main)
add_test(NAME DoublyListTests COMMAND runDoublyListTests)

add_executable(runHeapTests tests/heap_test.cpp)
target_link_libraries(runHeapTests datastructures GTest::GTest GTest::Main)
add_test(NAME HeapTests COMMAND runHeapTests)

add_executable(runMapTests tests/map_test.cpp)
target_link_libraries(runMapTests datastructures GTest::GTest GTest::Main)
add_test(NAME MapTests COMMAND runMapTests)

add_executable(runBinaryTreeTests tests/binary_tree_test.cpp)
target_link_libraries(runBinaryTreeTests datastructures GTest::GTest GTest::Main)
add_test(NAME BinaryTreeTests COMMAND runBinaryTreeTests)
