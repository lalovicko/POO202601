#pragma once
#pragma once
#include "ProgrammingPatterns/Decorator/Cafeteria.h"

class Condimento : public Cafeteria
{
public:
	Condimento(Cafeteria* _cafe) : cafe(_cafe) {}
	~Condimento() = default;

	void
		prepararCafe() override {
		cafe->prepararCafe();
	}

private:
	Cafeteria* cafe;
};