#include "Prerequisites.h"
#include "GameProgrammingPatterns/State/Car.h"
#include "GameProgrammingPatterns/State/FreeState.h"
#include "GameProgrammingPatterns/State/TrafficState.h"

int main() {
	Car* car = new Car();
	car->Accelerate();
	car->Break();
	car->setState(new TrafficState());
	car->Accelerate();
	car->Break();
	delete car;
}