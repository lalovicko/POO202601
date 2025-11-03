#include "Prerequisites.h"
#include "ProgrammingPatterns/Prototype/DocumentoPrototype.h"
#include "ProgrammingPatterns/Prototype/DocumentoConcretoTexto.h"
#include "ProgrammingPatterns/Prototype/DocumentoConcretoImagen.h"
int main() {
	Documento* Texto = new DocumentoConcretoTexto();
	Texto->config("Documento de Texto1");

	Documento* Imagen = new DocumentoConcretoImagen();
	Imagen->config("Imagen.jpg");

	Documento* copiaTexto = Texto->clone();
	Documento* copiaImagen = Imagen->clone();

	copiaTexto->config("Copia de Texto1");
	copiaImagen->config("Copia de Imagen.jpg");

	Texto->info();
	Imagen->info();
	copiaTexto->info();
	copiaImagen->info();

	delete Texto;
	delete Imagen;
	delete copiaTexto;
	delete copiaImagen;
}