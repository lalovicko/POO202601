#pragma once
#include "ProgrammingPatterns/ChainOfResponsability/Manejador.h"

class ManejadorConcretoA : public Manejador {

public:
	ManejadorConcretoA(Manejador* _siguiente, const std::string _name) : Manejador(_siguiente, _name) {}
	~ManejadorConcretoA() = default;

	void manejarPeticion(int peticion) override {
		if (peticion >= 0 && peticion < 10) {
			std::cout << "ManejadorConcretoA maneja la peticion " << peticion << std::endl;
		}
		else {
			Manejador::manejarPeticion(peticion);
		}
	}

};

