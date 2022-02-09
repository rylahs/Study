#include <bits/stdc++.h>
using namespace std;

void recurPrint(int n)
{
	if (n == 0)
		return;
	cout << n << "\n";
	recurPrint(n - 1);
}

int recurSum(int n)
{
	if (n == 0)
		return 0;
	return n + recurSum(n - 1);
}
int main(void)
{
	int n = 10;
	recurPrint(n);
	cout << recurSum(n) << "\n";
}