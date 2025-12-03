#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Strategy/IMovementStrategy.h"
class WalkMovementStrategy : public IMovementStrategy
{
public:
	WalkMovementStrategy()  = default; 
	~WalkMovementStrategy() = default;

	int Velocity(int velocidad) const override
	{
		return static_cast<int>(velocidad * 1.5);
	}

	int Noise(int ruido) const override
	{
		return static_cast<int>(ruido * 1.2);
	}

	int Stamina(int energia) const override
	{
		return static_cast<int>(energia * 0.6);
	}
	
};

