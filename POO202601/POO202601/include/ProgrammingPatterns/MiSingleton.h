#pragma once
#include "Prerequisites.h"
class RegistroActividad
{
private:
	RegistroActividad() : data("") {} //constructor privado
	~RegistroActividad() = default; //destructor privado

public:
	static RegistroActividad* getInstance()
	{
		if (instance == nullptr)
		{
			instance = new RegistroActividad();
		}
		return instance;
	}
	std::string
		getData() const { 
		return data;
	}

	void
		setData(std::string value) {
		data = value;
	}

	void agregarActividad(const std::string& actividad) {
		actividades.push_back(actividad);
	}

	void mostrarRegistros() const {
		std::cout << "Registros de Actividades:" << std::endl;
		for (const auto& actividad : actividades) {
			std::cout << "- " << actividad << std::endl;
		}
	}

private:
	//instancia unica de la clase
	static RegistroActividad* instance;
	std::string data;
	std::vector<std::string> actividades;
};

