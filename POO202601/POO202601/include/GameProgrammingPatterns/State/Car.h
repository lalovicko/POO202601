#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/State/FreeState.h"
#include "GameProgrammingPatterns/State/TrafficState.h"

class Car
{
public:
	Car() : _CurrentState(new FreeState()) {}
	~Car() = default;

	void setState(CarState* state)
	{
		_CurrentState = state;
	}

	void Break()
	{
		_CurrentState->Break();
	}
	void Accelerate()
	{
		_CurrentState->Accelerate();
	}


private:
	CarState* _CurrentState;
};


