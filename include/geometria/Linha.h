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
#include <list>
  


//auto It_Tubos = VecTubos.begin();

//As informações do tubo se dão de forma sequencial, por isso é mais útil utilizar lista

//funçoes para manipular vetores ou listas: transform,for_each

class Linha : public Tubo {
    
public:
    
    
typedef std::list <Tubo>                 VecTubos; 
typedef VecTubos :: iterator             It_tubos;
    
    Linha () : listagem (nullptr) {};
    virtual ~Linha() {};
    
    const Linha& operator= (const Linha&);
    //l1.assign(l1.begin(), l1.end(), l2.begin())
    //apagar a lista - > usar destrutor
    
    
    //c:\softare\petsc........
    // instalar docxygen
    
    void ADDTubo (const Tubo&);
    
private:
    VecTubos             listagem;    
    It_tubos             it_lista(listagem.begin());
    
//    média de valores vetores ou lista
//    soma=accumulate (xbegin(), x.end(), 0.0)
//    media=soma/x.size() -> dispensa o uso do laço
//    s²=SOMAT (xi-mi)²/(mi) desvio pd
    
//    transform(x.begin(), x.end(), diff.begin(), [media](double _x) {return _x-media;}
//    soma= inner_product (diff.begin(), diff.end(), diff.begin(), 0.0)
// desvio = sqrt (soma / diff.size());
    
};

#endif /* LINHA_H */

