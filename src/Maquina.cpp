#include "Maquina.h"

#include <iostream>
#include <stdexcept>

Maquina::Maquina(const std::string& nombre)
    : nombre(nombre), piezasProcesadas(0), tiempoTrabajadoSeg(0) {
        if(nombre.empty()){
            throw std::invalid_argument("nombre vacio");
        }
    }

void Maquina::agregarTiempo(int segundos){
    if(segundos < 0){
        throw std::invalid_argument("segundos invalido");
    }
    tiempoTrabajadoSeg += segundos;
}

void Maquina::registrarPieza(){
    piezasProcesadas ++;
}

void Maquina::procesar() {
    std::cout << nombre << ": procesamiento generico\n";
    agregarTiempo(tiempoCicloSeg());
    registrarPieza();
}

void Maquina::mostrarEstado() const {
    std::cout << nombre << " | piezas: " << piezasProcesadas
              << " | tiempo: " << tiempoTrabajadoSeg 
              << " | capacidad: " << capacidadPorHora() << " pzas/h"" s\n";
}

    int Maquina::getPiezasProcesadas() const{
        return piezasProcesadas;
    }
    int Maquina::getTiempoTrabajadoSeg() const{
        return tiempoTrabajadoSeg;
    }

   const std::string& Maquina::getNombre() const{
        return nombre;
    }

    int Maquina::tiempoCicloSeg() const {
return 10;
    }

    double Maquina::capacidadPorHora() const{
        return 3600.0 / tiempoCicloSeg();
    }