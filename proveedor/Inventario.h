#ifndef PROYECTOFINAL_INVENTARIO_H
#define PROYECTOFINAL_INVENTARIO_H
#include "../pedidos/Producto.h"
#include <vector>
class Inventario {
private:
    vector<Producto> productos;

public:
    const vector<Producto> &getProductos() const {
        return productos;
    }

    void agregarProducto(Producto producto){
        for (int i = 0; i < productos.size(); ++i) {
            if (productos.at(i).getNombreProducto() == producto.getNombreProducto()){
                int cantidad;
                cantidad = productos.at(i).getCantidad() + producto.getCantidad();
                productos.at(i).setCantidad(cantidad);
                return;
            }
        }
            productos.push_back(producto);
    }
};
#endif //PROYECTOFINAL_INVENTARIO_H