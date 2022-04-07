#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	cin.ignore();
	while (n--)
	{
		int maxGcd = -1;
		string s;
		getline(cin, s);
		vector<int> v;
		int idx = 0;
		string tmp;
		stringstream sstream(s);
		while (getline(sstream, tmp, ' ')) // 문자열 분리
			v.push_back(stoi(tmp));
		for (int i = 0; i < v.size() - 1; ++i)
		{
			for (int j = i + 1; j < v.size(); ++j)
			{
				int tmpGcd = gcd(v[i], v[j]);
				maxGcd = max(tmpGcd, maxGcd);
			}
		}

		cout << maxGcd << "\n";
	}
	

	return 0;
}