#include "Prerequisites.h"
class
	Rectangulo {
public:
	Rectangulo(int alto, int ancho):R_alto(alto),R_ancho(ancho){}
	int getAlto() { return R_alto; }
	int getAncho() { return R_ancho; }
	void area() const {
		int area=R_alto* R_ancho;
		std::cout << "El area del rectangulo es: " << area << std::endl;
		
	}

	void perimetro()const {
		R_alto * 2;
		R_ancho * 2;
		int perimetro = 2*(R_alto + R_ancho);
		std::cout << "El perimetro del rectangulo es: " << perimetro << std::endl;
	}

	


private:
	int R_alto;
	int R_ancho;
};	

int
main() {
	int alto;
	int ancho;
	int opcion;

	Fecha hoy;
	hoy.GetFecha();
	std::cout << "Cual es la altura?" << std::endl;
	std::cin >> alto;
	std::cout << "Cual es el ancho" << std::endl;
	std::cin >> ancho;
	Rectangulo r(alto, ancho);
	std::cout << "Que desea hacer? 1-sacar area 2-sacar perimetro" << std::endl;
	std::cin >> opcion;
	switch (opcion) {
	case 1:
		r.area();
		break;
	case 2:
		r.perimetro();
		break;
	}

	return 0;
}