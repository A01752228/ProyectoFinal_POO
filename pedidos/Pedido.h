#ifndef PROYECTOFINAL_PEDIDO_H
#define PROYECTOFINAL_PEDIDO_H

#include <string>
#include <vector>
#include "Producto.h"

using namespace std;

class Pedido {
private:
    long id;
    Producto producto;
    string fechaEntrega;
    string status;
public:
    const Producto &getProducto() const {
        return producto;
    }

    long getId() const {
        return id;
    }

    void setId(long id) {
        Pedido::id = id;
    }

    void setProducto(const Producto &producto) {
        Pedido::producto = producto;
    }

    const string &getFechaEntrega() const {
        return fechaEntrega;
    }

    void setFechaEntrega(const string &fechaEntrega) {
        Pedido::fechaEntrega = fechaEntrega;
    }

    const string &getStatus() const {
        return status;
    }

    void setStatus(const string &status) {
        Pedido::status = status;
    }

};


#endif //PROYECTOFINAL_PEDIDO_H
