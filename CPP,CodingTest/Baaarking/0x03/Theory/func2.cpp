#include <bits/stdc++.h>
using namespace std;
int arr[10001];
int func2(vector<int> v) {
	
	fill(arr, arr + 10001, 0);
	for (int i = 0; i < v.size(); i++)
	{
		if (arr[100 - v[i]])
			return 1;
		arr[v[i]] = 1;
	}
	return 0;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> v = { 1, 23, 53, 77, 60 };
	
	cout << func2(v);

	return 0;
}