#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Composite/Sistema.h"
#include "ProgrammingPatterns/Composite/Archivo.h"

class SistemaArchivo : public Archivo
{
public:
	SistemaArchivo()  = default;
	~SistemaArchivo() = default;

	void MostrarInfo() override {
		std::cout << "Sistema de Archivos:" << std::endl;
		for (const auto& sistema : sistemas) {
			sistema->MostrarInfo();
		}
	}

	void AgregarSistema(Sistema* sistema) {
		sistemas.push_back(sistema);
	}

private:
	std::vector<Sistema*> sistemas;
};

