#include <iostream>
#include "empleado/RecursosHumanosManager.h"
#include "empleado/EmpleadoView.h"
#include "pedidos/PedidosView.h"
using namespace std;

int main() {
    cout << "Pedidos View prueba" << endl;
    PedidosView pedidosview = PedidosView(PedidosManager(Inventario()));
    pedidosview.menu();
    EmpleadoView empleadoview;
    empleadoview.menu();
    return 0;
}