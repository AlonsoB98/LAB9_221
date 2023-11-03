/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Deudor.h
 * Author: USUARIO
 *
 * Created on 2 de noviembre de 2023, 11:03 AM
 */

#ifndef DEUDOR_H
#define DEUDOR_H
#include "Cliente.h"
#include <fstream>
using namespace std;

class Deudor {
public:
    Deudor();
    Deudor(const Deudor& orig);
    virtual ~Deudor();
   void leedeudor(ifstream&arch);
private:
    Cliente*cdeudor;
    
};

#endif /* DEUDOR_H */

