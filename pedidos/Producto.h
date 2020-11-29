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
    vector <Proveedor> proveedores;

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

    const vector<Proveedor> &getProveedores() const {
        return proveedores;
    }

    void setProveedores(const vector<Proveedor> &proveedores) {
        Producto::proveedores = proveedores;
    }
};
#endif //PROYECTOFINAL_PRODUCTO_H