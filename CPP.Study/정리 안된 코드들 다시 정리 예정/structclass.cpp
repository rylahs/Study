#include <iostream>
struct ST
{
	int a; // 4 bytes
	int b; // 4 bytes
};
struct ST2
{
	long a; // 8 bytes
	int b; // 4 bytes
	short c; // 2 bytes
};

class Cat
{
public:
	void printCat(); // ?
private:
	int age;	  // 4 bytes
	float weight; // 4 bytes
};

int main_struct234()
{
	std::cout << "Size of Struct : " << sizeof(ST) << std::endl;
	std::cout << "Size of Struct : " << sizeof(ST2) << std::endl; // 컴파일러에 따라서 16이 나올 수 있음
	std::cout << std::endl;

	std::cout << "Size of Class      : " << sizeof(Cat) << std::endl; // 8? or ?
	Cat cat1;
	Cat cat2; 
	std::cout << "Size of Object     : " << sizeof(cat1) << std::endl; // Member Area
	Cat* catPtr = &cat1;
	std::cout << "Size of Object ptr : " << sizeof(catPtr) << std::endl; // 8
	return 0;
}