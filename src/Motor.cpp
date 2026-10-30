#include "Motor.h"

#include <iostream>

Motor::Motor(double velocidadMaxRpm): velocidadMaxRpm(velocidadMaxRpm){
    if(velocidadMaxRpm <0){
        throw std::invalid_argument("cantidad invalida");
    }
}

void Motor::fijarVelocidad(double rpm){
if (rpm > velocidadMaxRpm){
 rpm = velocidadMaxRpm;
} else if (rpm < 0){
    rpm = 0;
    }
}

double Motor::getVelocidad() const {
    return velocidadActualRpm;
}

Motor::~Motor(){}