#pragma once
#include "ProgrammingPatterns/Bridge/Implementacion.h"
#include "Prerequisites.h"

class ImplementacionConcretaB : public Implementacion {

public:
	ImplementacionConcretaB() = default;
	~ImplementacionConcretaB() = default;

	void operacion() override {
		std::cout << "Implementacion Concreta B: operacion() ejecutada." << std::endl;
	}
};

