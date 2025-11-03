#include "Prerequisites.h"
#include "ProgrammingPatterns/Builder/ConstructorPizza.h"
#include "ProgrammingPatterns/Builder/Pizza.h"
#include "ProgrammingPatterns/Builder/BuilderPizzaHawaiana.h"
#include "ProgrammingPatterns/Builder/BuilderPizzaVegetariana.h"
int main() {
	ConstructorPizza* Hawaiana = new BuilderPizzaHawaiana();
	ConstructorPizza* Vegetariana = new BuilderPizzaVegetariana();
	Hawaiana->BuildIngredientes();
	Vegetariana->BuildIngredientes();

	Pizza* pizzaHawaiana = Hawaiana->GetPizza();
	std::cout << "Pizza Hawaiana: " << std::endl;
	pizzaHawaiana->showIngredientes();

	Pizza* pizzaVegetariana = Vegetariana->GetPizza();
	std::cout << "Pizza Vegetariana: " << std::endl;
	pizzaVegetariana->showIngredientes();


	delete Hawaiana;
	delete pizzaHawaiana;
	delete Vegetariana;
	delete pizzaVegetariana;


	return 0;
}