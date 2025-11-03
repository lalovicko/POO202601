#pragma once
#include "ProgrammingPatterns/Builder/ConstructorPizza.h"
#include "ProgrammingPatterns/Builder/Pizza.h"

class BuilderPizzaVegetariana : public ConstructorPizza {
public:
	BuilderPizzaVegetariana() {
		pizza = new Pizza();
	}

	~BuilderPizzaVegetariana() {
		delete pizza;
	}

	void BuildIngredientes() override {
		pizza->addIngrediente(Tomate);
		pizza->addIngrediente(Champinones);
		pizza->addIngrediente(Pina);
	}
	
	Pizza* GetPizza() override {
		return pizza;
	}


private:
	Pizza* pizza;
};