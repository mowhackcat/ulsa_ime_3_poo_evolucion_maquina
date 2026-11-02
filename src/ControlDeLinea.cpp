#include "ControlDeLinea.h"

#include <iostream>
namespace planta{
 bool ControlDeLinea::agregar(Maquina* maquina) {
    if(maquina == nullptr){
        return false;
    }
        for(size_t i = 0; i < this->maquinas.size(); i ++){
     if(maquina == this->maquinas[i]){
std::cout << "false\n";
return false;
    }
}
    maquinas.push_back(maquina);
    return true;
}

void ControlDeLinea::ejecutarTurno(int ciclos) {
    for (Maquina* m : maquinas) {
        for (int i = 0; i < ciclos; i++) {
            m->procesar();
        }
    }
}

void ControlDeLinea::imprimirReporte() const {
    std::cout << "--- Reporte de la linea ---\n";
    if(maquinas.empty()){
        std::cout << "La linea no tiene maquinas\n";
    }
    for (const Maquina* m : maquinas) {
        m->mostrarEstado();
    }
}
}