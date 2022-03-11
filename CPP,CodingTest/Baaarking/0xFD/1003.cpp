// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.18
// 1003. 피보나치 함수
// 

#include <bits/stdc++.h>
using namespace std;

int fibo[43];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int testCase;
	cin >> testCase;

	fibo[0] = 0;
	fibo[1] = 1;
	fibo[2] = 1;

	for (int i = 3; i <= 40; i++)
		fibo[i] = fibo[i - 1] + fibo[i - 2];


	while (testCase--)
	{
		int n;
		cin >> n;
		if (n == 0)
			cout << fibo[n + 1] << " " << fibo[n] << "\n";
		else
			cout << fibo[n - 1] << " " << fibo[n] << "\n";
	}


	return 0;
}