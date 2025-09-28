#include "Prerequisites.h"
#include "Banco.h"
#include "UsuarioBanco.h"
int
main() {
	Banco BBVA;
	UsuarioBanco Dobeto = BBVA.nuevoUsuario(CuentaBancaria("Dobeto",0001,15000.0));
	UsuarioBanco Tuto = BBVA.nuevoUsuario(CuentaBancaria("Tuto", 0002, 20000.0));
	//Banco Cuenta1("Churro", 2006141227, 15000.0);
	//Banco Cuenta2("Ali", 2006141027, 20000.0);
	std::cout << "Antes de la transferencia: " << std::endl;
	Dobeto.getCuenta().consultarSaldo();
	Tuto.getCuenta().consultarSaldo();
	//Cuenta1.consultarSaldo();
	//Cuenta2.consultarSaldo();
	std::cout << "Realizando transferencia: " << std::endl;
	BBVA.realizarTransferencia(Tuto, Dobeto, 1500.0, 2809);
	Dobeto.getCuenta().aplicarInteres(5);
	//Cuenta1.realizarTranferencia(Cuenta2, 2500);
	Dobeto.getCuenta().consultarSaldo();
	Tuto.getCuenta().consultarSaldo();
	std::cout << "Despues de la transferencia: " << std::endl;
	//Cuenta1.consultarSaldo();
	//Cuenta2.consultarSaldo();
	Dobeto.getCuenta().consultarSaldo();
	Tuto.getCuenta().consultarSaldo();

	return 0;
}