#include <bits/stdc++.h>
using namespace std;
int arr[10005];
void noAnswerNum(int n) {
	for (int i = 1; i <= n; i++) {
		int one, ten, hund, thous, man;
		man = i / 10000;
		thous = i % 10000 / 1000;
		hund = i % 1000 / 100;
		ten = i % 100 / 10;
		one = i % 10;
		if (i + man + thous + hund + ten + one > 10001)
			continue;
		else
			arr[i + man + thous + hund + ten + one]++;
	}
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	
	noAnswerNum(10000);
	for (int i = 1; i <= 10000; i++)
	{
		if (arr[i] == 0)
			cout << i << "\n";
	}


	return 0;
}