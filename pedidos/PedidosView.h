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
        prod1.setNombreProducto("Shampoo");
        prod1.setPrecio(10000);
        prod1.setCantidad(1000);
        pedidosManager.agregarProveedor("Pantene", "Shampoo", 250000, true, 9);
        prod1.setNombreProveedor("Pantene");
        pedidosManager.hacerPedido(prod1,"Lunes");

        Producto prod2 = Producto();
        prod2.setNombreProducto("Jabon");
        prod2.setPrecio(4500);
        prod2.setCantidad(3000);
        pedidosManager.agregarProveedor("Dove", "Jabon", 250000, true, 8);
        prod2.setNombreProveedor("Dove");
        pedidosManager.hacerPedido(prod2,"Martes");

        Producto prod3 = Producto();
        prod3.setNombreProducto("Taladros");
        prod3.setPrecio(10000);
        prod3.setCantidad(200);
        pedidosManager.agregarProveedor("Black&Decker", "Taladros", 250000, true, 9);
        prod3.setNombreProveedor("Black&Decker");
        pedidosManager.hacerPedido(prod3,"Miercoles");

        Producto prod4 = Producto();
        prod4.setNombreProducto("Laptop");
        prod4.setPrecio(75000);
        prod4.setCantidad(15);
        pedidosManager.agregarProveedor("HP", "Laptops", 150000, false, 9);
        prod4.setNombreProveedor("HP");
        pedidosManager.hacerPedido(prod4,"Lunes");

        Producto prod5 = Producto();
        prod5.setNombreProducto("Playeras");
        prod5.setPrecio(19600);
        prod5.setCantidad(70);
        pedidosManager.agregarProveedor("Levis", "Playeras", 200000, false, 8);
        prod5.setNombreProveedor("Levis");
        pedidosManager.hacerPedido(prod5,"Jueves");
    }

    /*void productosPredeterminados(){
            Producto prod1 = Producto();
            Proveedor pro;
            prod1.setNombreProducto("Celulares");
            prod1.setCantidad(40);
            prod1.setPrecio(20000);
            pedidosManager.agregarProveedor("Roberto", "Celulares", 0, false, 5);
            prod1.setNombreProveedor("Roberto");
            inventario.agregarProducto(prod1);
        }*/
public:
    void verPedidosEnCamino(){
        vector<Pedido> pedidosConsultados = pedidosManager.verPedidosPorEstado("En camino");
        cout << "\t\t[[Pedidos en camino]] "<<endl;
        for (int i = 0; i < pedidosConsultados.size(); i++) {
            cout << "ID: "<< pedidosConsultados[i].getId();
            cout << "\t Nombre del producto: "<< pedidosConsultados[i].getProducto().getNombreProducto();
            cout << "\t Cantidad: "<< pedidosConsultados[i].getProducto().getCantidad();
            cout << "\t Proveedor: " << pedidosManager.getProveedores().at(i).getNombre() << endl;
        }
    }

    PedidosView(PedidosManager pedidosManager) : pedidosManager(pedidosManager) {
        inventario = Inventario();
        pedidosManager = PedidosManager(inventario);
        pedidosPredeterminados();
    }
    void menu(){
        string opcion;
        //productosPredeterminados();
        while (opcion !=  "no") {
            cout << "Que quiere visualizar " << endl;
            cout << "1) Ver pedidos en camino" << endl;
            cout << "2) Cambiar estatus de pedido por ID" << endl;
            cout << "3) Hacer Pedido: "<<endl;
            cout << "4) Ver inventario: " << endl;
            cout << "5) Ver Proveedores: " << endl;
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
                for (int i = 0; i < pedidosManager.getProveedores().size(); i++) {
                    cout << "-------------------"<<endl;
                    cout << "Nombre: " << pedidosManager.getProveedores().at(i).getNombre() <<endl;
                    cout << "Calidad: " << pedidosManager.getProveedores().at(i).getCalidad() <<endl;
                    cout << "Producto que provee: " << pedidosManager.getProveedores().at(i).getNombreproducto() <<endl;
                    cout << "-------------------\n" << endl;
                }
                string nombre;
                int cantidad;
                string nombreproducto;        
                bool mayoreo = false;
                cin.ignore(32767,'\n');
                cout << "Dame el nombre del producto: ", getline(cin,nombreproducto);
                cout << "Dame la cantidad: ", cin >> cantidad;
                cout << "Dame el nombre del proveedor: ", cin >> nombre;
                if (pedidosManager.existeProveedor(nombre)){
                    Producto prod = Producto();
                    if (cantidad > 1000){
                        mayoreo = true;
                    }
                    prod.setNombreProveedor(nombre);
                    prod.setNombreProducto(nombreproducto);
                    prod.setCantidad(cantidad);
                    pedidosManager.hacerPedido(prod,"Viernes"); 
                    pedidosManager.agregarProveedor(nombre, nombreproducto, 
                    pedidosManager.getProveedorPorNombre(nombreproducto).getCostosT(), mayoreo, 
                    pedidosManager.getProveedorPorNombre(nombreproducto).getCalidad());
                }
                else{
                    cout<<"Error, no existe ese proveedor" << endl;
                }
                
            }
            if (opcion == "4"){
                vector<Producto> producto = inventario.getProductos();
                for (int i = 0; i < producto.size(); i++) {
                    cout << "-------------------"<<endl;
                    cout << "Nombre: "<<producto.at(i).getNombreProducto()<<endl;
                    cout << "Cantidad: "<<producto.at(i).getCantidad()<<endl;
                    cout << "Precio: "<<producto.at(i).getPrecio()<<endl;
                    cout << "-------------------\n"<<endl;
                }
            }
            if (opcion == "5"){
                for (int i = 0; i < pedidosManager.getProveedores().size(); i++) {
                    cout << "-------------------"<<endl;
                    cout << "Nombre: "<< pedidosManager.getProveedores().at(i).getNombre() << endl;
                    cout << "Calidad: "<< pedidosManager.getProveedores().at(i).getCalidad() << endl;
                    cout << "Producto que provee: "<< pedidosManager.getProveedores().at(i).getNombreproducto() << endl;
                    cout << "-------------------\n"<<endl;
                }
            }
        }
    }
};
#endif //PROYECTOFINAL_PEDIDOSVIEW_H