#ifndef PROYECTOFINAL_EMPLEADO_H
#define PROYECTOFINAL_EMPLEADO_H
#include <string>
using namespace std;


class Empleado {
private:
    string name;
    long id;
    string telefono;
    string direccion;
    float  sueldo;
public:

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Empleado::name = name;
    }

    const string &getTelefono() const {
        return telefono;
    }

    void setTelefono(const string &telefono) {
        Empleado::telefono = telefono;
    }

    const string &getDireccion() const {
        return direccion;
    }

    void setDireccion(const string &direccion) {
        Empleado::direccion = direccion;
    }

    float getSueldo() const {
        return sueldo;
    }

    void setSueldo(float sueldo) {
        Empleado::sueldo = sueldo;
    }


    long getId() const {
        return id;
    }

    void setId(long id) {
        Empleado::id = id;
    }
};


#endif //PROYECTOFINAL_EMPLEADO_H
