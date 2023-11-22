//
// Created by PEDRO on 21/11/2023.
//

#ifndef PROJ_CASASIMU_LOGICA_H
#define PROJ_CASASIMU_LOGICA_H

#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

class Logica {

public:
    Logica();
    ~Logica();
    bool prox();
    bool avanca(const vector<string> &commandParts);
    bool hnova(const vector<string> &commandParts);
    bool hrem();
    bool znova(const vector<string> &commandParts);
    bool zrem(const vector<string> &commandParts);
    bool zlista();
    bool zcomp(const vector<string> &commandParts);
    bool zprops(const vector<string> &commandParts);
    bool pmod(const vector<string> &commandParts);
    bool cnovo(const vector<string> &commandParts);
    bool crem(const vector<string> &commandParts);
    bool rnova(const vector<string> &commandParts);
    bool pmuda(const vector<string> &commandParts);
    bool rlista(const vector<string> &commandParts);
    bool rrem(const vector<string> &commandParts);
    bool asoc(const vector<string> &commandParts);
    bool ades(const vector<string> &commandParts);
    bool acom(const vector<string> &commandParts);
    bool psalva(const vector<string> &commandParts);
    bool prepoe(const vector<string> &commandParts);
    bool prem(const vector<string> &commandParts);
    bool plista();
    bool sair();
};


#endif //PROJ_CASASIMU_LOGICA_H
