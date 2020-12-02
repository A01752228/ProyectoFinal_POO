#ifndef PROYECTOFINAL_PEDIDOSMANAGER_H
#define PROYECTOFINAL_PEDIDOSMANAGER_H

#include <string>
#include <vector>
#include "Pedido.h"
#include "../proveedor/Inventario.h"

using namespace std;

class PedidosManager {

private:
    Inventario inventario;
    vector<Pedido> pedidos;
    vector<Proveedor> proveedores;
    long lastId;
public:
    PedidosManager(Inventario inventario1) {
        lastId = 1;
        inventario = inventario1;
    }

    void agregarProveedor(string nombre, string nombreproducto, int costosT, bool mayoreo, int calidad){
        Proveedor cosas;
        cosas = Proveedor(nombre, nombreproducto, costosT, mayoreo, calidad);
        proveedores.push_back(cosas);
    }

    string hacerPedido(Producto& productoApedir, const string& fechaDeEntrega){
        Pedido pedido = Pedido();
        pedido.setId(lastId);
        ++lastId;

        pedido.setProducto(productoApedir);
        pedido.setFechaEntrega(fechaDeEntrega);
        pedido.setStatus("En camino");
        pedidos.push_back(pedido);
        pedido.setNombreProveedor(productoApedir.getNombreProducto());
        
        return "El pedido se realizó correctamente";
    }
    void cancelarPedidoPorId(long id) {
        for (int i = 0; i < pedidos.size(); i++) {
            if (pedidos.at(i).getId() == id){
                pedidos.erase(pedidos.begin() + i);
            }
        }
    }
    void cambiarEstadoDePedido(long id, const string& nuevoEstado){
        for (int i = 0; i < pedidos.size(); i++) {
            if (pedidos.at(i).getId() == id){
                pedidos.at(i).setStatus(nuevoEstado);
            }
        }
    }
    vector<Pedido> verPedidosPorEstado(const string& estadoDelPedido){
        vector<Pedido> pedidosPorEstado;
        for (int i = 0; i < pedidos.size(); i++) {
            if (pedidos.at(i).getStatus() == estadoDelPedido){
                pedidosPorEstado.push_back(pedidos.at(i));
            }
        }
        return pedidosPorEstado;
    }

    Producto getProductoDePedidoPorId(long id) {
        for (int i = 0; i < pedidos.size(); i++) {
            if (pedidos.at(i).getId() == id){
                return pedidos.at(i).getProducto();
            }
        }
    }

    vector<Proveedor> getProveedores() {
    return proveedores;
    }
    void setProveedores(vector<Proveedor> proveedores) {
    	this->proveedores = proveedores;
    }

    Proveedor getProveedorPorNombre(string nombre){
        for (int i = 0; i < proveedores.size(); i++) {
            if (proveedores.at(i).getNombre() == nombre){
                return proveedores.at(i);
                break;
            }
        }
    }

    bool existeProveedor(string nombre){
        for (int i = 0; i < proveedores.size(); i++) {
            if (proveedores.at(i).getNombre() == nombre){
                return true;
            }
        }
    }

};
#endif //PROYECTOFINAL_PEDIDOSMANAGER_H