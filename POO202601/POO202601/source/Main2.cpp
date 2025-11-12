#include "Prerequisites.h"
#include "ProgrammingPatterns/ChainOfResponsability/ManejadorConcretoA.h"
#include "ProgrammingPatterns/ChainOfResponsability/ManejadorConcretoB.h"
#include "ProgrammingPatterns/ChainOfResponsability/ManejadorConcretoC.h"


int main() {
	ManejadorConcretoC manejadorC(nullptr, "none");
	ManejadorConcretoB manejadorB(&manejadorC, "ManejadorC");
	ManejadorConcretoA manejadorA(&manejadorB, "ManejadorB");

	int peticiones[] = { 2, 5, 14, 22, 18, 3, 27, 20 };
	for (int peticion : peticiones) {
		manejadorA.manejarPeticion(peticion);
	}


	return 0;
}