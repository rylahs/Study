#include <iostream>
 
int main(void)
{
	int* ip;
	ip = new int; // int size ��ŭ �Ҵ�
	*ip = 100; // 100�� �Ҵ�
	std::cout << ip << "\n";
	std::cout << *ip << "\n";
	delete ip;

	return 0;
}

