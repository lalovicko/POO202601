#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Proxy/Sujeto.h"

class SujetoReal : public Sujeto
{
public:
	SujetoReal()  = default;
	~SujetoReal() = default;

	void solicitar() override {
		std::cout << "SujetoReal: Procesando Solicitud" << std::endl;
	}


};

