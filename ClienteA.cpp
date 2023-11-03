/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ClienteA.cpp
 * Author: USUARIO
 * 
 * Created on 2 de noviembre de 2023, 11:02 AM
 */

#include "ClienteA.h"
#include "Cliente.h"
using namespace std;

ClienteA::ClienteA() {
    descuento=0;
}

void ClienteA::setDescuento(double descuento) {
    this->descuento = descuento;
}

double ClienteA::getDescuento() const {
    return descuento;
}

ClienteA::ClienteA(const ClienteA& orig) {
}

ClienteA::~ClienteA() {
}

void ClienteA::lee(ifstream&arch,char cat){
    double desc;
    arch>>desc;
    arch.get();
    Cliente::lee(arch,cat);
    setDescuento(desc);
}
