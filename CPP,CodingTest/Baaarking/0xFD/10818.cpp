// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.18
// 10818. 최소, 최대
// 

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int minVal = 1000001;
	int maxVal = -1000001;
	while (n--)
	{
		int input;
		cin >> input;
		
		minVal = min(input, minVal);
		maxVal = max(input, maxVal);
	}

	cout << minVal << " " << maxVal << "\n";
	return 0;
}