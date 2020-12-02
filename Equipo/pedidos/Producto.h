#ifndef PROYECTOFINAL_PRODUCTO_H
#define PROYECTOFINAL_PRODUCTO_H
#include <string>
#include <vector>
#include "../proveedor/Proveedor.h"

using namespace std;

class Producto {
private:
    long id;
    string nombreProducto;
    int cantidad;
    float precio;
    string nombreProveedor;

public:

    long getId() const {
        return id;
    }

    void setId(long id) {
        Producto::id = id;
    }

    const string &getNombreProducto() const {
        return nombreProducto;
    }

    void setNombreProducto(const string &nombreProducto) {
        Producto::nombreProducto = nombreProducto;
    }

    int getCantidad() const {
        return cantidad;
    }

    void setCantidad(int cantidad) {
        Producto::cantidad = cantidad;
    }

    float getPrecio() const {
        return precio;
    }

    void setPrecio(float precio) {
        Producto::precio = precio;
    }

    string getNombreProveedor() {
    	return this->nombreProveedor;
    }
    void setNombreProveedor(string nombreProveedor) {
    	this->nombreProveedor = nombreProveedor;
    }
};
#endif //PROYECTOFINAL_PRODUCTO_H