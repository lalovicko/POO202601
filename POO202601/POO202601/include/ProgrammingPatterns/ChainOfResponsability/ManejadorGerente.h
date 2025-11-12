#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/ChainOfResponsability/Solicitud.h"


class ManejadorGerente : public Solicitud
{
public:
	ManejadorGerente(Solicitud* _siguiente) : Solicitud(_siguiente) {}
	~ManejadorGerente() = default;

	void getMonto(int monto) override
	{
		if (monto >= 0 && monto <= 5000)
		{
			std::cout << "Solicitud de $" << monto << " aprobada por el Gerente." << std::endl;
		}

		else
		{
			Solicitud::getMonto(monto);
		}
	}

};
