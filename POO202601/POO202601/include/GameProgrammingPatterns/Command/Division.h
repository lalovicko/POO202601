#pragma once
#include "GameProgrammingPatterns/Command/Operacion.h"
#include "Prerequisites.h"

class Division : public Operacion
{
public:
	Division(int& _resultado, int _valor) : resultado(_resultado), valor(_valor) {}
	~Division() = default;

	void ejecutar() override
	{
		resultado /= valor;
	}

	void deshacer() override
	{
		resultado *= valor;
	}

private:
	int& resultado;
	int valor;
};