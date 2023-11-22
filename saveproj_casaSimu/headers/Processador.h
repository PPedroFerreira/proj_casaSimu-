#ifndef PROJ_CASASIMU_PROCESSADORES_H
#define PROJ_CASASIMU_PROCESSADORES_H
#include <vector>
#include "Regra.h"

using namespace std;

class Processador {
    vector<Regra> regras;
public:
    Processador();
    void addRegra(Regra regra);
    ~Processador();
};


#endif //PROJ_CASASIMU_PROCESSADORES_H
