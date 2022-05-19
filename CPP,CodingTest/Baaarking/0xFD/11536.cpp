#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	vector<string> ori(N), vAsc(N), vDesc(N);

	for (int i = 0; i < N; i++)
	{
		cin >> ori[i];
		vAsc[i] = ori[i];
		vDesc[i] = ori[i];
	}

	bool isAsc = true, isDesc = true;
	sort(vAsc.begin(), vAsc.end(), less<>());
	sort(vDesc.begin(), vDesc.end(), greater<>());

	for (int i = 0; i < N; i++)
	{
		if (isAsc == false && isDesc == false)
			break;
		if (isAsc == true)
		{
			if (vAsc[i] != ori[i])
			{
				isAsc = false;
				continue;
			}
		}
		if (isDesc == true)
		{
			if (vDesc[i] != ori[i])
			{
				isDesc = false;
				continue;
			}

		}

	}

	if (isAsc == false && isDesc == false)
		cout << "NEITHER" << "\n";
	if (isAsc)
		cout << "INCREASING" << "\n";
	if (isDesc)
		cout << "DESCREASING" << "\n";


	return 0;
}