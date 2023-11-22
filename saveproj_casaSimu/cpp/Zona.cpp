#include <iostream>
#include "../headers/Zona.h"

 int Zona::objectCounter = 0;

Zona::Zona() {
    this->id=++objectCounter;
}

void Zona::addAparelho(Aparelho aparelho) {
    //TODO:Verificar ID's unicos, não podem coincidir dentro de um vector
    aparelhos.push_back(aparelho);
}
void Zona::addSensor(Sensor sensor) {
    //TODO:Verificar ID's unicos, não podem coincidir dentro de um vector
    sensores.push_back(sensor);
}

Zona::~Zona(){

}