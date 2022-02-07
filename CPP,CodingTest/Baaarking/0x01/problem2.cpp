// Time Complexity : O(n^2)? O(n)?

#include <bits/stdc++.h>
using namespace std;

int func2(vector<int> v, int size) {
	vector<int> temp;
	int idx = 0;
	int count = 0;
	while (1)
	{
		if (idx == v.size()) break;
		for (int i = 0; i < temp.size(); i++)
		{
			if (100 - temp[i] == v[idx])
				return 1;
		}
		
		temp.emplace_back(v[idx]);
		idx++;
	}
	
	
	
	return 0;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	vector<int> v1 = { 1, 52, 48 };
	vector<int> v2 = { 50, 42 };
	vector<int> v3 = { 4, 13, 63, 87 };

	cout << func2(v1, v1.size()) << "\n";
	cout << func2(v2, v2.size()) << "\n";
	cout << func2(v3, v3.size()) << "\n";

	return 0;
}