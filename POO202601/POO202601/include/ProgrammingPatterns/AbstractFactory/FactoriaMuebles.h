#pragma once
#include "Prerequisites.h"

class Silla;
class Mesa;

class FactoriaMuebles
{
	public:
	virtual ~FactoriaMuebles() {}
	virtual Silla* crearSilla() = 0;
	virtual Mesa* crearMesa() = 0;
};