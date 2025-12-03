#include "Prerequisites.h"
#include "GameProgrammingPatterns/Command/ControlRemoto.h"
#include "GameProgrammingPatterns/Command/ComandoEncender.h"
#include "GameProgrammingPatterns/Command/ComandoApagar.h"
#include "GameProgrammingPatterns/Command/Luz.h"
#include "GameProgrammingPatterns/Command/Suma.h"
#include "GameProgrammingPatterns/Command/Resta.h"
#include "GameProgrammingPatterns/Command/Division.h"
#include "GameProgrammingPatterns/Command/Multiplicacion.h"
#include "GameProgrammingPatterns/Command/Calculadora.h"




int main() {
    int resultado = 0; //valor inicial

    Suma suma(resultado, 8);
    Resta resta(resultado, 3);
    Multiplicacion multiplicacion(resultado, 4);
    Division division(resultado, 2);

    Calculadora calculadora;

    calculadora.ejecutarOperacion(&suma);
    std::cout << "Despues de suma: " << resultado << std::endl;

    calculadora.ejecutarOperacion(&resta);
    std::cout << "Despues de resta: " << resultado << std::endl;

    calculadora.deshacerUltimaOperacion();
    std::cout << "Despues de deshacer resta: " << resultado << std::endl;

    calculadora.rehacerUltimaOperacion();
    std::cout << "Despues de rehacer resta: " << resultado << std::endl;

    calculadora.ejecutarOperacion(&multiplicacion);
    std::cout << "Despues de multiplicacion: " << resultado << std::endl;

    calculadora.ejecutarOperacion(&division);
    std::cout << "Despues de division: " << resultado << std::endl;

    return 0;
}