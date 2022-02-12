// 0x0E. 정렬 I
// Written by : Rylah
// Date : 2022.02.12
// 10989. 수 정렬하기 3
// https://www.acmicpc.net/problem/10989
// https://www.acmicpc.net/source/38955409

#include <bits/stdc++.h>
using namespace std;
int arr[10001];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n; 
	cin >> n;
	int a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		arr[a]++;
	}

	for (int i = 0; i < 10001; i++)
	{
		while (arr[i])
		{
			cout << i << "\n";
			arr[i]--;
		}
	}


	return 0;
}