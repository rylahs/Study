#include <bits/stdc++.h>
using namespace std;
int dolmen(int a, int b) {
	return ((a + b - 1) * (a + b) / 2) * (a + b);
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int a, b;
		cin >> a >> b;
		cout << dolmen(a, b) << "\n";

	}
	return 0;
}