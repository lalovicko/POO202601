#pragma once
#include "Prerequisites.h"


//clase base ProductoA
class ProductoA {
	public:
	virtual void OperacionA() = 0;
	virtual ~ProductoA() = default;
};