#include "Prerequisites.h"
#include "ProgrammingPatterns/MiSingleton.h"

//inicialziamos instancia estatica
RegistroActividad* RegistroActividad::instance = nullptr;

int main() {
	int eleccion;
	do {
		std::cout << "Que desea hacer? 1-agregar registro 2-mostrar 2-salir" << std::endl;
		std::cin >> eleccion;
		switch (eleccion) {
			case 1: {
				std::string actividad;
				std::cout << "Ingrese la actividad a registrar: ";
				std::cin >> actividad;
				RegistroActividad::getInstance()->agregarRegistro(actividad);
				break;
			}
			
				  case 2: {
				RegistroActividad::getInstance()->mostrarRegistros();
				break;
				  }

	}
	} while (eleccion != 3);
	return 0;
}