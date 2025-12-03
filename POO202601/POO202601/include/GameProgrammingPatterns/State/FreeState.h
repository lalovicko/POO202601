#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/State/CarState.h"

class FreeState : public CarState
{
public:
	FreeState()  = default;
	~FreeState() = default;

	void Break() override {
		std::cout << "The car starts to slow down" << std::endl;
	}

	void Accelerate() override {
		std::cout << "The car accelerate" << std::endl;
	}


};

