// Goorm Level 1. Substring
// Written by Ryla
// Date : 2022.03.10
// https://level.goorm.io/exam/43113/substring/quiz/1

#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	getline(cin, str);

	int n, m;
	cin >> n >> m;



	cout << str.substr(n - 1, m) << "\n";

	
	return 0;
}