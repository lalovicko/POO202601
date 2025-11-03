#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Adapter/Figuras.h"
#include "ProgrammingPatterns/Adapter/Dibujable.h"

class CirculoAdapter : public Dibujable
{
public:
	CirculoAdapter(Circulo* _circulo) : circulo(_circulo) {}
	~CirculoAdapter() = default;

	void dibujar() override
	{
		std::cout << "Adaptando Circulo a Dibujable: " << std::endl;
		circulo->dibujarCirculo();
	}

private:
	Circulo* circulo;
};

class CuadradoAdapter : public Dibujable
{
public:
	CuadradoAdapter(Cuadrado* _cuadrado) : cuadrado(_cuadrado) {}
	~CuadradoAdapter() = default;

	void dibujar() override
	{
		std::cout << "Adaptando Cuadrado a Dibujable: " << std::endl;
		cuadrado->dibujarCuadrado();
	}

private:
	Cuadrado* cuadrado;
};
