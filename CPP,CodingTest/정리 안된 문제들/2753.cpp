#include <bits/stdc++.h>
using namespace std;

int main_2753()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int year_input;
	cin >> year_input;

	if (year_input % 4 == 0 && year_input % 100 != 0 || year_input % 400 == 0)
		cout << 1;
	else
		cout << 0;

	return 0;
}