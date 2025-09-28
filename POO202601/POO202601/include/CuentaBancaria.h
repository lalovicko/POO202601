#pragma once
#include "Prerequisites.h"
class CuentaBancaria
{
public:
	CuentaBancaria() = default;
	CuentaBancaria(std::string propietario,int numCuenta, double saldoInicial):
		m_propietario(propietario), m_numeroDeCuenta(numCuenta), m_saldo(saldoInicial) {

	}
	~CuentaBancaria()=default;

	double& 
		consultarSaldo() {
		std::cout << "El saldo de: "<<m_propietario<<", Cuenta: " << m_numeroDeCuenta << " es de:" << m_saldo << std::endl;
		return m_saldo;
	}

	void Interes() {
		double tasaInteres = 5.0; //tasa del 5%
		double interes = calcularInteres(tasaInteres);
		std::cout << "Interes calculado al 5% sobre el saldo de: " << m_saldo << " es: " << interes<<std::endl;
	}

	void aplicarInteres(int tasa) {
		double interes = calcularInteres(tasa);
		m_saldo -= interes;
		std::cout << "Se aplico un interes del " << tasa
			<< "% (" << interes << ") al saldo" << std::endl;
	}

	int getNumeroCuenta()const {
		return m_numeroDeCuenta;
	}

protected:
	void realizarTransferencia(CuentaBancaria& cuentaOrigen, CuentaBancaria& cuentaDestino, double monto,int noRef) {
		if (monto > 0 && monto <= cuentaOrigen.m_saldo) {
			cuentaOrigen.m_saldo-= monto;
			cuentaDestino.m_saldo += monto;
			std::cout << "Transferencia de " << monto << " de la cuenta "	<< cuentaOrigen.m_numeroDeCuenta << " a la cuenta "
				<< cuentaDestino.m_saldo << " Realizada con exito"<<" Numero de referencia:"<<noRef << std::endl;

		}
		else {
			std::cout << "Monto invalido o saldo insuficiente" << std::endl;
		}
	}

private:
	double calcularInteres(int TasaInteres) {
		return m_saldo * TasaInteres / 100;
	}

public:
	std::string m_propietario;

protected:
	int m_numeroDeCuenta;

private:
	double m_saldo;
	int m_noTransaccion;
};

