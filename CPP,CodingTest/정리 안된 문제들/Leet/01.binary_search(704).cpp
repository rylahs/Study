// Binary Search - O(logN)
// L = 0(index)
// R = length - 1(index)
// pivot = L + R / 2
// LeetCode 704. Binary Search
// https://leetcode.com/problems/binary-search/
// https://minteul.tistory.com/entry/01-LeetCode-704-Binary-Search
#include <iostream>
#include <vector>

int binary_search(std::vector<int>& nums, int target)
{
	int left = 0;
	int right = (int)nums.size() - 1;

	while (left <= right)
	{
		int pivot = (left + right) / 2;
		if (nums[pivot] == target)
			return pivot;
		else if (nums[pivot] < target)
			left = pivot + 1;
		else // nums[pivot] > target
			right = pivot - 1;
	}
	return -1;
}
int main(void)
{
	std::vector<int> v{ -1, 0, 3, 5, 9, 12 };
	int target = 9;
	std::cout << binary_search(v, target) << '\n';
	return 0;
}
