#pragma once
#include "ProgrammingPatterns/Prototype/DocumentoPrototype.h"

class DocumentoConcretoTexto : public Documento {
public:
	DocumentoConcretoTexto() = default;
	~DocumentoConcretoTexto() = default;

	Documento* clone() const override {
		DocumentoConcretoTexto* copia = new DocumentoConcretoTexto();
		copia->config(value);
		return copia;
	}

	void config(const std::string valor) override {
		value = valor;
	}

	void info() const override {
		std::cout << "Documento de texto: " << value << std::endl;
	}

private:
	std::string value;
};
