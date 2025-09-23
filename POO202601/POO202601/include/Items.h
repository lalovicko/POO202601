#pragma once
# include "Prerequisites.h"
class Item {
public:
	//construcor
	Item(std::string n, int q = 1) :nombre(n), cantidad(q){}

	//devuelve el nombre
	std::string getNombre() const {return nombre;}

	//devuelve cantidad	
	int GetCantidad() const { return cantidad;}

	//aumentr cantidad
	void Agregar() { cantidad++; }

	//quitar cantidad
	void Eliminar() { if (cantidad > 0)cantidad--; }
private:
	std::string nombre;
	int cantidad;

};