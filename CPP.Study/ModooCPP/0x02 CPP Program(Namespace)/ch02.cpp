#include <iostream>
#include "ch02.h"


int main() {
	std::cout << OnlyInThisFile() << std::endl;
	only_in_this_file = 3;
	std::cout << only_in_this_file << std::endl;

	// ȭ�鿡 ��µǴ� ���� �ٲ㺸��.
	std::cout << "ch02.h => namespace => OnlyInThisFile() : " << OnlyInThisFile() << std::endl;
	only_in_this_file = 70;
	std::cout << "ch02.h => namespace => only_in_this_file : " << only_in_this_file << std::endl;
}