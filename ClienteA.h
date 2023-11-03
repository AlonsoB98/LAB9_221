/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ClienteA.h
 * Author: USUARIO
 *
 * Created on 2 de noviembre de 2023, 11:02 AM
 */

#ifndef CLIENTEA_H
#define CLIENTEA_H
#include "Cliente.h"
#include <fstream>
using namespace std;

class ClienteA:public Cliente{
public:
    ClienteA();
    ClienteA(const ClienteA& orig);
    virtual ~ClienteA();
    void setDescuento(double descuento);
    double getDescuento() const;
    void lee(ifstream&,char);
private:
    double descuento;
};

#endif /* CLIENTEA_H */

