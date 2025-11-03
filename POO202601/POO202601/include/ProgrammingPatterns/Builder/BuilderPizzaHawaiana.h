#pragma once
#include "ProgrammingPatterns/Builder/ConstructorPizza.h"
#include "ProgrammingPatterns/Builder/Pizza.h"

class BuilderPizzaHawaiana : public ConstructorPizza {
public:
	BuilderPizzaHawaiana() {
		pizza = new Pizza();
	}

	~BuilderPizzaHawaiana() {
		delete pizza;
	}

	void BuildIngredientes() override {
		pizza->addIngrediente(Queso);
		pizza->addIngrediente(Tomate);
		pizza->addIngrediente(Jamon);
		pizza->addIngrediente(Pina);
	}
	
	Pizza* GetPizza() override {
		return pizza;
	}


private:
	Pizza* pizza;
};