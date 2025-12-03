#include "Prerequisites.h"
#include "GameProgrammingPatterns/Strategy/RangedAttackStrategy.h"
#include "GameProgrammingPatterns/Strategy/Player.h"
#include "GameProgrammingPatterns/Strategy/MeleeAttackStrategy.h"
#include "GameProgrammingPatterns/Strategy/MagicAttackStrategy.h"

int main() {
	Player player;
	player.setAttackStrategy(std::make_unique<MeleeAttackStrategy>());
	int meleeDamage = player.attack(50);
	std::cout << "Melee Attack Damage: " << meleeDamage << std::endl;
	player.setAttackStrategy(std::make_unique<RangedAttackStrategy>());
	int rangedDamage = player.attack(50);
	std::cout << "Ranged Attack Damage: " << rangedDamage << std::endl;
	player.setAttackStrategy(std::make_unique<MagicAttackStrategy>());
	int magicDamage = player.attack(50);
	std::cout << "Magic Attack Damage: " << magicDamage << std::endl;

}