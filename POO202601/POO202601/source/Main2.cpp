#include "Prerequisites.h"
#include "ProgrammingPatterns/Adapter/InterfazVieja.h"
#include "ProgrammingPatterns/Adapter/InterfazNueva.h"
#include "ProgrammingPatterns/Adapter/Adapter.h"

int main() {
	//crear instancia interfaz vieja
	InterfazVieja* objetoViejo = new InterfazVieja();
	InterfazNueva* objetoNuevo = new Adapter(objetoViejo);

	//usar objeto nuevo que adapta el viejo
	objetoNuevo->metodoNuevo();

	delete objetoNuevo;
	delete objetoViejo;

}