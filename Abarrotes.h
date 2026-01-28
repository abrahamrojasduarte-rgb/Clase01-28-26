//
// Created by ESCINF on 28/01/2026.
//

#ifndef CLASE28_26_ABARROTES_H
#define CLASE28_26_ABARROTES_H
#include "NoPerecedero.h"
#include <iostream>
#include "Fecha.h"
using namespace std;

class Abarrotes : public NoPerecedero{
private:
    Fecha* fecha;
    string proveedor;
public:
    Abarrotes(const char* c, const char* n, double p, Fecha* f, string pro);
};


#endif //CLASE28_26_ABARROTES_H