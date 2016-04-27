/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Linha.h
 * Author: Leonardo
 *
 * Created on 26 de Abril de 2016, 23:39
 */

#ifndef LINHA_H
#define LINHA_H

#include <geometria/Tubo.h>
#include <iostream>
#include <vector>

typedef std :: vector <Tubo>            Vector_Tubos;   

class Linha : public Tubo {
public:
    Linha() : Tubo() {};
    Linha(const Linha&_orig): linha(_orig.linha){};
    virtual ~Linha() {};
    
    const Linha ADDTubo (const Tubo&);
private:
    Vector_Tubos             linha;
    

};

#endif /* LINHA_H */

