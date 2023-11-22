cmake_minimum_required(VERSION 3.26)
project(proj_casaSimu)

set(CMAKE_CXX_STANDARD 20)

add_executable(proj_casaSimu main.cpp
        cpp/Sensor.cpp
        headers/Sensor.h
        cpp/Processador.cpp
        headers/Processador.h
        cpp/Aparelho.cpp
        headers/Aparelho.h
        cpp/Zona.cpp
        headers/Zona.h
        cpp/Regra.cpp
        headers/Regra.h
        cpp/Habitacao.cpp
        headers/Habitacao.h
        cpp/Propriedade.cpp
        headers/Propriedade.h
        cpp/SimuUI.cpp
        headers/SimuUI.h
        Logica.cpp
        Logica.h
)