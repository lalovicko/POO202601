#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Adapter/InterfazNueva.h"
#include "ProgrammingPatterns/Adapter/InterfazVieja.h"

class Adapter : public InterfazNueva
{
public:
	Adapter(InterfazVieja* _interfazVieja) : interfazVieja(_interfazVieja) {}
	~Adapter() = default;

	void metodoNuevo() override
	{
		std::cout << "Adaptador llamando a metodo viejo" << std::endl;
		interfazVieja->metodoViejo();
	}

private:
	InterfazVieja* interfazVieja;
};


