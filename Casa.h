//
// Created by ESCINF on 28/01/2026.
//

#ifndef CLASE28_26_CASA_H
#define CLASE28_26_CASA_H
#include <string>
#include "Habitacion.h"

using namespace std;
class Casa{
private:
    string direccion;
    Habitacion* habitaciones[3];
    int cantidad;
public:
    Casa();
    Casa(string direccion, int c);
    void agregarHabitaciones(string mm, double a, Habitacion* habitacion);
};


#endif //CLASE28_26_CASA_H