#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int n;
		string str;
		cin >> n >> str;
		
		for (int i = 0; i < str.size(); i++)
			for (int j = 0; j < n; j++)
				cout << str[i];
		cout << '\n';
	}
	
	return 0;
}