cmake_minimum_required(VERSION 3.15)
project(p09_maze C)

set(CMAKE_C_STANDARD 99)

add_executable(p09_maze main.c Game.c Game.h)