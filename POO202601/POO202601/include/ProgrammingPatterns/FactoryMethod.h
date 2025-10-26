#pragma once
#include "Prerequisites.h"

//producto abstracto
class
	Producto {
public:
	virtual void operacion() = 0;
	virtual ~Producto() {}
};

//clase basica fabrica
class Fabrica {
public:
	virtual Producto* crearProducto() = 0;
	virtual ~Fabrica() = default;
};

//producto concreto A
class productoA : public Producto {
public:
	void operacion() override {
		std::cout << "Operacion del Producto A" << std::endl;
	}
};

//fabrica concreta A
class fabricaA : public Fabrica {
public:
	Producto* crearProducto() override {
		return new productoA();
	}
};