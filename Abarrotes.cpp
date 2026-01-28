//
// Created by ESCINF on 28/01/2026.
//

#include "Abarrotes.h"
Abarrotes::Abarrotes(const char* c, const char* n, double p, Fecha* f, string pro):NoPerecedero(c,n,p){
    this->fecha = f;
    this->nombre = n;
}
