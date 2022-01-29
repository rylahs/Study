// selection Sort
// O(n^2)
#include <iostream>
#include <vector>

int main_selection()
{
	std::vector<int> v{ 3, 5, 9, 1, 7 };

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = i; j < v.size(); j++)
		{
			if (v[i] > v[j])
			{
				int temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
			for (const int& iter : v)
			{
				std::cout << iter << " ";
			}
			std::cout << std::endl;
		}
	}
	return 0;
}