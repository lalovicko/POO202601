#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Bridge/Implementacion.h"

class Abstraccion
{
public:
	Abstraccion(Implementacion* imp) : implementacion(imp) {}
	~Abstraccion() = default;

	virtual void operacion() = 0;

protected:
	Implementacion* implementacion;

};

