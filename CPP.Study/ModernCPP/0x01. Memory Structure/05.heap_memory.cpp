#include <iostream>
 
int main(void)
{
	int* ip;
	ip = new int; // int size 만큼 할당
	*ip = 100; // 100을 할당
	std::cout << ip << "\n";
	std::cout << *ip << "\n";
	delete ip;

	return 0;
}

