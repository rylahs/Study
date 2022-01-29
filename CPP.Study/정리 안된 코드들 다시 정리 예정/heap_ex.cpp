#include <iostream>
#include <cstdlib>
#include <vector>
class Cat
{
public:
	Cat()
	{
		std::cout << "meow" << std::endl;
	}
	~Cat()
	{
		std::cout << "bye" << std::endl;
	}
};
int main_heapex()
{	
	// C 스타일로 객체를 동적할당하는 것은 하지 말아야된다.
	////C style heap Cat
	//Cat* catp = (Cat*)malloc(sizeof(Cat));
	//free(catp);

	////C style heap Cats(Cat array)
	//Cat* catap = (Cat*)malloc(sizeof(Cat)* 5);
	//free(catap);

	////C style heap int
	//int* ip = (int *)malloc(sizeof(int));
	//*ip = 100;
	//std::cout << *ip << std::endl;
	//free(ip);

	////C style heap array
	//int* iap = (int*)malloc(sizeof(int) * 5);
	//iap[0] = 100;
	//std::cout << iap[0] << std::endl;
	//free(iap);

	//// C++ Style heap Cat
	//Cat * catp = new Cat;
	//delete catp;

	//// C++ Style heap Cats(Cat Array)
	//Cat* catap = new Cat[5];
	//delete[] catap;


	////C++ style heap int
	//int* ip = new int;
	//*ip = 100;
	//std::cout << *ip << std::endl;
	//delete ip;

	////C++ style heap array
	//int* iap = new int[5];
	//iap[0] = 100;
	//std::cout << iap[0] << std::endl;
	//delete[] iap;
	
	//// safer C++ Style heap Cat
	//std::unique_ptr<Cat> catp = std::make_unique<Cat>();

	//// safer C++ Style heap Cats(Cat Array)
	//std::vector<Cat> cats(5);

	//// safer C++ style int
	//std::unique_ptr<int> ip = std::make_unique<int>();
	//*ip = 100;
	//std::cout << *ip << std::endl;

	//// safer C++ style array
	//std::vector<int> iap(5);
	//iap[0] = 100;
	//std::cout << iap[0] << std::endl;

	std::cout << "How many cats do u need?" << std::endl;
	int cat_count;
	std::cin >> cat_count;
	std::vector<Cat> cats(cat_count);
	return 0;
}