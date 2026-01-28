//
// Created by ESCINF on 28/01/2026.
//

#include "Electronicos.h"
double Electronicos::calcularPrecioVenta() const {
    double precioBase = precio * 1.10;  // Precio base + 10% de utilidad

    // Si tiene cliente frecuente con tarjeta, aplicar descuento
    if (clienteFrecuente && clienteFrecuente->getTarjetaDescuento()) {
        double porcentajeDescuento =
            clienteFrecuente->getTarjetaDescuento()->getPorcentajeDescuento();
        double descuento = precioBase * (porcentajeDescuento / 100.0);
        precioBase -= descuento;
    }

    return precioBase;
}
Electronicos::Electronicos(const char* c, const char* n, double p, int id,int annio) : NoPerecedero(c,n,p){
    this->id = id;
    this->annio = annio;
}