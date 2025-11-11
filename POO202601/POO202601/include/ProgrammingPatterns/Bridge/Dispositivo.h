#pragma once
#include "Prerequisites.h"

class Dispositivo
{
public:
	Dispositivo()  = default;
	~Dispositivo() = default;

	virtual void Encender() = 0;
	virtual void Apagar() = 0;

};

