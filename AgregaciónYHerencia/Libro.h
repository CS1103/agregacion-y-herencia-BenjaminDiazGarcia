#ifndef AGREGACIÓNYHERENCIA_LIBRO_H
#define AGREGACIÓNYHERENCIA_LIBRO_H

#include "Volumen.h"
#include <string>
using namespace std;

class Libro:public Volumen{
    int id;
public:
    Libro(string nombre, int numeroDeVolumen, int id): Volumen(nombre, numeroDeVolumen), id{id} {};
    void Mostrar() override;
};

#endif //AGREGACIÓNYHERENCIA_LIBRO_H
