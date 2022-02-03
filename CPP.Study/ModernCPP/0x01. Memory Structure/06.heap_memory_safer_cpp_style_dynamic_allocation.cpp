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
	std::cout << "How many cats do u need?" << std::endl;
	int cat_count;
	std::cin >> cat_count;
	std::vector<Cat> cats(cat_count);

	return 0;
}
