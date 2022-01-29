#include <bits/stdc++.h>
using namespace std;

int main_10808(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> v(26, 0);
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		v[s[i] - 'a']++;
	
	for (int e : v)
		cout << e << " ";


	return 0;
}










//#include <bits/stdc++.h>
//using namespace std;
//
//int main_10808(void)
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	string s;
//	cin >> s;
//	vector<int> v(26, 0);
//	for (int i = 0; i < s.size(); i++) {
//		v[s[i] - 'a']++;
//	}
//
//	for (int e : v)
//		cout << e << " ";
//	
//	return 0;
//}