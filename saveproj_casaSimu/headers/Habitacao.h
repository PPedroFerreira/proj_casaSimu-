#ifndef PROJ_CASASIMU_HABITACAO_H
#define PROJ_CASASIMU_HABITACAO_H


#include "Zona.h"

class Habitacao {
    int rows, cols;
    Zona ***zonas;
public:
    Habitacao(int rows, int cols);
    Habitacao();
    void addZona(int row, int col);
    int getRows();
    int getCols();
    ~Habitacao();
};


#endif //PROJ_CASASIMU_HABITACAO_H
