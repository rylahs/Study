#include <bits/stdc++.h>
using namespace std;

int arrN[1000005];
int arrM[1000005];
int arrNM[2000010];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> arrN[i];

	for (int i = 0; i < m; i++)
		cin >> arrM[i];

	int aIdx = 0, bIdx = 0;
	
	for (int i = 0; i < n + m; i++)
	{
		if (bIdx == m)
			arrNM[i] = arrN[aIdx++];
		else if (aIdx == n)
			arrNM[i] = arrM[bIdx++];
		else if (arrN[aIdx] <= arrM[bIdx])
			arrNM[i] = arrN[aIdx++];
		else
			arrNM[i] = arrM[bIdx++];
	}

	
	for (int i = 0; i < n + m; i++)
		cout << arrNM[i] << " ";


	return 0;
}