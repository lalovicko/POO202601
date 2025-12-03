#include "Prerequisites.h"
#include "GameProgrammingPatterns/Strategy/RunMovementStrategy.h"
#include "GameProgrammingPatterns/Strategy/PlayerMovement.h"
#include "GameProgrammingPatterns/Strategy/WalkMovementStrategy.h"
#include "GameProgrammingPatterns/Strategy/StealthMovement.h"

int main() {
	PlayerMovement player;
	player.setMovementStrategy(std::make_unique<RunMovementStrategy>());
	int RunMovement = player.velocidad(15);
	player.ruido(15);
	player.energia(15);
	std::cout << "Run Movement - Velocidad: " << RunMovement << ", Ruido: " << RunMovement << ", Energia: " << RunMovement << std::endl;
	player.setMovementStrategy(std::make_unique<WalkMovementStrategy>());
	int WalkMovement = player.velocidad(15);
	player.ruido(15);
	player.energia(15);
	std::cout << "Walk Movement - Velocidad: " << WalkMovement << ", Ruido: " << WalkMovement << ", Energia: " << WalkMovement << std::endl;
	player.setMovementStrategy(std::make_unique<StealthMovementStrategy>());
	int StealthMovement = player.velocidad(15);
	player.ruido(15);
	player.energia(15);
	std::cout << "Stealth Movement - Velocidad: " << StealthMovement << ", Ruido: " << StealthMovement << ", Energia: " << StealthMovement << std::endl;
}