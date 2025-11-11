#include "Prerequisites.h"
#include "ProgrammingPatterns/Bridge/AbstraccionRefinada.h"
#include "ProgrammingPatterns/Bridge/ImplementacionConcretaA.h"
#include "ProgrammingPatterns/Bridge/ImplementacionConcretaB.h"


int main() {
	Implementacion* implA = new ImplementacionConcretaA();
	Abstraccion* abstraccionA = new AbstraccionRefinada(implA);
	abstraccionA->operacion();
	Implementacion* implB = new ImplementacionConcretaB();
	Abstraccion* abstraccionB = new AbstraccionRefinada(implB);
	abstraccionB->operacion();


	return 0;
}