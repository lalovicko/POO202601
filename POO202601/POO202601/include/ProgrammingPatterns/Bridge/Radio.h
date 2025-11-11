#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Bridge/Dispositivo.h"

class Radio : public Dispositivo
{
public:
	Radio() = default;
	~Radio() = default;

	void Encender() override {
		std::cout << "Radio Encendido" << std::endl;
	}

	void Apagar() override {
		std::cout << "Radio Apagado" << std::endl;
	}


};

