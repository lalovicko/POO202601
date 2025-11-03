#include "Prerequisites.h"
#include "ProgrammingPatterns/Decorator/ComponenteConcreto.h"
#include "ProgrammingPatterns/Decorator/DecoratorConcretoA.h"
#include "ProgrammingPatterns/Decorator/DecoratorConcretoB.h"

int main() {
	ComponenteConcreto* Objeto = new ComponenteConcreto();
	DecoratorConcretoA* DecoradorA = new DecoratorConcretoA(Objeto);
	DecoratorConcretoB* DecoradorB = new DecoratorConcretoB(DecoradorA);

	Objeto->operacion();
	DecoradorA->operacion();
	DecoradorB->operacion();

	delete DecoradorB;
	delete DecoradorA;
	delete Objeto;
}