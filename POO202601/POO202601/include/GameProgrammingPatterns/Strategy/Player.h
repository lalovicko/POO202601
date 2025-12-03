#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Strategy/IAttackStrategy.h"

class Player
{
public:
	Player()  = default;
	~Player() = default;

	void setAttackStrategy(std::unique_ptr<IAttackStrategy> newStrategy)
	{
		if (!newStrategy) {
			throw std::invalid_argument("newStrategy is nullptr");
		}
		m_attackStrategy = std::move(newStrategy);
	}

	int attack(int baseDamage)
	{
		if (!m_attackStrategy) {
			throw std::runtime_error("Attack strategy not set");
		}
		return m_attackStrategy->Execute(baseDamage);
	}
private:
	std::unique_ptr<IAttackStrategy> m_attackStrategy;
};

