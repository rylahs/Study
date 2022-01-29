#include <iostream>

class Cat
{
public:
	void speak();
private:
	char c1;
	int i4a;
	int i4b;
	double d8;
};

int main()
{
	Cat stackCat;
	Cat cats[100];
	//prefer std::array

	std::cout << sizeof(stackCat) << std::endl;
	// 16 bytes
	return 0;

}