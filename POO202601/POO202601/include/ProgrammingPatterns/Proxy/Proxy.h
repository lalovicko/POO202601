#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Proxy/Sujeto.h"
#include "ProgrammingPatterns/Proxy/SujetoReal.h"

class Proxy : public Sujeto {
public:
	Proxy() : sujetoReal(nullptr) {}
	~Proxy() {
		delete sujetoReal;
	}
	void solicitar() override {
		if (sujetoReal == nullptr) {
			sujetoReal = new SujetoReal();
		}
		sujetoReal->solicitar();
	}
private:
	SujetoReal* sujetoReal;
};