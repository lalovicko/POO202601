#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Observer/Observer.h"

class TemperaturaSensor
{
public:
	TemperaturaSensor()  = default;
	~TemperaturaSensor() = default;

	void addObserver(Observer* observer)
	{
		observers.push_back(observer);
	}

	void setTemperatura(int temp)
	{
		temperatura = temp;
		for (auto& observer : observers)
		{
			observer->onNotify(temperatura);
		}
	}

	void notify()
	{
		for (auto& observer : observers)
		{
			observer->onNotify(temperatura);
		}
	}

private:
	std::vector<Observer*> observers;
	int temperatura;
};

