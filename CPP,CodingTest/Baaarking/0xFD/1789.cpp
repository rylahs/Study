#include <bits/stdc++.h>
using namespace std;



int maxN(unsigned int& S)
{
	int number = 1;
	int result = 0;
	long long sum = 0;

	while (1)
	{
		sum += number;
		result++;

		if (sum > S)
		{
			result--;
			break;
		}

		number++;
	}
	return result;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	unsigned int S;
	cin >> S;

	int answer = maxN(S);

	cout << answer << "\n";

	return 0;
}