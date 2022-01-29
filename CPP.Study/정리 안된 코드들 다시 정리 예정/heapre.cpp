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
	// ������ ũ��� Stack�� �÷��� ������.
	int a[5];
	int b[200];

	// ��� kb �̻���ʹ� Heap ������ �Ҵ��ϴ� ���� ����
	std::array<int, 300> arr; // 1.2kb
	//std::array<int, 500000> barr; // 2mb
	std::vector<int> barr(500000); // 2mb Heap

	// ��ü
	// �ڹٿ����� new�� �����ϴµ� �ͼ����� ����
	// 1~100���� �����ϴ��� �� �뷮�� ��kb �̸��̶�� ���ÿ� Allocation�� ���ѵ� ������.
	Cat cat; // stack

	std::vector<Cat> cats(100000); // Heap �ټ��� Object �����̶�� vector

	// Ȥ�� cin���� �������� ���ؾ� �ϴ� ��쵵 heap
	// Dyanmic
	int count;
	std::cin >> count;
	std::vector<Cat> dynamicCats(count); // heap , Dynamic

	// �Ϲ������� �Է� �� �Ҵ� 
	int inputCat;
	std::cin >> inputCat;
	foo(inputCat);

	// what if we need performance critical cats
	// �ſ� ���� ������ �ʿ��� ��쿡�� �ٸ��� �Ҵ� �ص� �ȴ�.
	for (int i = 0; i < 10000; i++)
	{
		bar(count);
	}

	//std::array (stack array)
	//std::vector (heap array) STL
	return 0;
}