#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
struct Fecha {
	int dia;
	int mes;
	int anio;

	void GetFecha() {
		//se obtiene la fecha actual del sistema
		time_t t = time(0); //get time now
		tm* now = localtime(&t);

			dia = now->tm_mday;
			mes = now->tm_mon + 1;
			anio = now->tm_year + 1900;
			std::cout << "Fecha actual: " << toString() << std::endl;
	}
	std::string toString()const {
		return std::to_string(dia) + "/" + std::to_string(mes) + "/" + std::to_string(anio);
	}

};