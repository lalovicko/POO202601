#pragma once
#include "GameProgrammingPatterns/Command/Operacion.h"
#include "Prerequisites.h"

class Multiplicacion : public Operacion
{
public:
	Multiplicacion(int& _resultado, int _valor) : resultado(_resultado), valor(_valor) {}
	~Multiplicacion() = default;

	void ejecutar() override
	{
		resultado *= valor;
	}

	void deshacer() override
	{
		resultado /= valor;
	}

private:
	int& resultado;
	int valor;
};