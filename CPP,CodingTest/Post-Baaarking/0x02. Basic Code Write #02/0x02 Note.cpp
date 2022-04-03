#include <bits/stdc++.h>
using namespace std;

void func(int a) // Call by Value (Copy)
{
	a = 5;
}
void func(int arr[]) // Call by Address (Address / Pointer)
{
	arr[0] = 10;
}

struct pt {
	int x, y;
};

void func(pt a) // Call by value (C#µµ µø¿œ)
{
	a.x = 10;
}

void swapCbV(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void swapCbP(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void swapCbRef(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
int main(void)
{
	int t = 0;
	func(t);
	cout << t << "\n";;

	int arr[3] = { 1, 2, 3 };
	func(arr);
	cout << arr[0] << "\n";

	pt tmp = { 0, 0 };
	func(tmp);
	cout << tmp.x << "\n";

	int a = 10;
	int b = 20;
	swapCbV(a, b);

	cout << a << " " << b << "\n";

	swapCbP(&a, &b);
	cout << a << " " << b << "\n";

	swap(a, b);
	swapCbRef(a, b);
	cout << a << " " << b << "\n";
}