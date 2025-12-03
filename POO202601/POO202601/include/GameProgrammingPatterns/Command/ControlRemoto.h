#pragma once
#include "GameProgrammingPatterns/Command/Comando.h"
#include "Prerequisites.h"

class ControlRemoto
{
public:
	ControlRemoto()  = default;
	~ControlRemoto() = default;

	//presionar boton para ejecutar comando
	void 
	ejecutarComando(Comando* comando) {
		comando->ejecutar();
		_historial.push_back(comando);
	}

	//pressionar boton para deshacer ultimo comando
	void 
	deshacerUltimoComando() {
		if (!_historial.empty()) {
			Comando* ultimoComando = _historial.back();
			ultimoComando->deshacer();
			_historial.pop_back();
		}
	}

private:
	std::vector<Comando*> _historial;
};
