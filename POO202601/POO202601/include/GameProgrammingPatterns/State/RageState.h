#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/State/PlayerState.h"

class RageState : public PlayerState
{
public:
	RageState() = default;
	~RageState() = default;

	void Attack() override {
		std::cout << "Player attacks with double damage!" << std::endl;
	}

	void Defend() override {
		std::cout << "Player defends with increased resistance!" << std::endl;
	}

	void Move() override {
		std::cout << "Player moves aggressively!" << std::endl;
	}

};

