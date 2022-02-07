// Time Complexity : O(n)

#include <bits/stdc++.h>
using namespace std;

int func1(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	
	return sum;
		
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cout << "func1(16) = " << func1(16) << "\n";
	cout << "func1(34567) = " << func1(34567) << "\n";
	cout << "func1(27639) = " << func1(27639) << "\n";

	return 0;
}