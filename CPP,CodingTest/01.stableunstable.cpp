// 01. Stable, unstable Sort
// https://minteul.tistory.com/292
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
struct SortingTest {
	int age;
	char name;
};
bool operator<(const SortingTest& lhs, const SortingTest& rhs)
{
	return lhs.age < rhs.age;
};
int main(void)
{
	std::vector<SortingTest> v{
		{200,'A'},
		{200,'B'},
		{200,'C'},
		{200,'D'},
		{200,'E'},
		{200,'F'},
		{200,'G'},
	};
	for (int i = 10; i < 100; i++)
		v.emplace_back(SortingTest{ i, 'Z' });
	std::stable_sort(v.begin(), v.end());
	//std::sort(v.begin(), v.end());
	for (const SortingTest e : v)
	{
		std::cout << e.age << ", " << e.name << "\n";
	}

	return 0;
}
