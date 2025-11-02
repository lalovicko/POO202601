#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/AbstractFactory/ProductoB.h"
//produco contreto B1
class ProductoB1 : public ProductoB
{
public:
	void OperacionB() override;
};