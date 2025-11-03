#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Decorator/Condimento.h"

class DecoratorAzucar : public Condimento
{
public:
	DecoratorAzucar(Cafeteria* _componente) : Condimento(_componente) {}
	~DecoratorAzucar() = default;

	void prepararCafe() override {
		Condimento::prepararCafe();
		std::cout << " Azucar Agregada." << std::endl;
	}

};
