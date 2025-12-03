#pragma once
#include "GameProgrammingPatterns/Command/Operacion.h"
#include "Prerequisites.h"

class Calculadora {
public:
    Calculadora() = default;
    ~Calculadora() = default;

    void ejecutarOperacion(Operacion* operacion) {
        if (indiceActual < (int)historial.size() - 1) {
            historial.erase(historial.begin() + indiceActual + 1, historial.end());
        }

        operacion->ejecutar();
        historial.push_back(operacion);
        indiceActual++;
    }

    void deshacerUltimaOperacion() {
        if (indiceActual >= 0) {
            historial[indiceActual]->deshacer();
            indiceActual--;
        }
    }

    void rehacerUltimaOperacion() {
        if (indiceActual + 1 < (int)historial.size()) {
            indiceActual++;
            historial[indiceActual]->ejecutar();
        }
    }

private:
    std::vector<Operacion*> historial;
    int indiceActual = -1;
};
