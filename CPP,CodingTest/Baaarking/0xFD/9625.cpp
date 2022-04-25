#include <bits/stdc++.h>
using namespace std;

int dpA[48];
int dpB[48];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int K;
	cin >> K;

	dpA[0] = 1;
	dpB[0] = 0;
	


	for (int i = 1; i <= K; i++)
	{
		dpA[i] = dpB[i - 1];
		dpB[i] = dpA[i - 1] + dpB[i - 1];
	}

	cout << dpA[K] << " " << dpB[K] << "\n";

	return 0;
}