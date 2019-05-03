#ifndef AGREGACIÓNYHERENCIA_VOLUMEN_H
#define AGREGACIÓNYHERENCIA_VOLUMEN_H

#include <string>
using namespace std;

class Volumen{
protected:
    string Nombre;
    int NumeroDeVolumen;

public:
    Volumen() = default;
    Volumen(std::string Nombre, int NumeroDeVolumen): Nombre{Nombre}, NumeroDeVolumen{NumeroDeVolumen} {}
    ~Volumen();
    virtual void Mostrar();
};

#endif //AGREGACIÓNYHERENCIA_VOLUMEN_H
