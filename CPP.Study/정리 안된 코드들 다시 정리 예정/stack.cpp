#include <cstdint>
#include <iostream>
#include <array> // CPP array�� <array> ��� ����
int main_stst() {
	static_assert(sizeof(int) == 4, "int is 4 bytes"); // ��ġ���� ������ ���� �߻� int ����� 4���� ����
	//int a = 0;
	std::cout << "size of values " << std::endl;
	std::cout << "Size of Int     : " << sizeof(int) << std::endl;
	std::cout << "Size of int8_t  : " << sizeof(int8_t) << std::endl; 
	std::cout << "Size of int64_t : " << sizeof(int64_t) << std::endl;
	std::cout << std::endl;
	// �޸� ������ ����� �����ϱ� ���� ���� ����
	int a;
	uint32_t b;
	int8_t d;
	// array
	std::cout << "size of array values " << std::endl;
	int arr[10]; 
	std::cout << "Size of arr[10]       : " << sizeof(arr) << std::endl;
	std::array<int, 5> iarr;
	std::cout << "Size of array<int, 5> : " << sizeof(iarr) << std::endl;
	std::cout << std::endl;

	uint64_t ui8;
	float f4;
	std::array<uint8_t, 5> uia5;
	std::cout << "Size of uint8_t array(5) : " << sizeof(uia5) << std::endl;
	uint64_t* ui64ptr = &ui8;
	std::cout << "int64_t ptr              : " << sizeof(ui64ptr) << std::endl;
	std::cout << "ui8 Address              : " << (uint64_t)ui64ptr << std::endl;
		
	return 0;
}