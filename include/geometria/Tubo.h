#ifndef TUBO_H
#define TUBO_H

#include <iostream>
#include <iomanip>


typedef double Real;

class Tubo {
//==============================================================================
//                           funções friend  
//==============================================================================
    friend std :: ostream& operator << (std:: ostream&, const Tubo&);
    friend std :: istream& operator >> (std:: istream&,  Tubo&);
    
//==============================================================================
//             funções friend que alteram parâmetros privados
//==============================================================================

    friend const Tubo DInterno    (const Tubo&, const Real&);
    friend const Tubo Espessura   (const Tubo&, const Real&);
    friend const Tubo DExterno    (const Tubo&, const Real&);
    friend const Tubo Comprimento (const Tubo&, const Real&);
    friend const Tubo Angulo      (const Tubo&, const Real&);
    
    
public:
//==============================================================================
//                      construtoras e destrutora
//==============================================================================     
    Tubo() : dinterno(0), 
             espessura(0), 
             dexterno(0), 
             comprimento(0), 
             angulo(0) {};
    
    Tubo(const Tubo& _orig): dinterno(_orig.dinterno), 
                             espessura(_orig.espessura), 
                             dexterno(_orig.dexterno), 
                             comprimento(_orig.comprimento), 
                             angulo(_orig.angulo) {};
        
    Tubo (const Real& _di, const Real& _esp, const Real& _de, const Real& _comp,
    const Real& _ang) : dinterno(_di), espessura(_esp), dexterno(_de), 
        comprimento(_comp), angulo(_ang) {};
        
    virtual ~Tubo() {};
    
    
//==============================================================================
//                              FUNÇÕES INLINE
//============================================================================== 

    inline  const Real DTubo()    const   {return dinterno;};    //exibir apenas diÃ¢metro interno      
    inline  const Real ESPESSURA()   const   {return espessura;};   //exibir apenas espessura
    inline  const Real DExterno()    const   {return dexterno;};    //exibir apenas centro  
    inline  const Real COMPRIMENTO() const   {return comprimento;}; //exibir apenas comprimentp
    inline  const Real ANGULO()      const   {return angulo;};      //exibir apenas diÃ¢metro externo
    
//==============================================================================
//                        SOBRECARGA DE OPERADORES
//============================================================================== 
    
    const Tubo& operator= (const Tubo&);
    
    
//==============================================================================
//                          VARIÃVEIS PRIVADAS
//==============================================================================    
private:
    
   Real dinterno, 
        espessura, 
        dexterno, 
        comprimento, 
        angulo;

};

#endif /* TUBO_H */