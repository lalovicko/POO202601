#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/ChainOfResponsability/Solicitud.h"


class ManejadorDirectorGeneral : public Solicitud
{
public:
	ManejadorDirectorGeneral(Solicitud* _siguiente) : Solicitud(_siguiente) {}
	~ManejadorDirectorGeneral() = default;

	void getMonto(int monto) override{

			std::cout << "Solicitud de $" << monto << " aprobada por el DirectorGeneral." << std::endl;

	}

};