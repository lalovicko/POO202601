#include "Prerequisites.h"
#include "GameProgrammingPatterns/State/Player.h"
#include "GameProgrammingPatterns/State/RageState.h"
#include "GameProgrammingPatterns/State/WeakState.h"
#include "GameProgrammingPatterns/State/NormalState.h"

int main() {
	Player* player = new Player();
	player->Attack();
	player->Move();
	player->Defend();
	std::cout << "Player gets hurt" << std::endl;
	player->setState(new WeakState());
	player->Attack();
	player->Move();
	player->Defend();
	std::cout << "Player gets angry" << std::endl;
	player->setState(new RageState());
	player->Attack();
	player->Move();
	player->Defend();
	delete player;
    return 0;
}