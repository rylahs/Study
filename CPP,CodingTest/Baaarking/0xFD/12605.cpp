// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.21
// 12605. 단어순서 뒤집기
// 

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;
	cin.ignore();
	for (int t = 1; t <= testCase; t++)
	{
		string str;
		getline(cin, str);
		istringstream ss(str);
		string stringBuffer;
		vector<string> v;

		while (getline(ss, stringBuffer, ' ')) {
			v.push_back(stringBuffer);
		}

		

		cout << "Case #" << t << ": ";
		for (int i = v.size() - 1; i >= 0; i--)
			cout << v[i] << " ";
		cout << "\n";
	}		

	return 0;
}