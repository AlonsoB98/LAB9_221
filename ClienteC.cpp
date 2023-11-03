/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ClienteC.cpp
 * Author: USUARIO
 * 
 * Created on 2 de noviembre de 2023, 11:03 AM
 */

#include "ClienteC.h"
#include "Cliente.h"
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

ClienteC::ClienteC() {
    flete=0;
}

ClienteC::ClienteC(const ClienteC& orig) {
}

ClienteC::~ClienteC() {
}

void ClienteC::SetFlete(double flete) {
    this->flete = flete;
}

double ClienteC::GetFlete() const {
    return flete;
}

void ClienteC::lee(ifstream&arch,char cat){
    double flet;
    arch>>flet;
    Cliente::lee(arch,cat);
    SetFlete(flet);
}
