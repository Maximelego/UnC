cmake_minimum_required(VERSION 3.12)
project(my_project)

# Déclaration de la version minimale de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Déclaration des sources du projet
set(SOURCES
        src/main.cpp
        src/core/uno/Uno.cpp
        src/core/uno/cards/Card.cpp
        src/core/uno/cards/Color.cpp
        src/core/uno/cards/Number.cpp
        src/core/uno/cards/CardDeck.cpp
        src/core/uno/utils/EnhancedList.cpp
)

# Déclaration des fichiers de tests
set(TEST_SOURCES
        tests/MainTest.cpp
        tests/TestCard.cpp
        tests/include/TestCard.hpp
        tests/include/MainTest.hpp
)

# Ajout de l'exécutable principal
add_executable(my_project ${SOURCES} ${TEST_SOURCES})

# Configuration des include directories
target_include_directories(my_project
        PRIVATE src/core
        PRIVATE src/gui
)

# Configuration des tests
enable_testing()
add_test(NAME my_tests COMMAND my_project)

# Copier les ressources vers le répertoire de build
file(COPY resources DESTINATION ${CMAKE_CURRENT_BINARY_DIR})