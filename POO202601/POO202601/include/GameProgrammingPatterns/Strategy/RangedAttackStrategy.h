#pragma once
#include "GameProgrammingPatterns/Strategy/IAttackStrategy.h"
#include "Prerequisites.h"

class RangedAttackStrategy : public IAttackStrategy
{
public:
	RangedAttackStrategy() = default;
	~RangedAttackStrategy() = default;

	int Execute(int BaseDamage) const override
	{
		return static_cast<int>(BaseDamage * 0.9);
	}
};

