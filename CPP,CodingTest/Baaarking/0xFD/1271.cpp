#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	if (a <= c && c < b)
		cout << 1;
	else 
		cout << 0;


	return 0;
}