#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int number;
	cin >> number;

	int res = 0;
	for (int i = 0; i < 5; i++)
	{
		int carNum;
		cin >> carNum;

		if (carNum % 10 == number)
			res++;
	}

	cout << res << "\n";



	return 0;
}

