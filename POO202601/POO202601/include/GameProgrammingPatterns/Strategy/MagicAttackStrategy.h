#pragma once
#include "GameProgrammingPatterns/Strategy/IAttackStrategy.h"
#include "Prerequisites.h"

class MagicAttackStrategy : public IAttackStrategy
{
public:
	MagicAttackStrategy() = default;
	~MagicAttackStrategy() = default;

	int Execute(int BaseDamage) const override
	{
		return static_cast<int>(BaseDamage * 1.8); 
	}
};

