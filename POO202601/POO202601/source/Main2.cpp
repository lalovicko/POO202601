#include "Prerequisites.h"
#include "ProgrammingPatterns/Proxy/Proxy.h"


int main() {
	Proxy* proxy = new Proxy();
	proxy->solicitar();
	proxy->solicitar();
	delete proxy;



	return 0;
}