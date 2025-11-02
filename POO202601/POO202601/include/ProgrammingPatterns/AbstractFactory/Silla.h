#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/AbstractFactory/Mueble.h"
class Silla :public Mueble {
public:
	void Descripcion()override;
	void Color() override;
};