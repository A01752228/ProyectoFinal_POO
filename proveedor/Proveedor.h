//
// Created by ferna on 11/27/2020.
//

#ifndef PROYECTOFINAL_PROVEEDOR_H
#define PROYECTOFINAL_PROVEEDOR_H
#include <string>
using namespace std;

class Proveedor {
private:
    long Id;
    string nombre;
public:
    long getId() const {
        return Id;
    }

    void setId(long id) {
        Id = id;
    }


public:
    const string &getNombre() const {
        return nombre;
    }

    void setNombre(const string &nombre) {
        Proveedor::nombre = nombre;
    }

};


#endif //PROYECTOFINAL_PROVEEDOR_H
