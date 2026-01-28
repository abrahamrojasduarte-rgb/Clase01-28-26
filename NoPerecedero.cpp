//
// Created by ESCINF on 28/01/2026.
//

#include "NoPerecedero.h"


NoPerecedero::NoPerecedero(const char* c, const char* n, double p)
   : Producto(c,n,p){
}

double NoPerecedero::calcularPrecioVenta() const{
    return this -> getPrecio() * 1.5;
}
