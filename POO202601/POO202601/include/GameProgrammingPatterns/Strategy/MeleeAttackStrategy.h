#pragma once
#include "GameProgrammingPatterns/Strategy/IAttackStrategy.h"
#include "Prerequisites.h"

class MeleeAttackStrategy : public IAttackStrategy
{
public:
	MeleeAttackStrategy()  = default;
	~MeleeAttackStrategy() = default;

	int Execute (int BaseDamage) const override
	{
		return static_cast<int>(BaseDamage * 1.5); // Melee attacks deal 150% damage
	}
};

