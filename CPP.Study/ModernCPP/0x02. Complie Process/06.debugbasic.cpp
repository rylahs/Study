#include <iostream>

int add(int a)
{
	return ++a;
}

int sub(int a)
{
	return --a;
}

int main(void)
{
	int a = 10;
	if (a % 2 == 0)
	{
		a = add(a);
	}
	else
	{
		a = sub(a);
	}

	std::cout << a << std::endl;

	return 0;
}