//
// Created by ESCINF on 28/01/2026.
//

#include "Producto.h"
Producto::Producto(const char* codigo, const char* nombre, double precio_p){
    this -> precio = precio_p;
    this-> codigo = codigo;
    this-> nombre = nombre;
}

double Producto::calcularPrecioVenta() const{
    return this->precio;
}

Producto::~Producto(){

}

const char* Producto::getNombre() const{
    return this-> nombre;
}
double Producto::getPrecio() const{
    return this->precio;
}