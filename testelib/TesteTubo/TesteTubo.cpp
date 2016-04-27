#include <geometria/Tubo.h>

int main(int argc, char** argv) {

    Tubo                t1, t2(t1), t3(2,3,4,5,6), t4;
    
    std :: cout << "Testando Classe Tubos" << std :: endl;
    std :: cout << "T1 -> " << t1 << std :: endl;
    std :: cout << "T2 -> " << t2 << std :: endl;
    std :: cout << "T3 -> " << t3 << std :: endl;
    
    t4 = t3;
    std :: cout << "T4 -> " << t4 << std :: endl;
    
    std :: cout << "Diâmetro Interno T3: " << t3.DINTERNO()    << std :: endl;
    std :: cout << "Espessura T3: "        << t3.ESPESSURA()   << std :: endl;
    std :: cout << "Diâmetro Externo T3: " << t3.DEXTERNO()    << std :: endl;
    std :: cout << "Comprimento T3: "      << t3.COMPRIMENTO() << std :: endl;
    std :: cout << "Ângulo T3: "           << t3.ANGULO() << std :: endl;
    
    Real R1(4);
    
    
    std :: cout << "Alterando Diâmetro Interno T1: " << DInterno(t1,R1) 
                << std :: endl;
    std :: cout << "Alterando Espessura T1: "        << Espessura(t1,R1) 
                << std :: endl;
    std :: cout << "Alterando Diâmetro Externo T1: " << DExterno(t1,R1)    
                << std :: endl;
    std :: cout << "Alterando Comprimento T1: "      << Comprimento(t1,R1) 
                << std :: endl;
    std :: cout << "Alterando Ângulo T1: "           << Angulo(t1,R1) 
                << std :: endl;
    
    t1 = DInterno(t1,R1);
    t1 = Espessura(t1,R1);
    t1 = DExterno(t1,R1);
    t1 = Comprimento(t1,R1);
    t1 = Angulo(t1,R1);
    
    std :: cout << "T1 -> " << t1 << std :: endl;
    
    
    
    
    
    return 0;
}

