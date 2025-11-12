#pragma once
#include "Prerequisites.h"

class
	Solicitud {
public:
	Solicitud(Solicitud* _siguiente) : siguiente(_siguiente){}
	~Solicitud() = default;

	virtual void getMonto(int monto) {
		if (siguiente) {
			siguiente->getMonto(monto);
		}
	}

private:
	Solicitud* siguiente;
};