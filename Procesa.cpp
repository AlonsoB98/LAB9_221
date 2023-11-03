/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Procesa.cpp
 * Author: USUARIO
 * 
 * Created on 2 de noviembre de 2023, 11:04 AM
 */

#include <fstream>
#include <iostream>
#include <iomanip>
#include "Procesa.h"
#include "Pedido.h"

using namespace std;

Procesa::Procesa() {
}

Procesa::Procesa(const Procesa& orig) {
}

Procesa::~Procesa() {
}

void Procesa::carga() {
    ifstream arch("pedidos4.csv",ios::in);
    if(!arch){
        cout<<"No se pudo abrir el archivo pedidos4.csv"<<endl;
        exit(1);
    }
    int codigo,cantidad,dni,fecha,dd,mm,aa,i=0;
    double total;
    char car;
    
    while(1){
        lpedidos[i].leepedido(arch);
        if(arch.eof())break;
        i++;     
    }
    cargaclientes();
}


void Procesa::cargaclientes() {
    char categoria,*nombre;
    int dni,cantped,i=0;
    double totalped;
    
    ifstream arch("clientes3.csv",ios::in);
    if(!arch){
        cout<<"No se pudo abrir el archivo de clientes3.csv"<<endl;
        exit(1);
    }
    
    while(1){
        ldeudor[i].leedeudor(arch);
        if(arch.eof())break;
        i++;    
    }
}



