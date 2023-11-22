#include <iostream>
#include "../headers/Aparelho.h"
using namespace std;

Aparelho::Aparelho(char tipo, int idZona) {
    this->letra = tipo;
    this->idZona = idZona;
    this->processador = nullptr;
}

Aparelho::~Aparelho() {

}
