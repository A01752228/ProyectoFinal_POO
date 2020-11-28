#ifndef PROYECTOFINAL_EMPLEADOVIEW_H
#define PROYECTOFINAL_EMPLEADOVIEW_H

#include "Empleado.h"
#include "RecursosHumanosManager.h"
#include <iostream>
#include <string>

using namespace std;
class EmpleadoView {

private:
    RecursosHumanosManager manager;

    void crearEmpleadosPredeterminados() {
        Empleado emp1 = Empleado();
        emp1.setName("Jorge");
        emp1.setTelefono("5546675879");
        emp1.setDireccion("Rio_de_Janeiro");
        emp1.setSueldo(500);
        manager.agregarEmpleado(emp1);

        Empleado emp2 = Empleado();
        emp2.setName("Iker");
        emp2.setTelefono("5578695034");
        emp2.setDireccion("Texcoco");
        emp2.setSueldo(1500);
        manager.agregarEmpleado(emp2);

        Empleado emp3 = Empleado();
        emp3.setName("Joaquin");
        emp3.setTelefono("5512435678");
        emp3.setDireccion("Columbia_23");
        emp3.setSueldo(420);
        manager.agregarEmpleado(emp3);

        Empleado emp4 = Empleado();
        emp4.setName("Parrish");
        emp4.setTelefono("554578764");
        emp4.setDireccion("Metropolis_150");
        emp4.setSueldo(501);
        manager.agregarEmpleado(emp4);

        Empleado emp5 = Empleado();
        emp5.setName("Alan");
        emp5.setTelefono("5568798525");
        emp5.setDireccion("Techachaltitla");
        emp5.setSueldo(1501);
        manager.agregarEmpleado(emp5);

    }
public:

    EmpleadoView() {
        manager = RecursosHumanosManager();
        crearEmpleadosPredeterminados();
    }

    void init(){
        string opcion = "1";
        while (opcion !=  "no"){
            cout << "\nBienvenido al menu de empleados" << endl;
            cout << "Opciones:" << endl;
            cout << "1) Agregar empleado: " << endl;
            cout << "2) Ver empleados empleado: " << endl;
            cout << "3) Eliminar empleado por nombre: "<< endl;
            cout << "4) Eliminar empleado por ID: " << endl;
            cout << "Ingresa no para salir" << endl;
            cout << "Ingresa una opcion " << endl, cin >> opcion;
            if (opcion == "1"){
                agregarEmpleado();
            }
            if (opcion == "2"){
                verEmpleados();
            }
            if (opcion == "3"){
                verEmpleados();
                string nombre;
                cout << "Ingresa el nombre del empleado que quieres borrar: ", cin >> nombre;
                manager.eliminarEmpleadoPorNombre(nombre);
            }
            if (opcion == "4"){
                verEmpleados();
                long id;
                cout << "Ingresa el nombre del empleado que quieres borrar: ", cin >> id;
                manager.eliminarEmpleadoPorID(id);
            }
        }

    }
    void agregarEmpleado() {
        string opcion = "y";
        while (opcion == "y"){
            Empleado emp = Empleado();
            string nombre;
            string telefono;
            string direccion;
            float  sueldo;
            cout << "Ingresa el nombre de un empleado: ", cin >> nombre;
            cout << "Ingresa el telefono de un empleado: ", cin >> telefono;
            cout << "Ingresa la direccion de un empleado: ", cin >> direccion;
            cout << "Ingresa la sueldo de un empleado: ", cin >> sueldo;
            cout << "Deseas agregar otro empleado: (y/n): ", cin >> opcion;
            emp.setName(nombre);
            emp.setTelefono(telefono);
            emp.setDireccion(direccion);
            emp.setSueldo(sueldo);
            manager.agregarEmpleado(emp);
        }
    }

    void verEmpleados() {
        for (auto & empleado : manager.getEmpleados()) {
            cout <<"---------------------------"<< endl;
            cout <<"ID: "<< empleado.getId() << endl;
            cout <<"Nombre: "<< empleado.getName() << endl;
            cout <<"Telefono: "<< empleado.getTelefono() << endl;
            cout <<"Direccion: "<< empleado.getDireccion() << endl;
            cout <<"Sueldo: "<< empleado.getSueldo()<< endl;
        }
    }

};


#endif //PROYECTOFINAL_EMPLEADOVIEW_H
