//
// Created by ESCINF on 28/01/2026.
//

#ifndef CLASE28_26_HABITACION_H
#define CLASE28_26_HABITACION_H
#include <iostream>
using namespace std;

class Habitacion{
private:
    string nombre;
    double area;
    public:
    Habitacion();
    Habitacion(string n, double area);
    string getNombre();
    double getArea();
};


#endif //CLASE28_26_HABITACION_H