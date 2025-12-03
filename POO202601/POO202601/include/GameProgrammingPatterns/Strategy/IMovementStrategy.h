#pragma once
class IMovementStrategy
{
public:
	virtual ~IMovementStrategy() = default;
	virtual int Velocity(int velocidad) const = 0;
	virtual int Noise(int ruido) const = 0;
	virtual int Stamina(int energia) const = 0;
};
