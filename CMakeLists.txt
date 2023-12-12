cmake_minimum_required(VERSION 3.27)
project(catsEverywhere C)

set(CMAKE_C_STANDARD 99)

add_executable(catsEverywhere main.c
        catMeows.c
        catCalculator.h
        renderer.h
        renderer.h)
