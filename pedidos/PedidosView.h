#ifndef PROYECTOFINAL_PEDIDOSVIEW_H
#define PROYECTOFINAL_PEDIDOSVIEW_H
#include "PedidosManager.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class PedidosView {
private:
    PedidosManager pedidosManager;
    void pedidosPredeterminados(){
        Producto prod1 = Producto();
        prod1.setNombreProducto("Pantene");
        prod1.setPrecio(50);
        prod1.setCantidad(5);
        pedidosManager.hacerPedido(prod1,"Lunes");
         }
public:
    void verPedidosEnCamino(){
        vector<Pedido> pedidosConsultados = pedidosManager.verPedidosPorEstado("En camino");
        for (int i = 0; i <pedidosConsultados.size() ; ++i) {
            cout << pedidosConsultados.at(i).getProducto().getNombreProducto()<<endl;
        }

    }
    PedidosView() {
        pedidosManager = PedidosManager();
        pedidosPredeterminados();
    }
    void menu(){
        int opcion;
        cout<< "Que quiere visualizar "<<endl;
        cout << "1) Ver pedidos en camino"<<endl;
        cout << "2) Cambiar estatus de pedido por ID"<<endl;
        cin >> opcion;
        if (opcion == 1){
            verPedidosEnCamino();
        }
        if (opcion == 2){
            long id;
            string status;
            cout << "Dame el ID: "<< endl;
            cin >> id;
            cout << "Dame el estatus dle pedido"<< endl;
            cin >> status;
            pedidosManager.cambiarEstadoDePedido(id,status);
        }



    }


};


#endif //PROYECTOFINAL_PEDIDOSVIEW_H
