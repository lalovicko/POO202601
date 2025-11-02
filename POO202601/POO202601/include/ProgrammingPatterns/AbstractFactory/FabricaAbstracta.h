#pragma once
#include "Prerequisites.h"

class ProductoA;
class ProductoB;

//fabrica abstracta
class FabricaAbstracta
{
	public:
	virtual ~FabricaAbstracta() = default;
	virtual ProductoA* crearProductoA() const = 0;
	virtual ProductoB* crearProductoB() const = 0;
};