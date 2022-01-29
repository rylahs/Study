#include <bits/stdc++.h>
using namespace std;

int main_2908(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string str1, str2;

	cin >> str1 >> str2;

	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());

	cout << max(str1, str2) << '\n';
	return 0;
}