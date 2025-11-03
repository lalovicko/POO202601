#pragma once
#include "Prerequisites.h"
class Circulo
{
public:
	Circulo()  = default;
	~Circulo() = default;

	virtual void 
	dibujarCirculo() {
		std::cout << "0" << std::endl;
	}
};


class Cuadrado
{
public:
	Cuadrado()  = default;
	~Cuadrado() = default;

	virtual void 
	dibujarCuadrado() {
		std::cout << "[]" << std::endl;
	}

};

 