#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Decorator/Componente.h"
class 
	ComponenteConcreto : public Componente{
public:
	ComponenteConcreto() = default;
	~ComponenteConcreto() = default;

	void 
		operacion() {
		std::cout << "Componente Concreto: realizando operacion completada" << std::endl;
	}

};
