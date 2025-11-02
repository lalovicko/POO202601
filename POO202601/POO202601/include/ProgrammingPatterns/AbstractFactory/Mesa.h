#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/AbstractFactory/Mueble.h"
class Mesa :public Mueble {
public:
	void Descripcion()override;
	void Color() override;
};