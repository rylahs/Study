#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int d, h, w;
	cin >> d >> h >> w;

	double k = d / sqrt(h * h + w * w);
	cout << (int)(h * k) << " " << (int)(w * k) << "\n";


	return 0;
}