#pragma once
#include "Prerequisites.h"

class Documento
{
public:
	Documento() = default;
	~Documento() = default;

	virtual Documento* clone() const = 0;
	virtual void info() const = 0;
	virtual void config(std::string value) = 0;

private:

};