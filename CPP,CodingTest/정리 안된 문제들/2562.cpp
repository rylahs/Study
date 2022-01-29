#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int max = -1, maxIdx;
	
	for (int i = 1; i < 10; i++) {
		int input;
		cin >> input;
		if (input > max) {
			max = input;
			maxIdx = i;
		}
	}

	cout << max << '\n' << maxIdx;

	return 0;
}