#include <string>
#include "../headers/Propriedade.h"

using namespace std;

Propriedade::Propriedade(string tipo, string unidade, int min, int max) {
    this->tipo = tipo;
    this->unidade = unidade;
    this->min = min;
    this->max = max;
}

Propriedade::~Propriedade() {

}