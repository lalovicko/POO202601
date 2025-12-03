#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Strategy/IMovementStrategy.h"
class RunMovementStrategy : public IMovementStrategy
{
public:
	RunMovementStrategy() = default;
	~RunMovementStrategy() = default;

	int Velocity(int velocidad) const override
	{
		return static_cast<int>(velocidad * 2.1);
	}

	int Noise(int ruido) const override
	{
		return static_cast<int>(ruido * 0.8);
	}

	int Stamina(int energia) const override
	{
		return static_cast<int>(energia * 0.4);
	}
};

