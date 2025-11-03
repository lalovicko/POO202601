#include "Prerequisites.h"
#include "ProgrammingPatterns/Prototype/Prototype.h"
#include "ProgrammingPatterns/Prototype/PrototypeConcreto.h"
int main() {
	Prototype* prototipo1 = new PrototypeConcreto();
	prototipo1->config("Ejemplo");

	//clonar	
	Prototype* prototipo2 = prototipo1->clone();
	prototipo2->config("Ejemplo Clonado");
	prototipo1->info();
	prototipo2->info();
	delete prototipo1;
	delete prototipo2;
	return 0;
}