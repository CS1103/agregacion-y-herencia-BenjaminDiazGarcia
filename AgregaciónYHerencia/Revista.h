#ifndef AGREGACIÓNYHERENCIA_REVISTA_H
#define AGREGACIÓNYHERENCIA_REVISTA_H

#include "Volumen.h"
using namespace std;

class Revista: public Volumen{
    int id;
public:
    Revista(string nombre, int numeroDeVolumen, int id): Volumen(nombre, numeroDeVolumen), id{id} {};
    void Mostrar() override;
};
#endif //AGREGACIÓNYHERENCIA_REVISTA_H
