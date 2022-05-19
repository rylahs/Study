#include <bits/stdc++.h>
using namespace std;


int arr[300][300];

void Rotate(const int &x1, const int &y1,const int &x2, const int &y2)
{
	int t = arr[x1][y1];
	
	for (int j = y1; j < y2; j++)
		arr[x1][j] = arr[x1][j + 1];
	
	for (int i = x1; i < x2; i++)
		arr[i][y2] = arr[i + 1][y2];

	for (int j = y2; j > y1; j--)
		arr[x2][j] = arr[x2][j - 1];
	
	for (int i = x2; i > x1; i--)
		arr[i][y1] = arr[i - 1][y1];

	arr[x1 + 1][y1] = t;

}

void Rotate(const int &n, const int &m)
{
	int x1 = 0, y1 = 0, x2 = n - 1, y2 = m - 1;

	while (x1 < x2 && y1 < y2)
	{
		Rotate(x1++, y1++, x2--, y2--);
	}
}


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M, R;
	cin >> N >> M >> R;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> arr[i][j];

	while (R--)
	{
		Rotate(N, M);
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cout << arr[i][j] << " ";
		cout << "\n";
	}
	return 0;
}