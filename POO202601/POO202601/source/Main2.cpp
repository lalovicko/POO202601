#include "Prerequisites.h"
#include "ProgrammingPatterns/Adapter/Figuras.h"
#include "ProgrammingPatterns/Adapter/Dibujable.h"
#include "ProgrammingPatterns/Adapter/FigurasAdapter.h"

int main() {
	Circulo* circulo = new Circulo();
	Cuadrado* cuadrado = new Cuadrado();

	Dibujable* adaptadorCirculo = new CirculoAdapter(circulo);
	Dibujable* adaptadorCuadrado = new CuadradoAdapter(cuadrado);

	adaptadorCirculo->dibujar();
	adaptadorCuadrado->dibujar();

	delete adaptadorCirculo;
	delete adaptadorCuadrado;
	delete circulo;
	delete cuadrado;
}