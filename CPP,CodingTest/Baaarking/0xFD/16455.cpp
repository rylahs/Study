#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int kth(std::vector<int>& a, int k)
{
	std::nth_element(a.begin(), a.begin() + k - 1, a.end());
	return a[k - 1];
}