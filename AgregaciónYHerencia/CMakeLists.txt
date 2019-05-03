cmake_minimum_required(VERSION 3.10)
project(AgregaciónYHerencia)

set(CMAKE_CXX_STANDARD 17)

add_executable(AgregacionYHerencia main.cpp Volumen.cpp Volumen.h Biblioteca.cpp Biblioteca.h Libro.cpp Libro.h Revista.cpp Revista.h Test.cpp catch.hpp)