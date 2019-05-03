#include "catch.hpp"
#include "Biblioteca.h"
#include "Libro.h"
#include "Revista.h"
#include "Volumen.h"

SCENARIO("Agregar a la biblioteca."){
    GIVEN("1 libro y 1 revista."){
        WHEN("Agregamos 1 libro y 1 revista."){
            THEN("Comprobar que se han agregado.") {
                Biblioteca biblioteca;
                Volumen* v1 = new Libro ("100 años de soledad.", 1, 1);
                Volumen* v2 = new Revista ("ABC.", 2, 1);
                biblioteca.Incluir(v1);
                biblioteca.Incluir(v2);
                REQUIRE(biblioteca.get_volumenes() == 2);
            }
        }
    }
}