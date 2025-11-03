#pragma once
#include "ProgrammingPatterns/Prototype/Prototype.h"

class PrototypeConcreto : public Prototype {
public:
	PrototypeConcreto() = default;
	~PrototypeConcreto()= default;

	Prototype* clone() const override {
		PrototypeConcreto* copia = new PrototypeConcreto();
		copia->config(value);
		return copia;
	}

	void config(const std::string valor) override {
		value = valor;
	}

	void info() const override {
		std::cout << "prtotype concreto con valor: " << value << std::endl;
	}

private:
	std::string value;
};

