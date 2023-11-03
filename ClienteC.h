/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ClienteC.h
 * Author: USUARIO
 *
 * Created on 2 de noviembre de 2023, 11:03 AM
 */

#ifndef CLIENTEC_H
#define CLIENTEC_H

#include <fstream>
#include "Cliente.h"
using namespace std;

class ClienteC:public Cliente {
public:
    ClienteC();
    ClienteC(const ClienteC& orig);
    virtual ~ClienteC();
    void SetFlete(double flete);
    double GetFlete() const;
    void lee(ifstream&,char);
private:
    double flete;
};

#endif /* CLIENTEC_H */

