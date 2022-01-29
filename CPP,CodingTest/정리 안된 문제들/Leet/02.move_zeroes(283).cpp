// Move Zeroes
// One Pointer is fill index
// One Pointer is find not zero
// LeetCode 283. Move Zeroes
// https://leetcode.com/problems/move-zeroes/
// https://minteul.tistory.com/entry/02-LeetCode-283-Move-Zeroes

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void moveZeroes(vector<int>& nums)
{
	int wIdx = 0;
	// Move Zero
	for (int i = 0; i < (int)nums.size(); i++)
	{
		if (nums[i] != 0)
		{
			swap(nums[wIdx], nums[i]);
			wIdx++;
		}
	}
	// set Zero
	fill(nums.begin() + wIdx, nums.end(), 0);
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> nums = { 0, 1, 0, 3, 12 };
	moveZeroes(nums);
	for (auto& e : nums)
		cout << e << " ";

	return 0;
}