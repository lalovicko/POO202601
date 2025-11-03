#include "ProgrammingPatterns/Builder/BuilderConcreto.h"

BuilderConcreto::BuilderConcreto() {
	producto = new Producto();
}

void BuilderConcreto::BuildPartA() {
	if(producto) {
		producto->add("Parte A");
	}
}

void BuilderConcreto::BuildPartB() {
	if(producto) {
		producto->add("Parte B");
	}
}

Producto* BuilderConcreto::GetProducto() {
	if (producto) {
		return producto;
	}
	return nullptr;
}