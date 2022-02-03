#include <iostream>
 
class Cat
{
public:
	Cat()
	{
		std::cout << "meow~" << std::endl;
	};
	~Cat()
	{
		std::cout << "bye~" << std::endl;
	};
private:
	int mAge;
};

int main()
{
	// C++ style heap Cat
	Cat* catptr = new Cat;
	delete catptr;

	// C++ style heap Cats(Cat Array)
	Cat* catap = new Cat[5];
	delete[] catap;

	//C++ style heap int
	int* ip = new int;
	*ip = 100;
	std::cout << *ip << std::endl;
	delete ip;

	//C++ style heap array
	int* iap = new int[5];
	iap[0] = 100;
	std::cout << iap[0] << std::endl;
	delete[] iap;

}

