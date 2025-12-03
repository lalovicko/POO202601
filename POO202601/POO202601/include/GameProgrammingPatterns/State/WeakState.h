#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/State/PlayerState.h"

class WeakState : public PlayerState
{
public:
	WeakState() = default;
	~WeakState() = default;

	void Attack() override {
		std::cout << "Player is weak and attacks weakly." << std::endl;
	}

	void Move() override {
		std::cout << "Player is weak and moves slowly." << std::endl;
	}

	void Defend() override {
		std::cout << "Player is weak and defends poorly." << std::endl;
	}

};

