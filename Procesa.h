/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Procesa.h
 * Author: USUARIO
 *
 * Created on 2 de noviembre de 2023, 11:04 AM
 */

#ifndef PROCESA_H
#define PROCESA_H
#include "Pedido.h"
#include "Deudor.h"


class Procesa {
public:
    Procesa();
    Procesa(const Procesa& orig);
    virtual ~Procesa();
    void carga();
    void actualiza();
    void muestra();
    void cargaclientes();
    
private:
    Pedido lpedidos[200];
    Deudor ldeudor[200];
};

#endif /* PROCESA_H */

