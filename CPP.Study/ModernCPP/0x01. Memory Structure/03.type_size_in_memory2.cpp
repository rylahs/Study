// https://minteul.tistory.com/361
 
#include <iostream>
struct ST // 8 bytes
{
	int a; // 4 bytes
	int b; // 4 bytes
};

struct ST2
{
	long a; // 8 bytes
	int b;  // 4 bytes
	short c; // 2 bytes
};

class Cat
{
public:
	void printCat(); // ???
private:
	int age;	  // 4 bytes
	float weight; // 4 bytes
};
int main(void)
{
	std::cout << "Struct ST Size : " << sizeof(ST) << std::endl;
	std::cout << "Struct ST2 Size : " << sizeof(ST2) << std::endl;
	std::cout << std::endl;

	std::cout << "Class Cat Size : " << sizeof(Cat) << std::endl;
	Cat cat1;
	Cat cat2;

	Cat* catPtr = &cat1; // 8 bytes (64 bit)
	std::cout << "CatPtr Size : " << sizeof(catPtr) << std::endl;

	return 0;
}
