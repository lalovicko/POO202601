#pragma once
# include "Prerequisites.h"
class Estudiante {
public:
	//construcor
	Estudiante(std::string n, int q = 1) :nombre(n), edad(q) {}

	//devuelve el nombre
	std::string getNombre() const { return nombre; }

	//devuelve cantidad	
	int GetCantidad() const { return edad; }

private:
	std::string nombre;
	int edad;

};