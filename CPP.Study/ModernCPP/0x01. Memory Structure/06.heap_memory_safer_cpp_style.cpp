#include <iostream>
#include <memory>
#include <vector>
class Cat
{
public:
	Cat()
	{
		mAge = 1;
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

	// safer C++ style heap Cat (unique_ptr<> -> make_unique<>())
	std::unique_ptr<Cat> catptr = std::make_unique<Cat>();
	//delete catptr;

	// safer C++ style heap Cats(Cat Array = vector)
	std::vector<Cat> cats(5);
	// delete[] catap;

	// safer C++ style heap int
	std::unique_ptr<int> ip = std::make_unique<int>();
	*ip = 100;
	std::cout << *ip << std::endl;
	//delete ip;

	// safer C++ style heap array
	std::vector<int> iap(5);
	iap[0] = 100;
	std::cout << iap[0] << std::endl;
	//delete[] iap;

	return 0;
}
