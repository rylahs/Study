#include <bits/stdc++.h>
using namespace std;

int main_10871()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int arrNum;
	cin >> arrNum;
	
	int findNum;
	cin >> findNum;
	
	vector<int> v;
	int inputA;
	
	for (int i = 0; i < arrNum; i++) 
	{
		cin >> inputA;
		v.push_back(inputA);
	}

	for (int i = 0; i < v.size(); i++) 
	{
		if (v[i] < findNum)
			cout << v[i] << " ";
	}

	cout << '\n';

	return 0;
}
