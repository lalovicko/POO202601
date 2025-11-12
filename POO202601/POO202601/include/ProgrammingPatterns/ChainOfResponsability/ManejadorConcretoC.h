#pragma once
#include "ProgrammingPatterns/ChainOfResponsability/Manejador.h"

class ManejadorConcretoC : public Manejador {

public:
	ManejadorConcretoC(Manejador* _siguiente, const std::string _name) : Manejador(_siguiente, _name) {}
	~ManejadorConcretoC() = default;

	void manejarPeticion(int peticion) override {
			std::cout << "ManejadorConcretoC maneja la peticion " << peticion << std::endl;

	}

};


