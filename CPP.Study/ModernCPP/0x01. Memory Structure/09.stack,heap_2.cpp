#include <array>
#include <vector>
#include <iostream>
class Cat
{
public:
private:
	int m_age;
};
void foo(int num)
{
	std::vector<Cat> cats(num);

	// do some computation over cats.
}

bool bar(int num)
{
	constexpr int maxCats = 1000;
	if (maxCats < num)
	{
		std::cout << "num is over error \n";
		return false;
	}
	std::array<Cat, maxCats> cats; // prepare make 1000
	// do some computation over cats.
	return true;
}

int main(void)
{
	int cnt;
	std::cin >> cnt;
	foo(cnt);

	// what if we need performance critical cats?
	for (int i = 0; i < cnt; i++)
	{
		bar(i);
	}

	// std::array (stack array)
	// std::vector (heap array) STL
}