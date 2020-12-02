#ifndef PROYECTOFINAL_RECURSOSHUMANOSMANAGER_H
#define PROYECTOFINAL_RECURSOSHUMANOSMANAGER_H
#include <vector>
#include "Empleado.h"
#include <iostream>
using namespace std;
class RecursosHumanosManager {
private:
    vector <Empleado> empleados;
    long lastId;


public:
    RecursosHumanosManager() {
        lastId = 1;
    }

    void agregarEmpleado(Empleado& empleado){
        empleado.setId(lastId);
        ++lastId;
        empleados.push_back(empleado);
    }

    void eliminarEmpleadoPorNombre(const string& nombre) {
        for (int i = 0; i < empleados.size(); ++i) {
            if (empleados.at(i).getName() == nombre){
                empleados.erase(empleados.begin() + i);
            }
        }
    }
    void eliminarEmpleadoPorID(long id) {
        for (int i = 0; i < empleados.size(); ++i) {
            if (empleados.at(i).getId() == id){
                empleados.erase(empleados.begin() + i);
            }
        }
    }


    Empleado consultarPorID(long id){
        for (auto & empleado : empleados) {
            if (empleado.getId() == id){
                return empleado;
            }
        }
    }

    const vector<Empleado> &getEmpleados() const {
        return empleados;
    }

};


#endif //PROYECTOFINAL_RECURSOSHUMANOSMANAGER_H
