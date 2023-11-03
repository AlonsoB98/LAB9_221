/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ClienteB.h
 * Author: USUARIO
 *
 * Created on 2 de noviembre de 2023, 11:03 AM
 */

#ifndef CLIENTEB_H
#define CLIENTEB_H
#include <fstream>
#include "Cliente.h"
using namespace std;

class ClienteB:public Cliente{
public:
    ClienteB();
    ClienteB(const ClienteB& orig);
    virtual ~ClienteB();
    void lee(ifstream&,char);
    void setFlete(double flete);
    double getFlete() const;
    void setDescuento(double descuento);
    double getDescuento() const;
private:
    double descuento;
    double flete;
};

#endif /* CLIENTEB_H */

