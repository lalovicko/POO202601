#pragma once
#include "Prerequisites.h"
class Mueble {
	public:
	virtual ~Mueble() {}
	virtual void  Color() = 0;
	virtual void Descripcion() = 0;
};