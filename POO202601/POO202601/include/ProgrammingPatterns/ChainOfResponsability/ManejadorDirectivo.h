#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/ChainOfResponsability/Solicitud.h"


class ManejadorDirectivo : public Solicitud
{
public:
	ManejadorDirectivo(Solicitud* _siguiente) : Solicitud(_siguiente) {}
	~ManejadorDirectivo() = default;

	void getMonto (int monto) override
	{
		if (monto >= 0 && monto <= 1000)
		{
			std::cout << "Solicitud de $" << monto << " aprobada por el Directivo." << std::endl;
		}

		else
		{
			Solicitud::getMonto(monto);
		}
	}

};
