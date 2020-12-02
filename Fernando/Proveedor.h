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
    string nombre; // del proveedor
    string nombreproducto;
    int costosT; //Costos de transporte
    bool mayoreo; //Es el pedido mayoreo o no
    int calidad; // Calidad de 1 a 10
public:
    Proveedor() = default;

    Proveedor(string nombre, string nombreproducto, int costosT, bool mayoreo, int calidad){
        this->nombre = nombre;
        this->nombreproducto = nombreproducto;
        this->costosT = costosT;
        this->mayoreo = mayoreo;
        this->calidad = calidad;
    }

    long getId() const {
        return Id;
    }

    void setId(long id) {
        Id = id;
    }

    const string &getNombre() const {
        return nombre;
    }

    void setNombre(const string &nombre) {
        Proveedor::nombre = nombre;
    }

    const string &getNombreproducto() const {
        return nombreproducto;
    }

    void setNombreproducto(const string &nombreproducto) {
        Proveedor::nombreproducto = nombreproducto;
    }

    const int &getCostosT() const {
        return costosT;
    }

    void setCostosT(const int &costosT) {
        Proveedor::costosT = costosT;
    }

    const bool &getMayoreo() const {
        return mayoreo;
    }

    void setMayoreo(const bool &mayoreo) {
        Proveedor::mayoreo = mayoreo;
    }

    const int &getCalidad() const {
        return calidad;
    }

    void setCalidad(const int &calidad) {
        Proveedor::calidad = calidad;
    }
};


#endif //PROYECTOFINAL_PROVEEDOR_H
