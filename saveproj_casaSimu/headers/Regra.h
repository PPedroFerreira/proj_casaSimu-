#ifndef PROJ_CASASIMU_REGRA_H
#define PROJ_CASASIMU_REGRA_H
#include <string>
using namespace std;

class Regra {
    int x, y;
    string regra;
public:
    Regra(string regra, int x);
    Regra(string regra, int x, int y);
    ~Regra();
};


#endif //PROJ_CASASIMU_REGRA_H
