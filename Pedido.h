/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pedido.h
 * Author: USUARIO
 *
 * Created on 2 de noviembre de 2023, 11:03 AM
 */

#ifndef PEDIDO_H
#define PEDIDO_H
#include <fstream>
using  namespace std;

class Pedido {
public:
    Pedido();
    Pedido(const Pedido& orig);
    virtual ~Pedido();
    void SetTotal(double total);
    double GetTotal() const;
    void SetFecha(int fecha);
    int GetFecha() const;
    void SetDni(int dni);
    int GetDni() const;
    void SetCantidad(int cantidad);
    int GetCantidad() const;
    void SetCodigo(int codigo);
    int GetCodigo() const;
    void leepedido(ifstream&);
private:
    int codigo;
    int cantidad;
    int dni;
    int fecha;
    double total;
};

#endif /* PEDIDO_H */

