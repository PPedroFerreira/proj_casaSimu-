#include <iostream>
#include "../headers/Regra.h"

using namespace std;

Regra::Regra(string regra, int x) {
    this->regra = regra;
    this->x = x;
}
Regra::Regra(string regra, int x, int y) {
    this->regra = regra;
    this->x = x;
    this->y = y;
}

Regra::~Regra() {

}
