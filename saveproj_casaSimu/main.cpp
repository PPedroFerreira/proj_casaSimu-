#include <iostream>
#include "headers/SimuUI.h"

int main() {
    cout << "TESTE DE GITBUG" << endl;
    Logica logica = *new Logica();
    SimuUI simuUi = *new SimuUI(logica);
    simuUi.comeca();
}
