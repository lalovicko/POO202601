#include "Prerequisites.h"
#include "ProgrammingPatterns/AbstractFactory/FabricaConcreta.h"
#include "ProgrammingPatterns/AbstractFactory/FactoriaMueblesRusticos.h"
#include "ProgrammingPatterns/AbstractFactory/FactoriaMueblesModernos.h"
int main() {
	FabricaAbstracta* fabrica = new FabricaConcreta();
	ProductoA* productoA = fabrica->crearProductoA();
	ProductoB* productoB = fabrica->crearProductoB();

	productoA->OperacionA();
	productoB->OperacionB();

	delete fabrica;
	delete productoA;
	delete productoB;

	//Practica meubles
	FactoriaMuebles* fabricaMueblesRusticos = new FactoriaMueblesRusticos();
	Silla* sillaRustica = fabricaMueblesRusticos->crearSilla();
	Mesa* mesaRustica = fabricaMueblesRusticos->crearMesa();

	std::cout << "Muebles Rústicos:" << std::endl;
	sillaRustica->Descripcion();
	sillaRustica->Color();
	mesaRustica->Descripcion();
	mesaRustica->Color();



	return 0;


	
}