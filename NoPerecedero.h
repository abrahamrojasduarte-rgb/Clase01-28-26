//
// Created by ESCINF on 28/01/2026.
//

#ifndef CLASE28_26_NOPERECEDERO_H
#define CLASE28_26_NOPERECEDERO_H
#include "Producto.h"
using namespace std;

class NoPerecedero : public Producto{
public:
    NoPerecedero(const char* c, const char* n, double p);
    double calcularPrecioVenta() const ;
};


#endif //CLASE28_26_NOPERECEDERO_H