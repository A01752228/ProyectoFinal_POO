#ifndef PROYECTOFINAL_PEDIDOSVIEW_H
#define PROYECTOFINAL_PEDIDOSVIEW_H
#include "PedidosManager.h"
#include "../proveedor/Inventario.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class PedidosView {
private:
    PedidosManager pedidosManager;
    Inventario inventario;
    void pedidosPredeterminados(){
        Producto prod1 = Producto();
        prod1.setNombreProducto("Pantene");
        prod1.setPrecio(50);
        prod1.setCantidad(5);
        pedidosManager.hacerPedido(prod1,"Lunes");

        Producto prod2 = Producto();
        prod2.setNombreProducto("Jabon");
        prod2.setPrecio(30);
        prod2.setCantidad(20);
        pedidosManager.hacerPedido(prod2,"Martes");

        Producto prod3 = Producto();
        prod3.setNombreProducto("Taladros");
        prod3.setPrecio(1500);
        prod3.setCantidad(30);
        pedidosManager.hacerPedido(prod3,"Miercoles");

        Producto prod4 = Producto();
        prod4.setNombreProducto("Laptop");
        prod4.setPrecio(20000);
        prod4.setCantidad(15);
        pedidosManager.hacerPedido(prod4,"Lunes");

        Producto prod5 = Producto();
        prod5.setNombreProducto("Playeras");
        prod5.setPrecio(200);
        prod5.setCantidad(70);
        pedidosManager.hacerPedido(prod5,"Jueves");
    }

    void productosPredeterminados(){
            Producto prod1 = Producto();
            prod1.setNombreProducto("Playeras");
            prod1.setCantidad(40);
            prod1.setPrecio(200);
            inventario.agregarProducto(prod1);
        }
public:
    void verPedidosEnCamino(){
        vector<Pedido> pedidosConsultados = pedidosManager.verPedidosPorEstado("En camino");
        cout << "\t\t[[Pedidos en camino]] "<<endl;
        for (auto & pedidosConsultado : pedidosConsultados) {
            cout << "ID: "<<pedidosConsultado.getId();
            cout << "\t Nombre del producto: "<<pedidosConsultado.getProducto().getNombreProducto();
            cout << "\t Cantidad: "<<pedidosConsultado.getProducto().getCantidad()<<endl;
        }
    }

    PedidosView(PedidosManager pedidosManager) : pedidosManager(pedidosManager) {
        inventario = Inventario();
        pedidosManager = PedidosManager(inventario);
        pedidosPredeterminados();
    }
    void menu(){
        string opcion;
        while (opcion !=  "no") {
            cout << "Que quiere visualizar " << endl;
            cout << "1) Ver pedidos en camino" << endl;
            cout << "2) Cambiar estatus de pedido por ID" << endl;
            cout << "3) Hacer Pedido: "<<endl;
            cout << "4) Ver inventario: " << endl;
            cout << "Ingresa no para salir" << endl;
            cin >> opcion;
            if (opcion == "1") {
                verPedidosEnCamino();
            }
            if (opcion == "2") {
                long id;
                string status;
                cout << "Dame el ID: " << endl;
                cin >> id;
                cout << "Dame el estatus del pedido (En camino, Recibido)" << endl;
                cin >> status;
                pedidosManager.cambiarEstadoDePedido(id, status);

                if (status == "Recibido"){
                    Producto producto = pedidosManager.getProductoDePedidoPorId(id);
                    inventario.agregarProducto(producto);
                }
            }
            if (opcion == "3"){
                string nombre;
                int cantidad;
                cin.ignore(32767,'\n');
                cout << "Dame el nombre del producto: ", getline(cin,nombre);
                cout << "Dame la cantidad: ", cin >> cantidad;
                Producto prod = Producto();
                prod.setNombreProducto(nombre);
                prod.setCantidad(cantidad);
                pedidosManager.hacerPedido(prod,"Viernes");
            }
            if (opcion == "4"){
                productosPredeterminados();
                vector<Producto> producto = inventario.getProductos();
                for (int i = 0; i < producto.size(); ++i) {
                    cout << "-------------------"<<endl;
                    cout << "Nombre: "<<producto.at(i).getNombreProducto()<<endl;
                    cout << "Cantidad: "<<producto.at(i).getCantidad()<<endl;
                    cout << "Precio: "<<producto.at(i).getPrecio()<<endl;
                    cout << "-------------------\n"<<endl;
                }
            }
        }
    }
};
#endif //PROYECTOFINAL_PEDIDOSVIEW_H