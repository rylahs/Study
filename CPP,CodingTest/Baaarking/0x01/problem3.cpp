// Time Complexity : O(n^(1/2))

#include <bits/stdc++.h>
using namespace std;

int func3(double n) {
	
	for (int i = 1; i * i <= n; i++) 
	{

		if (i * i == n)
		{
			cout << "i : " << i << "  i * i : " << i * i << "\n";
			return 1;
		}
	}
	return 0;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cout << func3(9) << "\n";
	cout << func3(693953651) << "\n";
	cout << func3(756580036) << "\n";
	return 0;
}