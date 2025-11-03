#include "Prerequisites.h"
#include "ProgrammingPatterns/Composite/Sistema.h"
#include "ProgrammingPatterns/Composite/SistemaCarpeta.h"
#include "ProgrammingPatterns/Composite/SistemaArchivo.h"


int main() {
	Archivo* archivo1 = new Archivo();
	Archivo* archivo2 = new Archivo();
	SistemaArchivo* sistemaArchivo = new SistemaArchivo();
	sistemaArchivo->AgregarSistema(archivo1);
	sistemaArchivo->AgregarSistema(archivo2);
	sistemaArchivo->MostrarInfo();

	Carpeta* carpeta = new Carpeta();
	Carpeta* carpeta2 = new Carpeta();
	SistemaCarpeta* sistemaCarpeta = new SistemaCarpeta();
	sistemaCarpeta->AgregarSistema(carpeta);
	sistemaCarpeta->AgregarSistema(carpeta2);
	sistemaCarpeta->MostrarInfo();

	delete archivo1;
	delete archivo2;
	delete carpeta;
	delete carpeta2;
	delete sistemaArchivo;
	delete sistemaCarpeta;





	return 0;
}