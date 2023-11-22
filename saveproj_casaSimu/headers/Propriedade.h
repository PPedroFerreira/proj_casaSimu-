#ifndef PROJ_CASASIMU_PROPRIEDADE_H
#define PROJ_CASASIMU_PROPRIEDADE_H

#include <string>
using namespace std;

class Propriedade {
    string tipo, unidade;
    int min, max;
public:
    Propriedade(string tipo, string unidade, int min, int max);
    ~Propriedade();
};


#endif //PROJ_CASASIMU_PROPRIEDADE_H
