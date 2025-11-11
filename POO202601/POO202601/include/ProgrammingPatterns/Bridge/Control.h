#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Bridge/Dispositivo.h"

class Control : public Dispositivo
{
public:
	Control(Dispositivo* dispositivo) : dispositivos(dispositivo) {}
	~Control() = default;

	void Apagar() override
	{
		dispositivos->Apagar();
	}

	void Encender() override
	{
		dispositivos->Encender();
	}

protected:
	Dispositivo* dispositivos;
};

