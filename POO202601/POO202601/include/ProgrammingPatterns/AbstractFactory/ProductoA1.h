#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/AbstractFactory/ProductoA.h"
//produco contreto A1
class ProductoA1 : public ProductoA
{
	public:
		void OperacionA() override;
};