#include <iostream>

void print(int x)
{
	std::cout << "int : " << x << std::endl;
}
void print(char x)
{
	std::cout << "char : " << x << std::endl;
}
void printCharInt(int x)
{
	std::cout << "char : " << x << std::endl;
}
void print(double x)
{
	std::cout << "double : " << x << std::endl;
}

int main()
{
	int a = 1;
	char b = 'c';
	double c = 3.2;

	print(a);
	print(b);
	print(c);

	std::cout << std::endl;
	std::cout << std::endl;
	print(a);
	print((int)b);
	print(c);
}