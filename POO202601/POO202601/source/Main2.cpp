#include "Prerequisites.h"
#include "ProgrammingPatterns/MiSingleton.h"

//inicialziamos instancia estatica
MiSingleton* MiSingleton::instance = nullptr;

int main() {
	//usamos la esctructura singleton
	MiSingleton* singleton = MiSingleton::getInstance();
	singleton->setData(42);
	std::cout << "Valor del singleton : " << singleton->getData() << std::endl;
}