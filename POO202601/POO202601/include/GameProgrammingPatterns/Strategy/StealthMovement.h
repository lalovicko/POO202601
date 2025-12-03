#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Strategy/IMovementStrategy.h"
class StealthMovementStrategy : public IMovementStrategy
{
public:
	StealthMovementStrategy() = default;
	~StealthMovementStrategy() = default;

	int Velocity(int velocidad) const override
	{
		return static_cast<int>(velocidad * 0.5);
	}

	int Noise(int ruido) const override
	{
		return static_cast<int>(ruido * 0.8);
	}

	int Stamina(int energia) const override
	{
		return static_cast<int>(energia * 0.8);
	}

};

