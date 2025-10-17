#include "Prerequisites.h"

class producto {
public:
    producto() = default;

    producto(int peso, std::string etiqueta, double costo, Fecha vencimiento, std::string fabricante,
        Fecha fabricado, std::string tipo, std::string detalle, std::string contenidoExtra, int identificador)
        : peso(peso), m_nombre(etiqueta), m_precio(costo), m_fechaCaducidad(vencimiento),
        m_marca(fabricante), m_fechaCreacion(fabricado), modelo(tipo), descripcion(detalle),
        contenido(contenidoExtra), m_codigo(identificador) {
    }

    ~producto() = default;

    void mostrar(codigo categoria) {
        switch (categoria) {
        case ALIMENTACION:
            std::cout << "Tipo: ALIMENTACION" << std::endl;
            std::cout << "Nombre: " << m_nombre << std::endl;
            std::cout << "Peso: " << peso << " g" << std::endl;
            std::cout << "Precio: $" << m_precio << std::endl;
            std::cout << "Vence: " << m_fechaCaducidad.toString() << std::endl;
            std::cout << "Marca: " << m_marca << std::endl;
            std::cout << "Fabricado: " << m_fechaCreacion.toString() << std::endl;
            std::cout << "Contenido: " << contenido << std::endl;
            std::cout << "Codigo: " << m_codigo << std::endl;
            std::cout << "Comestible" << std::endl;
            break;
        case ROPA:
            std::cout << "Tipo: ROPA" << std::endl;
            std::cout << "Nombre: " << m_nombre << std::endl;
            std::cout << "Precio: $" << m_precio << std::endl;
            std::cout << "Marca: " << m_marca << std::endl;
            std::cout << "Fabricado: " << m_fechaCreacion.toString() << std::endl;
            std::cout << "Modelo: " << modelo << std::endl;
            std::cout << "Detalle: " << descripcion << std::endl;
            std::cout << "Código: " << m_codigo << std::endl;
            std::cout << "No comestible" << std::endl;
            break;
        case ELECTRONICA:
            std::cout << "Tipo: ELECTRONICA" << std::endl;
            std::cout << "Nombre: " << m_nombre << std::endl;
            std::cout << "Precio: $" << m_precio << std::endl;
            std::cout << "Marca: " << m_marca << std::endl;
            std::cout << "Fabricado: " << m_fechaCreacion.toString() << std::endl;
            std::cout << "Modelo: " << modelo << std::endl;
            std::cout << "Detalle: " << descripcion << std::endl;
            std::cout << "Código: " << m_codigo << std::endl;
            std::cout << "No comestible" << std::endl;
            break;
        case HIGIENE:
            std::cout << "Tipo: HIGIENE" << std::endl;
            std::cout << "Nombre: " << m_nombre << std::endl;
            std::cout << "Peso: " << peso << " g" << std::endl;
            std::cout << "Precio: $" << m_precio << std::endl;
            std::cout << "Vence: " << m_fechaCaducidad.toString() << std::endl;
            std::cout << "Marca: " << m_marca << std::endl;
            std::cout << "Fabricado: " << m_fechaCreacion.toString() << std::endl;
            std::cout << "Contenido: " << contenido << std::endl;
            std::cout << "Código: " << m_codigo << std::endl;
            std::cout << "No comestible" << std::endl;
            break;
        default:
            std::cout << "Categoría no reconocida" << std::endl;
            break;
        }
    }

private:
    int peso;
    std::string m_nombre;
    double m_precio;
    Fecha m_fechaCaducidad;
    std::string m_marca;
    Fecha m_fechaCreacion;
    std::string modelo;
    std::string descripcion;
    std::string contenido;
    int m_codigo;
};

int
main() {
    Fecha fecha;
    fecha.GetFecha();

    producto prod1(450, "Queso", 35.75, fecha, "NocheBuena", fecha, "", "", "Queso manchego", 6789);
    prod1.mostrar(ALIMENTACION);
    std::cout << std::endl;

    producto prod2(0, "Sueter", 499.99, fecha, "Zara", fecha, "Invierno 2025", "Sueter azul", "", 1234);
    prod2.mostrar(ROPA);
    std::cout << std::endl;

    producto prod3(0, "Consola", 8999.50, fecha, "Sony", fecha, "PlayStation 5 Slim", "Consola de videojuegos edicion limitada", "", 5678);
    prod3.mostrar(ELECTRONICA);
    std::cout << std::endl;

    producto prod4(300, "Crema", 89.90, fecha, "Nivea", fecha, "", "", "Crema para la cara", 4321);
    prod4.mostrar(HIGIENE);
    std::cout << std::endl;

    return 0;
}
