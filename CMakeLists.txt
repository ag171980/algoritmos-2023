cmake_minimum_required(VERSION 3.25)
project(algoritmos_2023)

set(CMAKE_CXX_STANDARD 14)

include_directories(repaso-parcial)

add_executable(algoritmos_2023
        repaso-parcial/repaso_parcial.cpp
        repaso-parcial/cargar.h repaso-parcial/leer.h repaso-parcial/struct.h)
