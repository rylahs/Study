#define MAX_UINT16 65535
#define MAX(a, b) (((a)>(b))? (a):(b))
#include <iostream>

int main()
{
	std::cout << 65535 << std::endl;
	std::cout << MAX_UINT16 << std::endl;
	std::cout << MAX(10, 100) << std::endl;
}