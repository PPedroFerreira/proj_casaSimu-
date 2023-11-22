#ifndef PROJ_CASASIMU_SIMUUI_H
#define PROJ_CASASIMU_SIMUUI_H

#include "../Logica.h"

class SimuUI {
    bool flag_sair;
    Logica logica;
public:

    SimuUI(Logica logica);
    void comeca();
    ~SimuUI();
   vector<string> parseCommand(const string &command);
    void exeComandos(const vector<string> &commandParts);
    void executeCommandsFromFile(const string filename);
};


#endif //PROJ_CASASIMU_SIMUUI_H
