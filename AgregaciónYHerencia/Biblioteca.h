#ifndef AGREGACIÓNYHERENCIA_BIBLIOTECA_H
#define AGREGACIÓNYHERENCIA_BIBLIOTECA_H

#include <iostream>
#include <string>
#include <vector>
#include "Volumen.h"
using namespace std;

class Biblioteca{
    int MaxLibros = 0;
    int MaxRevistas = 0;
    vector <Volumen*> Volumenes;

public:
    Biblioteca();
    ~Biblioteca();
    void MostrarBiblioteca();
    void Incluir (Volumen*);
    int get_volumenes(){ return Volumenes.size(); };
};
#endif //AGREGACIÓNYHERENCIA_BIBLIOTECA_H
