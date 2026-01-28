//
// Created by ESCINF on 28/01/2026.
//

#include "Habitacion.h"

double Habitacion::getArea(){
    return this->area;
}

string Habitacion::getNombre(){
    return this->nombre;
}

Habitacion::Habitacion(){
    area = 0.0;
    nombre = " ";
}

Habitacion::Habitacion(string nombre, double area){
    this->nombre = nombre;
    this->area = area;
}
