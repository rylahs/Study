#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;
	int mi = 10001;
	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		if (int(sqrt(i)) * int(sqrt(i)) == i)
		{
			mi = min(mi, i);
			sum += i;
		}
	}
	if (sum == 0)
		cout << -1;
	else
	{
		cout << sum << "\n";
		cout << mi << "\n";
	}
	return 0;
}