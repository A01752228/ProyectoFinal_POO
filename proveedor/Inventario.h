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
        productos.push_back(producto);
    }
};


#endif //PROYECTOFINAL_INVENTARIO_H
