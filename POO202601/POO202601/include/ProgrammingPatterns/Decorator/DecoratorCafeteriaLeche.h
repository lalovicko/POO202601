#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Decorator/Condimento.h"

class DecoratorLeche : public Condimento
{
public:
	DecoratorLeche(Cafeteria* _componente) : Condimento(_componente) {}
	~DecoratorLeche() = default;

	void prepararCafe() override {
		Condimento::prepararCafe();
		std::cout << " Leche Agregada." << std::endl;
	}

};
