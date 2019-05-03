#include <iostream>
#include "Biblioteca.h"
#include "Volumen.h"
#include "Revista.h"
#include "Libro.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using namespace std;

#ifndef CATCH_CONFIG_MAIN

int main() {
    Biblioteca biblioteca;
    Volumen* v1 = new Libro ("100 años de soledad.", 1, 1);
    Volumen* v2 = new Revista ("ABC.", 2, 1);
    biblioteca.Incluir(v1);
    biblioteca.Incluir(v2);
    biblioteca.MostrarBiblioteca();
    return 0;
}

#endif