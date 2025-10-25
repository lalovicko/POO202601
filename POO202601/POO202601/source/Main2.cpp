#include "Prerequisites.h"
#include "ProgrammingPatterns/MiSingleton.h"
#include "ProgrammingPatterns/FactoryMethod.h"

//inicialziamos instancia estatica
RegistroActividad* RegistroActividad::instance = nullptr;

int main() {
	int eleccion;
	RegistroActividad* registro = RegistroActividad::getInstance();
	RegistroActividad* registro2 = RegistroActividad::getInstance();
	std::cout << "Que actividad desea registrar?" << std::endl;
	registro->agregarActividad("Correr 5km");
	registro->agregarActividad("Leer un libro");
	registro2->mostrarRegistros();

	std::cout<<std::endl;

	Fabrica* fabrica = new fabricaA();
	Producto* productoA = fabrica->crearProducto();
	productoA->operacion();
	
	
	delete productoA;
	delete fabrica;
	return 0;
}