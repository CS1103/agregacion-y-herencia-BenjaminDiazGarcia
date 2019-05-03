#include "Volumen.h"
#include "Libro.h"
#include "Revista.h"

////Destructor
Volumen::~Volumen() {

}

void Volumen::Mostrar() {
    auto var = dynamic_cast<Libro*>(this);
    if (var != nullptr){
        var->Mostrar();
    }
    else{
        auto var1 = dynamic_cast<Revista*>(this);
        var1->Mostrar();
    }
}

