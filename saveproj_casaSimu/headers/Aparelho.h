#ifndef PROJ_CASASIMU_APARELHOS_H
#define PROJ_CASASIMU_APARELHOS_H


#include "Processador.h"

class Aparelho {
    int idZona;
    char letra;
    Processador *processador;
public:
    Aparelho(char tipo, int idZona);
    ~Aparelho();
};


#endif //PROJ_CASASIMU_APARELHOS_H
