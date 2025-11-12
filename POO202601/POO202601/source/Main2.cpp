#include "Prerequisites.h"
#include "ProgrammingPatterns/ChainOfResponsability/ManejadorDirectivo.h"
#include "ProgrammingPatterns/ChainOfResponsability/ManejadorGerente.h"
#include "ProgrammingPatterns/ChainOfResponsability/ManejadorDirectorGeneral.h"


int main() {
	ManejadorDirectorGeneral manejadorDirectorGeneral(nullptr);
	ManejadorGerente manejadorGerente(&manejadorDirectorGeneral);
	ManejadorDirectivo manejadorDirectivo(&manejadorGerente);

	int montosSolicitados[] = { 500, 5000, 20000 };

	for (int monto : montosSolicitados) {
		manejadorDirectivo.getMonto(monto);
		std::cout << std::endl;
	}

	return 0;
}