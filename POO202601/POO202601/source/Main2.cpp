#include "Prerequisites.h"
#include "GameProgrammingPatterns/Observer/Sensor.h"
#include "GameProgrammingPatterns/Observer/DisplayDevice.h"

int main() {
	TemperaturaSensor sensor;
	DisplayDevice display1;
	sensor.addObserver(&display1);
	sensor.setTemperatura(25);
	sensor.setTemperatura(30);




	return 0;
}