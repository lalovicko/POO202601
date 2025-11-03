#pragma once
#include "ProgrammingPatterns/Prototype/DocumentoPrototype.h"

class DocumentoConcretoImagen : public Documento {
public:
	DocumentoConcretoImagen() = default;
	~DocumentoConcretoImagen() = default;

	Documento* clone() const override {
		DocumentoConcretoImagen* copia = new DocumentoConcretoImagen();
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