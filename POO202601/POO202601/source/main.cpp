#include "Prerequisites.h"
class
	Character {
public:
	Character(int health) : m_health(health){}

	int
		getHealth()const {
		return m_health;
	}

private:
	int m_health;
};

int
main() {
	Character Churro(100);
	Churro.getHealth();
	std::cout << Churro.getHealth() << std::endl;
	return 0;
}