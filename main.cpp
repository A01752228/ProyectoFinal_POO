#include <iostream>
#include "empleado/RecursosHumanosManager.h"
#include "empleado/EmpleadoView.h"
#include "pedidos/PedidosView.h"
using namespace std;

int main() {
    int opcion=0;
    cout<< "'########::'####:'##::::'##:'########::'######::\n"
           " ##.... ##:. ##:: ###::'###: ##.....::'##... ##:\n"
           " ##:::: ##:: ##:: ####'####: ##::::::: ##:::..::\n"
           " ########::: ##:: ## ### ##: ######:::. ######::\n"
           " ##.....:::: ##:: ##. #: ##: ##...:::::..... ##:\n"
           " ##::::::::: ##:: ##:.:: ##: ##:::::::'##::: ##:\n"
           " ##::::::::'####: ##:::: ##: ########:. ######::\n";
    cout << "¿Que quiere realizar?\n";
    cout << "1) Ir a la clase empleados: "<<endl;
    cout << "2) Ir a la clase pedidos: "<<endl;
    cin >> opcion;
    if (opcion ==1){
        EmpleadoView empleadoView = EmpleadoView();
        empleadoView.menu();
    }
    if (opcion == 2){
        PedidosView pedidosView = PedidosView(PedidosManager(Inventario()));
        pedidosView.menu();
    }
    else
    {
            cout << "Error intente de denuevo";
    }
}
