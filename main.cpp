#include <iostream>
#include "empleado/RecursosHumanosManager.h"
#include "empleado/EmpleadoView.h"
#include "pedidos/PedidosView.h"
using namespace std;

int main() {
    int opcion = 0;
    int contrasena = 23004;
    int intento;
    while(opcion != 4){
        cout<< "'########::'##  ##:'##::::'##:'########::'######::\n"
               " ##.... ##:. #  #:: ###::'###: ##.....::'##... ##:\n"
               " ##:::: ##::  ## :: ####'####: ##::::::: ##:::..::\n"
               " ########:::  ## :: ## ### ##: ######:::. ######::\n"
               " ##.....::::  ## :: ##. #: ##: ##...:::::..... ##:\n"
               " ##:::::::::  ## :: ##:.:: ##: ##:::::::'##::: ##:\n"
               " ##::::::::: #### : ##:::: ##: ########:. ######::\n";
        cout << "¿Que quiere realizar?\n";
        cout << "1) Ir a la clase empleados: "<<endl;
        cout << "2) Ir a la clase pedidos: "<<endl;
        cout << "3) Salir "<<endl;
        cin >> opcion;
        if (opcion == 1){
            cout << "Ingrese la contrasena de 5 digitos \t"; cin >> intento;
            if (contrasena = intento){
                EmpleadoView empleadoView = EmpleadoView();
                empleadoView.menu();
            }
            else{
                cout << "Contrasena incorrecta, intente de nuevo";
            }
        }
        else if (opcion == 2){
            cout << "Ingrese la contrasena de 5 digitos \t"; cin >> intento;
            if (contrasena = intento){ 
                PedidosView pedidosView = PedidosView(PedidosManager(Inventario()));
                pedidosView.menu();
            }
            else{
                cout << "Contrasena incorrecta, intente de nuevo";
            }
        }
        else if(opcion == 3){
            cout << "Adios";
            break;
        }
        else
        {
                cout << "Error intente de de nuevo";
        }
    }
}
