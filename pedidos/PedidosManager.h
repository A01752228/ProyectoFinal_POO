#ifndef PROYECTOFINAL_PEDIDOSMANAGER_H
#define PROYECTOFINAL_PEDIDOSMANAGER_H

#include <string>
#include <vector>
#include "Pedido.h"

using namespace std;

class PedidosManager {

private:
    vector <Pedido> pedidos;
    long lastId;
public:
    PedidosManager() {
        lastId = 1;
    }

    string hacerPedido(const Producto& productoApedir, const string& fechaDeEntrega){
        Pedido pedido = Pedido();
        pedido.setId(lastId);
        ++lastId;
        
        pedido.setProducto(productoApedir);
        pedido.setFechaEntrega(fechaDeEntrega);
        pedido.setStatus("En camino");
        pedidos.push_back(pedido);
        
        return "El pedido se realizó correctamente";
    }

    string  cancelarPedidoPorId(long id) {
        for (int i = 0; i < pedidos.size(); ++i) {
            if (pedidos.at(i).getId() == id){
                pedidos.erase(pedidos.begin() + i);
            }
        }
    }

    void cambiarEstadoDePedido(long id, const string& nuevoEstado){
        for (int i = 0; i < pedidos.size(); ++i) {
            if (pedidos.at(i).getId() == id){
                pedidos.at(i).setStatus(nuevoEstado);
            }
        }
    }

    vector<Pedido> verPedidosPorEstado(const string& estadoDelPedido){
        vector<Pedido> pedidosPorEstado;
        for (int i = 0; i < pedidos.size(); ++i) {
            if (pedidos.at(i).getStatus() == estadoDelPedido){
                pedidosPorEstado.push_back(pedidos.at(i));
            }
        }
        return pedidosPorEstado;
    }
};
#endif //PROYECTOFINAL_PEDIDOSMANAGER_H
