#pragma once
#include "ProgrammingPatterns/Builder/Builder.h"

class Director
{
public:
	Director(Builder* builder) : builder(builder) {}
	~Director()=default;

	void Construct()
	{
		if (builder)
		{
			builder->BuildPartA();
			builder->BuildPartB();
		}
	}

private:
	Builder* builder;
};

