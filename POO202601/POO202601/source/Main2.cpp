#include "Prerequisites.h"
#include "ProgrammingPatterns/Bridge/AbstraccionRefinada.h"
#include "ProgrammingPatterns/Bridge/ImplementacionConcretaA.h"
#include "ProgrammingPatterns/Bridge/ImplementacionConcretaB.h"
#include "ProgrammingPatterns/Bridge/Control.h"
#include "ProgrammingPatterns/Bridge/Radio.h"
#include "ProgrammingPatterns/Bridge/Television.h"


int main() {
	Implementacion* implA = new ImplementacionConcretaA();
	Abstraccion* abstraccionA = new AbstraccionRefinada(implA);
	abstraccionA->operacion();
	Implementacion* implB = new ImplementacionConcretaB();
	Abstraccion* abstraccionB = new AbstraccionRefinada(implB);
	abstraccionB->operacion();

	std::cout << std::endl;

	//practica dispositivos
	Radio* radio = new Radio();
	Television* tv = new Television();
	Control* controlRadio = new Control(radio);
	controlRadio->Encender();
	controlRadio->Apagar();
	Control* controlTV = new Control(tv);
	controlTV->Encender();
	controlTV->Apagar();


	return 0;
}