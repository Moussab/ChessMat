cmake_minimum_required(VERSION 3.6)
project(ChessMat)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    include/affichage.h
    "Les versions/v1/main.c"
    "Les versions/v2/main.c"
    src/affichage.cpp
    affichage.c
    Board.h
    evaluation_des_pieces.h
    initialisation.c
    main.c
    MinMax.c
    regle_de_deplacement.c)

include_directories(.)
include_directories(include)
include_directories("Les versions")
include_directories("Les versions/v1")
include_directories("Les versions/v2")
include_directories(src)

add_executable(ChessMat ${SOURCE_FILES})