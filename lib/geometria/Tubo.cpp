


#include <geometria/Tubo.h>

//==============================================================================
//                           funções friend  
//==============================================================================

std :: ostream& operator << (std:: ostream& _os, const Tubo& _tubo){
    _os << "Diâmetro Interno: "        << _tubo.dinterno 
        << "   Espessura: "            << _tubo.espessura
        << "   Diâmetro Externo: "     << _tubo.dexterno
        << "   Comprimento: "          << _tubo.comprimento
        << "   Ângulo: "               << _tubo.angulo
        << std :: endl;
    return _os;
}


std :: istream& operator >> (std:: istream& _os,  Tubo& _tubo){
    _os >> _tubo.dinterno >> _tubo.espessura >> _tubo.dexterno
        >> _tubo.comprimento >> _tubo.angulo;
    }

//==============================================================================
//             funções friend que alteram parâmetros privados
//==============================================================================

const Tubo DInterno (const Tubo& _tubo, const Real& _real){
    return Tubo (_real, _tubo.espessura, _tubo.dexterno, _tubo.comprimento,
                 _tubo.angulo);
}

const Tubo Espessura (const Tubo& _tubo, const Real& _real){
     return Tubo (_tubo.dinterno, _real, _tubo.dexterno, _tubo.comprimento,
                  _tubo.angulo);
}

const Tubo DExterno (const Tubo& _tubo, const Real& _real){
     return Tubo (_tubo.dinterno, _tubo.espessura, _real, _tubo.comprimento,
                  _tubo.angulo);
}

const Tubo Comprimento (const Tubo& _tubo, const Real& _real){
     return Tubo (_tubo.dinterno, _tubo.espessura, _tubo.dexterno, _real,
                  _tubo.angulo);
}

const Tubo Angulo (const Tubo& _tubo, const Real& _real){
     return Tubo (_tubo.dinterno, _tubo.espessura, _tubo.dexterno, 
                  _tubo.comprimento, _real);
}

//==============================================================================
//                        SOBRECARGA DE OPERADORES
//============================================================================== 

const Tubo& Tubo :: operator= (const Tubo& _tubo){
    if (this != &_tubo){
       dinterno = _tubo.dinterno;
       espessura = _tubo.espessura;
       dexterno = _tubo.dexterno;
       comprimento = _tubo.comprimento;
       angulo = _tubo.angulo;
    }
    return *this;
    
}


