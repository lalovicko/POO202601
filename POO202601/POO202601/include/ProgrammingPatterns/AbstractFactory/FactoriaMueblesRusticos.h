#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/AbstractFactory/FactoriaMuebles.h"
#include "ProgrammingPatterns/AbstractFactory/Silla.h"
#include "ProgrammingPatterns/AbstractFactory/Mesa.h"

class MesaRustica : public Mesa {
public:
	void Descripcion() override {
		std::cout << "Mesa Rustica" << std::endl;
	}
	void Color() override {
		std::cout << "Color Cafe" << std::endl;
	}
};


class SillaRustica : public Silla {
public:
	void Descripcion() override {
		std::cout << "Silla Rustica" << std::endl;
	}
	void Color() override {
		std::cout << "Color Cafe" << std::endl;
	}
};

class FactoriaMueblesRusticos : public FactoriaMuebles {
public:
	Mesa* crearMesa() override {
		return new MesaRustica();
	}
	Silla* crearSilla() override {
		return new SillaRustica();
	}
};