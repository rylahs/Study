// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.03
// 10825
// https://www.acmicpc.net/problem/10825

#include <bits/stdc++.h>
using namespace std;

struct student
{
	string name;
	int kor;
	int eng;
	int math;
};

vector<student> v(100005);


bool compare(const student &a, const student &b)
{
	if (a.kor != b.kor)
		return a.kor > b.kor;
	else
	{
		if (a.eng != b.eng)
			return a.eng < b.eng;
		else
		{
			if (a.math != b.math)
				return a.math > b.math;

			return a.name < b.name;
		}
	}
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
		cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;

	sort(v.begin(), v.begin() + n, compare);
	
	for (int i = 0; i < n; i++)
		cout << v[i].name << "\n";
	return 0;
}