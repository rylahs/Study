#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	int height = 0;

	for (int i = 0; i < static_cast<int>(str.length()); i++)
	{
		if (i == 0 && (str[i] == '(' || str[i] == ')'))
		{
			height += 10;
			continue;
		}

		if ((str[i] == '(' || str[i] == ')') && str[i - 1] == str[i])
		{
			height += 5;
			continue;
		}

		else if ((str[i] == '(' || str[i] == ')') && str[i - 1] != str[i])
		{
			height += 10;
		}
	}

	cout << height << "\n";

	return 0;

}