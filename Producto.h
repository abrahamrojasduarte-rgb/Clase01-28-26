//
// Created by ESCINF on 28/01/2026.
//

#ifndef CLASE28_26_PRODUCTO_H
#define CLASE28_26_PRODUCTO_H


class Producto {
protected:
    const char* codigo;
    const char* nombre;
     double precio;

public:
    Producto(const char* codigo, const char* nombre, double precio_p);
    virtual double calcularPrecioVenta() const;
    virtual ~Producto();
    const char* getNombre() const;
    double getPrecio() const;
};



#endif //CLASE28_26_PRODUCTO_H
