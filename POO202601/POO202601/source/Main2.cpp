#include "Prerequisites.h"

std::mutex mtx;
int global_counter = 0;	

void thread(int id) {
	for (unsigned int i = 0; i < 5; ++i) {
		mtx.lock();
		std::cout << "Thread " << id << " is running iteration " << i+1 << std::endl;
		mtx.unlock();
	}
	std::cout << std:: endl;
}

void threadName(std::string name) {
	for (unsigned int i = 0; i < 5; ++i) {
		mtx.lock();
		std::cout << "Thread " << name << " is running iteration " << i + 1 << std::endl;
		mtx.unlock();
	}
	std::cout << std::endl;
}

void threadCount(int count) {
	for (unsigned int i = 0; i < 500; ++i) {
		mtx.lock();
		global_counter++;
		mtx.unlock();
	}
	std::cout << std::endl;
}

int main() {
	std::thread t1(thread, 1);
	std::thread t2(threadName, "Churro");
	std::thread t3(threadCount, 3);
	t1.join();
	t2.join();
	t3.join();
	std::cout << "Global counter: " << global_counter << std::endl;

	return 0;
}