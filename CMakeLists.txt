cmake_minimum_required(VERSION 3.10)
project(TP9_DataStructures C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 11)


# Créer une bibliothèque pour la list chainée
add_library(linked_list
    src/linked_list.c

)

# Créer une bibliothèque pour la pile
add_library(stack src/stack.c)


# Exécutable principal
add_executable(tp9
    src/main.cpp
    
)

# Lier l'exécutable à la bibliothèque
target_link_libraries(tp9 linked_list stack)


# Activer les tests
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_subdirectory(tests)
