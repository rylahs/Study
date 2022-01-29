#include <iostream>

int main_2342342q34()
{
	//int allocCount = 0;
	//std::cout << "how many?" << std::endl;
	//std::cin >> allocCount;

	//for (int i = 0; i < allocCount; i++)
	//{
	//	int* ip = new int[250]; // 1kb memory leak
	//	std::cout << "mem " << std::flush;
	//	delete[] ip;
	//}
	//std::cout << std::endl;
	int sa = 0;
	int sb = 1;

	std::cout << "&sa : " << (long)&sa << std::endl;
	std::cout << "&sb : " << (long)&sb << std::endl;

	int* hap = new int;
	int* hbp = new int;

	std::cout << "&hap: " << (long)&hap << std::endl;
	std::cout << "&hbp: " << (long)&hbp << std::endl;

	std::cout << "&ha : " << (long)hap << std::endl;
	std::cout << "&hb : " << (long)hbp << std::endl;

	//Prefer Smart pointer.
	delete hap;
	delete hbp;

	return 0;

}