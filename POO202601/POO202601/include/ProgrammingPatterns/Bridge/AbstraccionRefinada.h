#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Bridge/Abstraccion.h"

class AbstraccionRefinada : public Abstraccion
{
public:
	AbstraccionRefinada(Implementacion* imp) : Abstraccion(imp) {}
	~AbstraccionRefinada() = default;
	void operacion() override
	{
		implementacion->operacion();
	}


};

