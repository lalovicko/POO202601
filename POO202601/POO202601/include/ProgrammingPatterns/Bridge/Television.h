#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Bridge/Dispositivo.h"

class Television : public Dispositivo 
{
public:
	Television() = default;
	~Television() = default;

	void Encender() override {
		std::cout << "Television Encendida" << std::endl;
	}

	void Apagar() override {
		std::cout << "Television Apagada" << std::endl;
	}


};

