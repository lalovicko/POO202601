#pragma once
#include "Prerequisites.h"
//clase base vehiculo
class Vehiculo {
public:
	virtual void descripcion() { std::cout << "Soy un vehiculo." << std::endl; }
	virtual ~Vehiculo() {}
};

//factoria vehiculos
class FactoriaVehiculo {
	public:
	virtual Vehiculo* crearVehiculo()=0;
	virtual ~FactoriaVehiculo() {}
};

//clase coche
class Coche : public Vehiculo {
	public:
	void descripcion() override {
		std::cout << "Soy un coche." << std::endl;
	}
};

//factoria coche
class FactoriaCoche : public FactoriaVehiculo {
	public:
	Vehiculo* crearVehiculo() override {
		return new Coche();
	}
};

//clase bicicleta
class Bicicleta : public Vehiculo {
	public:
	void descripcion() override {
		std::cout << "Soy una bicicleta." << std::endl;
	}
};

//factoria bicicleta
class FactoriaBicicleta : public FactoriaVehiculo {
	public:
	Vehiculo* crearVehiculo() override {
		return new Bicicleta();
	}
};