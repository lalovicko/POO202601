#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/State/CarState.h"

class TrafficState : public CarState
{
public:
	TrafficState()  = default;
	~TrafficState() = default;

	void Break() override {
		std::cout << "The car slowly stops in traffic." << std::endl;
	}
	void Accelerate() override {
		std::cout << "The car slowly accelerate in traffic." << std::endl;
	}

};
