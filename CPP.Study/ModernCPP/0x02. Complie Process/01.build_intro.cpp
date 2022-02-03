#include <iostream>
#include <variant> // C++17

int main(void)
{
	std::variant<int, float> i = 0;
	//int i; // not initialized
	//std::cout << "hi" << std::endl;
	//std::cout << "hi" << i << std::endl;
	std::cout << "hi" << std::endl;
	return 0;
}