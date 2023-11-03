/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ClienteB.cpp
 * Author: USUARIO
 * 
 * Created on 2 de noviembre de 2023, 11:03 AM
 */
#include <fstream>
#include <iostream>
#include <iomanip>
#include "ClienteB.h"
using namespace std;


ClienteB::ClienteB() {
    descuento=0;
    flete=0;
}

void ClienteB::setFlete(double flete) {
    this->flete = flete;
}

double ClienteB::getFlete() const {
    return flete;
}

void ClienteB::setDescuento(double descuento) {
    this->descuento = descuento;
}

double ClienteB::getDescuento() const {
    return descuento;
}

ClienteB::ClienteB(const ClienteB& orig) {
}

ClienteB::~ClienteB() {
}

void ClienteB::lee(ifstream&arch,char cat){
    double desc,flet;
    char car;
    arch>>desc>>car>>flet>>car;
    Cliente::lee(arch,cat);
    setDescuento(desc);
    setFlete(flet);
}




