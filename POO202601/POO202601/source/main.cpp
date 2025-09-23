#include "Prerequisites.h"
#include "Items.h"
class
	Inventario {
public:
	void AgregarItem(const std::string& Nombre) {
		for (auto& Item : items) { 
			if (Item.getNombre() == Nombre) {  //revisa si no esta este item en el inventario
				Item.Agregar(); //si hay agrega uno a la cantidad
				return;
			}
		}
		items.push_back(Item(Nombre));
	}

	void UsarItem(const std::string& Nombre) {
		for (auto& Item : items) {
			if (Item.getNombre() == Nombre) {  //revisa si esta este item en el inventario
				Item.Eliminar(); //si hay elimina uno a la cantidad
				return;
			}
		}
		std::cout << "No tienes este item" << std::endl;
	}

	void Mostrar() {
		if (items.empty()) {
			std::cout << "No tienes items en el inventario" << std::endl;
		}
		else {
			for (size_t i = 0; i < items.size(); i++) {
				std::cout << i + 1 << ":" << items[i].getNombre() << "x" << items[i].GetCantidad() << std::endl;
			}
		}
	}


private:
	std::vector<Item> items;
};	

int
main() {
	Inventario inv;
	int opcion;
	std::string item;
	do{
	std::cout << "Menu: 1-Agregar Item 2-Usar Item 3-Consultar Inventario 4-Salir" << std::endl;
	std::cin >> opcion;
	switch (opcion) {
	case 1:
		std::cout << "Que item ah conseguido?" << std::endl;
		std::cin >> item;
		inv.AgregarItem(item);
		break;
	case 2:
		std::cout << "Que item desea usar?" << std::endl;
		std::cin >> item;
		inv.UsarItem(item);
		break;
	case 3:
		inv.Mostrar();
		break;
	}
	} while (opcion != 4);
	return 0;
}