#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Composite/Sistema.h"

class Archivo : public Sistema
{
public:
	Archivo()  = default;
	~Archivo() = default;

	void MostrarInfo() override {
		std::cout << "Soy un archivo" << std::endl;
	}

};


