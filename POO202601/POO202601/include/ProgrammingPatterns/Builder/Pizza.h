#pragma once
#include "Prerequisites.h"

enum Ingredientes {
	Queso = 1,
	Tomate = 2,
	Pepperoni = 3,
	Champinones = 4,
	Pina = 5,
	Jamon = 6,
};

class Pizza
{
public:
	Pizza() = default;
	~Pizza() = default;

	void
		addIngrediente(Ingredientes ingrediente) {
		ingrediente = ingrediente;
		ingredientes.push_back(ingrediente);
	}

	void showIngredientes() {
		std::cout << "Ingredientes de la pizza:" << std::endl;
		for (const auto& ingrediente : ingredientes) {
			switch (ingrediente) {
			case Queso:
				std::cout << "- Queso" << std::endl;
				break;
			case Tomate:
				std::cout << "- Tomate" << std::endl;
				break;
			case Pepperoni:
				std::cout << "- Pepperoni" << std::endl;
				break;
			case Champinones:
				std::cout << "- Champinones" << std::endl;
				break;
			default:
				break;
			case Pina:
				std::cout << "- Pina" << std::endl;
				break;
			case Jamon:
				std::cout << "- Jamon" << std::endl;
				break;
			}
		}
	}

private:
	Ingredientes ingrediente;
	std::vector<Ingredientes> ingredientes;
};

