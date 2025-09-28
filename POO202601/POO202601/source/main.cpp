#include "Prerequisites.h"
#include "Estudiantes.h"
class
	Circulo {
public:
	Circulo(float radio) :m_radio(radio){}
	float getRadio()const { return m_radio; }
	void area() const {
		float area = m_pi * (m_radio * m_radio);
		std::cout << "El area del circulo es " << area << std::endl;
	}
	void perimetro()const {
		float perimetro = m_pi * (m_radio * 2);
		std::cout << "El perimetro del circulo es " << perimetro << std::endl;
	}
private:
	float m_radio;
	float m_pi = 3.1416f;
};	

class
	Lista {
public:
	// Agregar estudiante
	void agregarEstudiante(const Estudiante& e) {
		estudiantes.push_back(e);
	}

	// Mostrar los estudiantes
	void mostrarEstudiantes() const {
		std::cout << "    Lista de Estudiantes "<<std::endl;
		for (size_t i = 0; i < estudiantes.size(); i++) {
			std::cout << i + 1 << ". " << estudiantes[i].getNombre() << ", Edad: " << estudiantes[i].GetCantidad() << std::endl;
		}
	}

private:
	std::vector<Estudiante> estudiantes;

};

int
main() {
	float radio;
	int opcion;
	Lista lista;
	int numero;
	std::cout << "Cuantos estudiantes desea ingresar? ";
	std::cin >> numero;

	for (int i = 0; i < numero; i++) {
		std::string nombre;
		int edad;
		std::cout << "Nombre del estudiante " << i + 1 << ": ";
		std::cin >> nombre;
		std::cout << "Edad del estudiante " << i + 1 << ": ";
		std::cin >> edad;

		Estudiante e(nombre, edad);
		lista.agregarEstudiante(e);
	}

	lista.mostrarEstudiantes();
	Fecha hoy;
	hoy.GetFecha();
	std::cout << "Cual es el radio?" << std::endl;
	std::cin >> radio;
	Circulo c(radio);
	
	std::cout << "Que desea hacer? 1-sacar area 2-sacar perimetro" << std::endl;
	std::cin >> opcion;
	switch (opcion) {
	case 1:
		c.area();
		break;
	case 2:
		c.perimetro();
		break;
	}

	return 0;
}