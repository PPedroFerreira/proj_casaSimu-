#ifndef PROJ_CASASIMU_ZONA_H
#define PROJ_CASASIMU_ZONA_H
#include "Aparelho.h"
#include "Sensor.h"
#include "Propriedade.h"
#include <vector>
using namespace std;

class Zona {
    static int objectCounter;
    long int id;

    vector<Propriedade> propriedades;
    vector<Aparelho> aparelhos;
    vector<Sensor> sensores;
public:
    Zona();
    void addAparelho(Aparelho aparelho);
    void addSensor(Sensor sensor);
    ~Zona();

};


#endif //PROJ_CASASIMU_ZONA_H
