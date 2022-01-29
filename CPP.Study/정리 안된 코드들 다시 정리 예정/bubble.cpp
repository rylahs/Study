// Bubble Sort
// O(n^2)
#include <iostream>
#include <vector>

//9 3 5 7 1
//3 9 5 7 1
//3 5 9 7 1
//3 5 7 9 1
//3 5 7 1 9

//3 5 7 1 9
 
//3 5 7 1 9

//3 5 1 7 9

//3 1 5 7 9

//1 3 5 7 9

int main_bubble() {
	std::vector<int> v{ 9,3,5,7,1 };
	for (int i = 0; i < v.size() - 1; i++)
	{
		for (int j = 0; j < v.size() - 1 - i; j++)
		{
			if (v[j] > v[j + 1])
			{
				int temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
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
