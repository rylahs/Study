#include <bits/stdc++.h>
using namespace std;

int main_1546(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<double> v;
	double max = -1;
	for (int i = 0; i < n; i++)
	{
		double a;
		cin >> a;
		v.emplace_back(a);
		if (max < a)
			max = a;
	}
	cout<<fixed;
	cout.precision(14);
	
	double sum = 0;
	for (auto& e : v)
		sum += e / max * 100;
	double avg = sum / n;
	cout << avg << '\n';
	return 0;
}