#include "Biblioteca.h"

////Constructor
Biblioteca::Biblioteca() {
    for (int i = 0; i < Volumenes.size(); i++){
        delete Volumenes[i];
    }
}

////Destructor
Biblioteca::~Biblioteca() {

}

void Biblioteca::MostrarBiblioteca() {
    for (int i = 0; i < Volumenes.size(); i++){
        cout << "Volumen #" << i+1 << ". ";
        Volumenes[i]->Mostrar();
    }
}

void Biblioteca::Incluir(Volumen* v) {
    Volumenes.push_back(v);
}
