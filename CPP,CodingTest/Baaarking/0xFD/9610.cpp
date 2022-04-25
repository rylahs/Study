#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> pos(5);
	while (n--)
	{
		pair<int, int> point;
		cin >> point.X >> point.Y;

		if (point.X == 0 || point.Y == 0)
		{
			pos[0]++;
		}
		else if (point.X > 0 && point.Y > 0)
		{
			pos[1]++;
		}
		else if (point.X < 0 && point.Y > 0)
		{
			pos[2]++;
		}
		else if (point.X < 0 && point.Y < 0)
		{
			pos[3]++;
		}
		else if (point.X > 0 && point.Y < 0)
		{
			pos[4]++;
		}


	}
	for (int i = 1; i < 5; i++)
	{
		cout << "Q" << i << ": " << pos[i] << "\n";
	}
	cout << "AXIS: " << pos[0] << "\n";

	return 0;
}