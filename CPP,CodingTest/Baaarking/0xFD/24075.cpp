#include <bits/stdc++.h>
using namespace std;
int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	cout << max(add(a, b), sub(a, b)) << "\n";
	cout << min(add(a, b), sub(a, b)) << "\n";



	return 0;
}