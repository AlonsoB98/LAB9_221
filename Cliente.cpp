/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cliente.cpp
 * Author: USUARIO
 * 
 * Created on 2 de noviembre de 2023, 11:02 AM
 */
#include <cstring>
#include "Cliente.h"

using namespace std;

Cliente::Cliente() {
    dni=0;
    nombre=nullptr;
    cantped=0;
    totalped=0;
}

Cliente::Cliente(const Cliente& orig) {
}

Cliente::~Cliente() {
    delete nombre;
}

void Cliente::SetTotalped(double totalped) {
    this->totalped = totalped;
}

double Cliente::GetTotalped() const {
    return totalped;
}

void Cliente::SetCantped(int cantped) {
    this->cantped = cantped;
}

int Cliente::GetCantped() const {
    return cantped;
}

void Cliente::SetNombre(const char* cad) {
    if(nombre!=nullptr)delete nombre;
    nombre=new char[strlen(cad)+1];
    strcpy(nombre,cad);
}

void Cliente::GetNombre(char*cad) const {
    strcpy(cad,nombre);
}

void Cliente::SetCategoria(char categoria) {
    this->categoria = categoria;
}

char Cliente::GetCategoria() const {
    return categoria;
}

void Cliente::SetDni(int dni) {
    this->dni = dni;
}

int Cliente::GetDni() const {
    return dni;
}

void Cliente::lee(ifstream&arch,char cat){
    int dni;
    char nombre[200],car;
    
    arch>>dni>>car;
    arch.getline(nombre,200);
    this->SetDni(dni);
    this->SetNombre(nombre);
    this->SetCategoria(cat);

}