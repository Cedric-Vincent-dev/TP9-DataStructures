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

