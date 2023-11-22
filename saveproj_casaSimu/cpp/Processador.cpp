#include <iostream>
#include "../headers/Processador.h"

Processador::Processador() {

}

void Processador::addRegra(Regra regra) {
    //TODO:Verificar ID's unicos, não podem coincidir dentro de um vector
    regras.push_back(regra);
}

Processador::~Processador(){

}