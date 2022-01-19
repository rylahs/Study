#include <bits/stdc++.h>
using namespace std;
void func1(int a) { // Call by Value (copy)
	a = 5;
}
void func2(int a[]) { // Call by Reference
	a[0] = 10;
}
struct pt {
	int x, y;
};
void func3(pt a) // Call by Value (copy)
{
	a.x = 10;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 0;
	int arr[3] = { 0, 1, 2 };

	func1(t);
	func2(arr);
	cout << t << "\n";
	for (auto e : arr)
		cout << e << " ";
	cout << "\n";
	pt tmp = { 0, 0 };
	func3(tmp);
	cout << tmp.x << "\n";


	return 0;
}