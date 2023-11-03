/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Deudor.cpp
 * Author: USUARIO
 * 
 * Created on 2 de noviembre de 2023, 11:03 AM
 */
#include <fstream>
#include <iostream>
#include <iomanip>
#include "Deudor.h"
#include "Cliente.h"
#include "ClienteA.h"
#include "ClienteB.h"
#include "ClienteC.h"
using namespace std;


Deudor::Deudor() {
}

Deudor::Deudor(const Deudor& orig) {
}

Deudor::~Deudor() {
}


void Deudor::leedeudor(ifstream& arch) {
    char categoria;
    
    arch>>categoria;
    if(arch.eof())return;
    if(categoria=='A'){
        this->cdeudor=new ClienteA;
    }
    else if(categoria=='B'){
        this->cdeudor=new ClienteB;
    }
    else if(categoria=='C'){
        this->cdeudor=new ClienteC;
    }
    cdeudor->lee(arch,categoria);
}
