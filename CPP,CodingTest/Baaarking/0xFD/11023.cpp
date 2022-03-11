// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.18
// 11023
// 

#include <bits/stdc++.h>
using namespace std;
int arr[101];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int sum = 0, i = 0;
	while (!cin.eof())
	{
		cin >> arr[i++];
	}
	
	cout << accumulate(arr, arr + i - 1, 0);
	
	return 0;
}