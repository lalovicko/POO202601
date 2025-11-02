#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/AbstractFactory/FactoriaMuebles.h"
#include "ProgrammingPatterns/AbstractFactory/Silla.h"
#include "ProgrammingPatterns/AbstractFactory/Mesa.h"

class MesaModerna : public Mesa {
public:
	void Descripcion() override {
		std::cout << "Mesa moderna" << std::endl;
	}
	void Color() override {
		std::cout << "Color Blanco" << std::endl;
	}
};


class SillaModerna : public Silla {
public:
	void Descripcion() override {
		std::cout << "Silla moderna" << std::endl;
	}
	void Color() override {
		std::cout << "Color Blanco" << std::endl;
	}
};

class FactoriaMueblesModernos : public FactoriaMuebles {
	public:
	Mesa* crearMesa() override {
		return new MesaModerna();
	}
	Silla* crearSilla() override {
		return new SillaModerna();
	}
};