#pragma once
#include "GameProgrammingPatterns/Command/Operacion.h"
#include "Prerequisites.h"

class Resta : public Operacion
{
public:
	Resta(int& _resultado, int _valor) : resultado(_resultado), valor(_valor) {}
	~Resta() = default;

	void ejecutar() override
	{
		resultado -= valor;
	}

	void deshacer() override
	{
		resultado += valor;
	}

private:
	int& resultado;
	int valor;
};

