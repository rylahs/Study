#include <iostream>
#include <array>
#include <vector>

class Cat
{
public:
private:
	int m_age;
};
int main(void)
{
	// variable
	//	int, double, float // stack

	// array
	int a[5];
	int b[200]; // minimum (stack)
	std::array<int, 300> iarr; // 1.2kb (stack)

	//std::array<int, 500000> b; // 2mb (recommend heap use) xxxkb ~ xmb
	std::vector<int> v(500000);

	// class
	// 위와 같이 용량이 작다면 (몇kb 이내 선) stack recommend
	Cat cat; // stack

	std::array<int, 100> catsStack;

	std::vector<Cat> cats(100000); // heap

	int cnt;
	std::cin >> cnt;
	std::vector<int> dynamicCats(cnt); //heap
}	