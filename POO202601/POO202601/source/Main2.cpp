#include "Prerequisites.h"
#include "ProgrammingPatterns/Decorator/CafeteriaConcreta.h"
#include "ProgrammingPatterns/Decorator/DecoratorCafeteriaLeche.h"
#include "ProgrammingPatterns/Decorator/DecoratorCafeteriaAzucar.h"

int main() {
	Cafeteria* cafeteria = new CafeteriaConcreta();
	DecoratorLeche* agregarLeche = new DecoratorLeche(cafeteria);
	DecoratorAzucar* agregarAzucar = new DecoratorAzucar(cafeteria);

	cafeteria->prepararCafe();
	agregarLeche->prepararCafe();
	agregarAzucar->prepararCafe();

	delete agregarAzucar;
	delete agregarLeche;
	delete cafeteria;
	return 0;

}