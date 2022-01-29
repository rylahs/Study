#include <iostream>

class Plus
{
public:
	explicit Plus(int a) : localVar{ a } {}
	int operator() (int x) const
	{
		return localVar + x;
	}

private:
	int localVar;
};

int main() 
{
	auto lambdaPlus3 = [ localVar = 3 ](int x)
	{
		return localVar + x;
	};
	Plus plus3{ 3 };
	Plus plus5{ 5 };

	std::cout << plus3(10) << std::endl;
	std::cout << lambdaPlus3(20) << std::endl;
	std::cout << plus5(10) << std::endl;
}