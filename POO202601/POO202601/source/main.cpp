#include "Prerequisites.h"
#include "Banco.h"
#include "UsuarioBanco.h"
int
main() {
	Banco BBVA;
	UsuarioBanco Dobeto = BBVA.nuevoUsuario(CuentaBancaria("Dobeto",0001,15000.0));
	UsuarioBanco Tuto = BBVA.nuevoUsuario(CuentaBancaria("Tuto", 0002, 20000.0));

	std::cout << "Antes de la transferencia: " << std::endl;
	Dobeto.getCuenta().consultarSaldo();
	Tuto.getCuenta().consultarSaldo();

	std::cout << "Realizando transferencia: " << std::endl;
	BBVA.realizarTransferencia(Tuto, Dobeto, 1500.0, 2809);
	Dobeto.getCuenta().aplicarInteres(5);

	Dobeto.getCuenta().consultarSaldo();
	Tuto.getCuenta().consultarSaldo();
	std::cout << "Despues de la transferencia: " << std::endl;

	Dobeto.getCuenta().consultarSaldo();
	Tuto.getCuenta().consultarSaldo();

	std::cout << "Compra: " << std::endl;
	BBVA.Compra(Tuto, "Juguete", 256.50, 2809);

	return 0;
}