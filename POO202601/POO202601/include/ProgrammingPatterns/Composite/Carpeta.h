#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Composite/Sistema.h"

class Carpeta : public Sistema
{
public:
	Carpeta() = default;
	~Carpeta() = default;

	void MostrarInfo() override {
		std::cout << "Soy una carpeta" << std::endl;
	}

};
