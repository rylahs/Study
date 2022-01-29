// 724. Find Pivot Index
// Sliding Basic O(n) + O(n) => O(n)
// LeetCode 724. Find Pivot Index
// https://leetcode.com/problems/move-zeroes/

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int pivotIndex(vector<int> &nums)
{
	int sum = accumulate(nums.begin(), nums.end(), 0);
	int leftSum = 0;
	int rightSum = sum;
	 
	int pastPivotNum = 0; // Previous Pivot Num
	for (int i = 0; i < (int)nums.size(); i++)
	{
		int num = nums[i];
		rightSum = rightSum - num;
		leftSum = leftSum + pastPivotNum;

		if (leftSum == rightSum)
			return i;
		pastPivotNum = num;
	}
	return -1;
}


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> nums = { 1, 7, 3, 6, 5, 6 };
	cout << pivotIndex(nums) << '\n';

	return 0;
}