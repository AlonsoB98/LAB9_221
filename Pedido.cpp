/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pedido.cpp
 * Author: USUARIO
 * 
 * Created on 2 de noviembre de 2023, 11:03 AM
 */

#include "Pedido.h"

Pedido::Pedido() {
    codigo=0;
    cantidad=0;
    dni=0;
    fecha=0;
    total=0;
}

Pedido::Pedido(const Pedido& orig) {
}

Pedido::~Pedido() {
}

void Pedido::SetTotal(double total) {
    this->total = total;
}

double Pedido::GetTotal() const {
    return total;
}

void Pedido::SetFecha(int fecha) {
    this->fecha = fecha;
}

int Pedido::GetFecha() const {
    return fecha;
}

void Pedido::SetDni(int dni) {
    this->dni = dni;
}

int Pedido::GetDni() const {
    return dni;
}

void Pedido::SetCantidad(int cantidad) {
    this->cantidad = cantidad;
}

int Pedido::GetCantidad() const {
    return cantidad;
}

void Pedido::SetCodigo(int codigo) {
    this->codigo = codigo;
}

int Pedido::GetCodigo() const {
    return codigo;
}

void Pedido::leepedido(ifstream&arch) {
    int codigo,cantidad,dni,fecha,dd,mm,aa;
    double total;
    char car;
    
    arch>>codigo;
    if(arch.eof())return;
    arch.get();
    arch>>cantidad>>car>>total>>car;
    arch>>dni>>car>>dd>>car>>mm>>car>>aa;
    fecha=10000*aa+100*mm+dd;
    
    SetCodigo(codigo);
    SetCantidad(cantidad);
    SetTotal(total);
    SetDni(dni);
    SetFecha(fecha);
}
