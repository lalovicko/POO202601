#pragma once
#include "GameProgrammingPatterns/Command/Operacion.h"
#include "Prerequisites.h"

class Suma : public Operacion
{
public:
	Suma(int& _resultado, int _valor) : resultado(_resultado), valor(_valor) {}
	~Suma() = default;

	void ejecutar() override
	{
		resultado += valor;
	}

	void deshacer() override
	{
		resultado -= valor;
	}

private:
	int& resultado;
	int valor;
};





