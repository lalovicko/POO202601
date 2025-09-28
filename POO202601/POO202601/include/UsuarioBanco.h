#pragma once
#include "Prerequisites.h"
#include "CuentaBancaria.h"

class UsuarioBanco
{
public:
	UsuarioBanco(CuentaBancaria cuenta) {
		m_cuenta = cuenta;
		m_nombreUsuario = cuenta.m_propietario;
		m_antiguedad.GetFecha();
		m_cashBack = m_cuenta.consultarSaldo() * 0.01; //1% defecto

	}
	~UsuarioBanco()=default;

	CuentaBancaria&
		getCuenta() {
		return m_cuenta;
	}

private:
	CuentaBancaria m_cuenta;
	std::string m_nombreUsuario;
	int m_idUsuario;
	Fecha m_antiguedad;
	std::vector<int>m_historialTransacciones;
	int m_cashBack; //1% 3% 5%

};
