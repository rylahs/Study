#include <iostream>
#include <vector>
int merge(int* data, int start, int mid, int end)
{
	int i = start;
}
int mergeSort(int* data, int start, int end)
{
	if (start < end)
	{
		int middle = (start + end) / 2;
		mergeSort(data, start, middle);
		mergeSort(data, middle + 1, end);
		merge(data, start, middle, end);
	}
}
int main_merge()
{
	std::vector<int> v{7, 3, 1, 5, 6, 4, 2};

	return 0;
}