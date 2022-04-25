#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s1, s2;
	char op;

	cin >> s1 >> op >> s2;

	
	if (s1.length() < s2.length())
		swap(s1, s2);

	switch (op)
	{
	case '+':
		if (s1.length() > s2.length())
			s1[s1.length() - s2.length()] = '1';
		else
			s1[0] = '2';
		break;
	case '*':
		for (int i = 0; i < s2.length() - 1; i++)
			s1.append("0");
		
		
		break;
	}

	cout << s1 << "\n";
	return 0;
}