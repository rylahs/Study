#include <cstdlib>
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
	// C style heap Cat
	Cat* catptr = (Cat*)malloc(sizeof(Cat));
	free(catptr);

	// C style heap Cats(Cat Array)
	Cat* catap = (Cat*)malloc(sizeof(Cat) * 5);
	free(catap);

	// C style heap int
	int* ip = (int*)malloc(sizeof(int));
	*ip = 100;
	free(ip);

	// C style heap array
	int* iap = (int*)malloc(sizeof(int) * 5); // int iap[5];
	iap[0] = 100;
	free(iap);
}

