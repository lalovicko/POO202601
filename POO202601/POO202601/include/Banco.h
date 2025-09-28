#pragma once
#include "Prerequisites.h"
#include "CuentaBancaria.h"
#include "UsuarioBanco.h"

class
	Banco {
public:
	Banco() = default;
			~Banco() = default;

			UsuarioBanco
				nuevoUsuario(CuentaBancaria cuenta) {
				UsuarioBanco usuario(cuenta);
				return usuario;
			}

			//acceder a la tranferencia protegida
			void realizarTransferencia(UsuarioBanco& cuentaOrigen, UsuarioBanco& cuentaDestino, double monto, int noRef) {
				if (monto > 0 && monto <= cuentaOrigen.getCuenta().consultarSaldo()) {
					cuentaOrigen.getCuenta().consultarSaldo() -= monto;
					cuentaDestino.getCuenta().consultarSaldo() += monto;
					std::cout << "Transferencia de " << monto << " de la cuenta " << cuentaOrigen.getCuenta().getNumeroCuenta() << " a la cuenta "
						<< cuentaDestino.getCuenta().getNumeroCuenta() << " Realizada con exito" << " Numero de referencia:" << noRef << std::endl;

				}
				else {
					std::cout << "Monto invalido o saldo insuficiente" << std::endl;
				}
			}

			void Compra(UsuarioBanco& cuentaOrigen, std::string compra, double monto, int noRef) {
				cuentaOrigen.getCuenta().consultarSaldo() -= monto;
				std::cout << "Compra de " << compra << " precio: " << monto
					<< ", total de la cuenta " << cuentaOrigen.getCuenta().consultarSaldo() << " numero referencia: " << noRef;
			}


	

};