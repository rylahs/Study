#include <iostream>

int main(void)
{
	int allocCount = 0;
	std::cout << "How many?" << std::endl;
	std::cin >> allocCount;

	for (int i = 0; i < allocCount; i++)
	{
		int* ip = new int[250]; // 1KB
		std::cout << "mem " << std::flush;
		//delete[]ip;
	}

	return 0;
}