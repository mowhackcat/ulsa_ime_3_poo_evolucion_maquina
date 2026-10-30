#include "ControlDeLinea.h"
#include "Fresadora.h"
#include "Torno.h"

#include <iostream>

int main() {
    Torno torno("Torno T-01");
    Fresadora fresadora("Fresadora F-01");

    ControlDeLinea linea;
    linea.agregar(&torno);
    linea.agregar(&fresadora);

    linea.ejecutarTurno(2);
    linea.imprimirReporte();

    std::cout << "--- Experimento: destruir a traves de la base ---\n";
    Maquina* temporal = new Torno("Torno T-99");
    delete temporal;

    std::cout << "--- Fin de main ---\n";
    return 0;
}