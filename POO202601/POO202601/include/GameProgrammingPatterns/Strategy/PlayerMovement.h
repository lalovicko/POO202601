#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Strategy/IMovementStrategy.h"

class PlayerMovement
{
public:
	PlayerMovement() = default;
	~PlayerMovement() = default;

	void setMovementStrategy(std::unique_ptr<IMovementStrategy> newStrategy)
	{
		if (!newStrategy) {
			throw std::invalid_argument("newStrategy is nullptr");
		}
		m_movementStrategy = std::move(newStrategy);
	}

	int velocidad(int velocidad) const
	{
		if (!m_movementStrategy) {
			throw std::runtime_error("Movement strategy not set");
		}
		return m_movementStrategy->Velocity(velocidad);
	}

	int ruido(int ruido) const
	{
		if (!m_movementStrategy) {
			throw std::runtime_error("Movement strategy not set");
		}
		return m_movementStrategy->Noise(ruido);
	}

	int energia(int energia) const
	{
		if (!m_movementStrategy) {
			throw std::runtime_error("Movement strategy not set");
		}
		return m_movementStrategy->Stamina(energia);
	}

private:
	std::unique_ptr<IMovementStrategy> m_movementStrategy;
};

