#include <iostream>
#include <array>
#include <vector>
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
	if (num > maxCats)
	{
		return false;
	}
	std::array<Cat, maxCats> cats;
	// do some computation over cats.
}
int main_heapuse(void) 
{
	// 이정도 크기는 Stack에 올려도 무방함.
	int a[5];
	int b[200];

	// 몇백 kb 이상부터는 Heap 영역에 할당하는 것이 좋음
	std::array<int, 300> arr; // 1.2kb
	//std::array<int, 500000> barr; // 2mb
	std::vector<int> barr(500000); // 2mb Heap

	// 객체
	// 자바에서는 new로 생성하는데 익숙해져 있음
	// 1~100개를 생성하더라도 총 용량이 몇kb 미만이라면 스택에 Allocation을 시켜도 무방함.
	Cat cat; // stack

	std::vector<Cat> cats(100000); // Heap 다수의 Object 생성이라면 vector

	// 혹은 cin으로 동적으로 정해야 하는 경우도 heap
	// Dyanmic
	int count;
	std::cin >> count;
	std::vector<Cat> dynamicCats(count); // heap , Dynamic

	// 일반적으로 입력 후 할당 
	int inputCat;
	std::cin >> inputCat;
	foo(inputCat);

	// what if we need performance critical cats
	// 매우 빠른 연산이 필요한 경우에는 다르게 할당 해도 된다.
	for (int i = 0; i < 10000; i++)
	{
		bar(count);
	}

	//std::array (stack array)
	//std::vector (heap array) STL
	return 0;
}