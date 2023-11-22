#include <iostream>
#include "../headers/Habitacao.h"

Habitacao::Habitacao(int rows, int cols) {
    cout<<"Habitacao Construida\n";
    zonas = new Zona**[rows];
    for (int i = 0; i < rows; i++) {
        zonas[i] = new Zona*[cols];
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            zonas[i][j] = nullptr;
        }
    }
}

Habitacao::Habitacao() {

}

void Habitacao::addZona(int row, int col) {
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            zonas[i][j] = new Zona();
        }
    }
}

int Habitacao::getRows() {
    return rows;
}

int Habitacao::getCols() {
    return cols;
}

Habitacao::~Habitacao() {

}

