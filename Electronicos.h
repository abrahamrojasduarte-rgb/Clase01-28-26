//
// Created by ESCINF on 28/01/2026.
//

#ifndef CLASE28_26_ELECTRONICOS_H
#define CLASE28_26_ELECTRONICOS_H
#include "NoPerecedero.h"


class Electronicos : public NoPerecedero{
private:
    int id;
    int annio;
public:
    Electronicos(const char* c, const char* n, double p, int id,int annio);
    double calcularPrecioVenta() const override;
};


#endif //CLASE28_26_ELECTRONICOS_H