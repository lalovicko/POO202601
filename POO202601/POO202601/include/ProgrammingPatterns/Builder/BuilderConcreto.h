#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Builder/Producto.h"
#include "ProgrammingPatterns/Builder/Builder.h"

class BuilderConcreto : public Builder
{
public:
	BuilderConcreto();
	~BuilderConcreto() = default;

	void BuildPartA() override;
	void BuildPartB() override;
	Producto* GetProducto() override;

private:
	Producto* producto;
};