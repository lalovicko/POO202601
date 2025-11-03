#pragma once

class Pizza;

class ConstructorPizza
{
public:
	ConstructorPizza()  = default;
	~ConstructorPizza() = default;

	virtual void BuildIngredientes() = 0;
	virtual Pizza* GetPizza() = 0;

};

