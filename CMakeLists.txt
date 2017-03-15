cmake_minimum_required(VERSION 2.8.9)
project(Cola)

include_directories(include)

set(SOURCES src/Nodo.cpp  src/cola.cpp src/main.cpp)

add_executable(Cola ${SOURCES})
