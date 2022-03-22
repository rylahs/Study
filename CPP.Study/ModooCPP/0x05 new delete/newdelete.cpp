#include <iostream>

void NewDeleteVariable()
{
	int* p = new int;
	*p = 10;

	std::cout << *p << std::endl;
	delete p;
}

void NewDeleteArray()
{
	int arr_size;
	std::cout << "array_size : ";
	std::cin >> arr_size;
	int* list = new int[arr_size];

	for (int i = 0; i < arr_size; i++)
	{
		std::cin >> list[i];
	}

	for (int i = 0; i < arr_size; i++)
	{
		std::cout << i << "th element of list : " << list[i] << std::endl;
	}

	delete[] list;
}



int main()
{
	NewDeleteVariable();
	NewDeleteArray();

	return 0;
}