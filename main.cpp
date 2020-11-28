#include <iostream>
#include "empleado/RecursosHumanosManager.h"
#include "empleado/EmpleadoView.h"
#include "pedidos/PedidosView.h"


int main() {
//    EmpleadoView empleadoView = EmpleadoView();
//    empleadoView.menu();

    PedidosView pedidosView = PedidosView();
    pedidosView.verPedidosEnCamino();
    pedidosView.menu();
    return 0;
}
