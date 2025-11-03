#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Composite/Sistema.h"
#include "ProgrammingPatterns/Composite/Carpeta.h"

class SistemaCarpeta : public Carpeta
{
public:
	SistemaCarpeta() = default;
	~SistemaCarpeta() = default;

	void MostrarInfo() override {
		std::cout << "Sistema de Carpetas:" << std::endl;
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

