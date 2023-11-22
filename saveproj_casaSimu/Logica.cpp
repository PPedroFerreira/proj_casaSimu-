//
// Created by PEDRO on 21/11/2023.
//

#include "Logica.h"

using namespace std;

Logica::Logica() {

}

Logica::~Logica() {

}

bool Logica::prox() {
    return true;
}

bool Logica::avanca(const vector<string> &commandParts) {
    int n;
    if (commandParts.size() >= 2) {
        n = stoi(commandParts[1]);
        return true;

    } else
        return false;
}

bool Logica::hnova(const vector<string> &commandParts) {
    if (commandParts.size() >= 3) {
        int numLinhas = stoi(commandParts[1]);
        int numColunas = stoi(commandParts[2]);
        return true;
    } else
        return false;
}

bool Logica::hrem() {
    return true;
}

bool Logica::znova(const vector<string> &commandParts) {
    if (commandParts.size() >= 3) {
        int linha = stoi(commandParts[1]);
        int coluna = stoi(commandParts[2]);
        return true;
    } else
        return false;
}

bool Logica::zrem(const vector<string> &commandParts) {
    if (commandParts.size() >= 2) {
        int idZona = stoi(commandParts[1]);
        return true;
    } else
        return false;
}

bool Logica::zlista() {
    return true;
}

bool Logica::zcomp(const vector<string> &commandParts) {
    if (commandParts.size() >= 2) {
        int idZona = stoi(commandParts[1]);
        return true;
    } else
        return false;
}

bool Logica::zprops(const vector<string> &commandParts) {
    if (commandParts.size() >= 2) {
        int idZona = stoi(commandParts[1]);
        return true;
    } else
        return false;
}

bool Logica::pmod(const vector<string> &commandParts) {
    if (commandParts.size() >= 4) {
        int idZona = stoi(commandParts[1]);
        string nome = commandParts[2];
        int valor = stoi(commandParts[3]);
        return true;
    } else
        return false;
}

bool Logica::cnovo(const vector<string> &commandParts) {

    if (commandParts.size() == 4) {
        int idZona = stoi(commandParts[1]);
        char tipo = commandParts[2][0];
        string comando = commandParts[3];

        if (tipo == 's' || tipo == 'p' || tipo == 'a') {
            //criar os aparelhos
            return true;
        } else
            return false;
    } else
        return false;
}

bool Logica::crem(const vector<string> &commandParts) {
    if (commandParts.size() == 4) {
        int idZona = stoi(commandParts[1]);
        char tipo = commandParts[2][0];
        int id = stoi(commandParts[3]);

        if (tipo == 's' || tipo == 'p' || tipo == 'a') {
            //criar os aparelhos
            return true;
        } else
            return false;
    } else
        return false;
}

bool Logica::rnova(const vector<string> &commandParts) {
    /* É PRECISO MUDAR A LOGICA */
    if(commandParts.size() >= 6 && commandParts.size() <= 7){
        int idZona = stoi(commandParts[1]);
        int idProcRegras = stoi(commandParts[2]);
        string regra = commandParts[3];
        int idSensor = stoi(commandParts[4]);
        int param1, param2;

        if (commandParts.size() == 6) {
            param1 = stoi(commandParts[5]);
            return true;
        } else if (commandParts.size() == 7) {
            param1 = stoi(commandParts[5]);
            param2 = stoi(commandParts[6]);
            return true;
        }
    }
    else
        return false;
}

bool Logica::pmuda(const vector<string> &commandParts) {
    if (commandParts.size() >= 4) {
        int idZona = stoi(commandParts[1]);
        int idProcRegras = stoi(commandParts[2]);
        string novoComando = commandParts[3];
        return true;
    } else
        return false;
}

bool Logica::rlista(const vector<string> &commandParts) {
    if (commandParts.size() >= 3) {
        int idZona = stoi(commandParts[1]);
        int idProcRegras = stoi(commandParts[2]);
        return true;
    } else
        return false;
}

bool Logica::rrem(const vector<string> &commandParts) {
    if (commandParts.size() >= 4) {
        int idZona = stoi(commandParts[1]);
        int idProcRegras = stoi(commandParts[2]);
        int idRegra = stoi(commandParts[3]);
        return true;
    } else
        return false;
}

bool Logica::asoc(const vector<string> &commandParts) {
    if (commandParts.size() >= 4) {
        int idZona = stoi(commandParts[1]);
        int idProcRegras = stoi(commandParts[2]);
        int idAparelho = stoi(commandParts[3]);
        return true;
    } else
        return false;
}

bool Logica::ades(const vector<string> &commandParts) {
    if (commandParts.size() >= 4) {
        int idZona = stoi(commandParts[1]);
        int idProcRegras = stoi(commandParts[2]);
        int idAparelho = stoi(commandParts[3]);
        return true;
    } else
        return false;
}

bool Logica::acom(const vector<string> &commandParts) {
    if (commandParts.size() >= 4) {
        int idZona = stoi(commandParts[1]);
        int idAparelho = stoi(commandParts[2]);
        string comando = commandParts[3];
        return true;
    } else
        return false;
}

bool Logica::psalva(const vector<string> &commandParts) {
    if (commandParts.size() >= 4) {
        int idZona = stoi(commandParts[1]);
        int idProcRegras = stoi(commandParts[2]);
        string nome = commandParts[3];
        return true;
    } else
        return false;
}

bool Logica::prepoe(const vector<string> &commandParts) {
    if (commandParts.size() >= 2) {
        string nome = commandParts[1];
        return true;

    } else
        return false;
}

bool Logica::prem(const vector<string> &commandParts) {
    if (commandParts.size() >= 2) {
        string nome = commandParts[1];
        return true;

    } else
        return false;
}

bool Logica::plista() {
    return true;
}

bool Logica::sair() {
    return true;
    //TODO: ELIMINAR TODAS AS ESTRUTURAS DE DADOS "FREE"
}

