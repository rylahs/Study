#include <iostream>

int main_1204() {
	int a = 0;
	int b = 3;
	int c = a + b;
	double d = 2.5;

	std::cout << "a:" << (long)&a << std::endl;
	std::cout << "b:" << (long)&b << std::endl;
	std::cout << "c:" << (long)&c << std::endl;
	std::cout << "d:" << (long)&d << std::endl;

	return 0;
}
