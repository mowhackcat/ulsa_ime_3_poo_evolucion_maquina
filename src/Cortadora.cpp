#include "Cortadora.h"
#include <iostream>

namespace planta{
Cortadora::Cortadora(const std::string& nombre) : Maquina(nombre) {}

void Cortadora::ejecutarCiclo() {
    std::cout << getNombre() << ": cortando pieza\n";
}

int Cortadora::tiempoCicloSeg() const{
return 50;
    }
}