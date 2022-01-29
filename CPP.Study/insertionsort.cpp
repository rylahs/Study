// Insertion Sort
// O(n^2)
// 9 3 5 7 1
// 3 9 5 7 1
// 3 5 9 7 1
// 3 5 7 9 1
// 1 3 5 7 9

#include <iostream>
#include <vector>

int main_insertion()
{
	std::vector<int> v{ 9, 3, 5, 7, 1 };
	
	int key, j;
	for (int i = 1; i < v.size(); i++)
	{
		key = v[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (v[j] > key)
			{
				int temp = v[j + 1];
				v[j + 1] = v[j];
				v[j] = temp;
			}
		}
	}
	for (const int& iter : v)
	{
		std::cout << iter << " ";
	}
	std::cout << std::endl;
	return 0;
}