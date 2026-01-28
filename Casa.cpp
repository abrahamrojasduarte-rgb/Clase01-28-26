//
// Created by ESCINF on 28/01/2026.
//

#include "Casa.h"

Casa::Casa(){
    this->cantidad = 0;
    this->direccion = "";
    for (int i = 0; i < 3; i++){
        habitaciones[i] = nullptr;
    }
}

Casa::Casa(string direccion, int c ){
    this->direccion = direccion;
    this->cantidad = c;
    cantidad++;
}

void Casa::agregarHabitaciones(string m, double a,Habitacion* habitacion){
    this->habitaciones[cantidad] = habitacion;
    if (cantidad < 3){
        habitaciones[cantidad] = habitacion;
        cantidad++;
    }
}
