#ifndef PROJ_CASASIMU_SENSORES_H
#define PROJ_CASASIMU_SENSORES_H


#include "Regra.h"
#include <vector>
using namespace std;

class Sensor {
    char letra;
    vector<Regra> regras;
public:
    Sensor(char letra);
    ~Sensor();
};


#endif //PROJ_CASASIMU_SENSORES_H
