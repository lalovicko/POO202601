#pragma once
#include "ProgrammingPatterns/Bridge/Implementacion.h"
#include "Prerequisites.h"

class ImplementacionConcretaA : public Implementacion {

public:
	ImplementacionConcretaA()  = default; 
	~ImplementacionConcretaA() = default;

	void operacion() override {
		std::cout << "Implementacion Concreta A: operacion() ejecutada." << std::endl;
	}
};

