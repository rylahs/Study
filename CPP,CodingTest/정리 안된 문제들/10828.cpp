#include <bits/stdc++.h>
using namespace std;


int main_10828(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;

	stack<int> s;
	int top = -1;
	for (int i = 0; i < n; i++)
	{
		string command;
		cin >> command;
		
		if (command == "push")
		{
			int x;
			cin >> x;
			s.push(x);
		}

		if (command == "pop")
		{
			if (s.empty())
				cout << -1 << '\n';
			else
			{
				cout << s.top() << '\n';
				s.pop();
			}
		}

		if (command == "size")
			cout << s.size() << '\n';
		
		if (command == "empty")
		{
			if (s.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}

		if (command == "top")
		{
			if (s.empty())
				cout << -1 << '\n';
			else
				cout << s.top() << '\n';
		}
	}


	return 0;
}

//int arr[10001];
//int main(void)
//{
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//
//	int n;
//	cin >> n;
//	int top = -1;
//	for (int i = 0; i < n; i++)
//	{
//		string command;
//		cin >> command;
//		if (command == "push")
//		{
//			if (top != 10000)
//				cin >> arr[++top];
//		}
//
//		if (command == "top")
//		{
//			if (top != -1)
//				cout << arr[top] << '\n';
//			else
//				cout << top << '\n';
//		}
//		
//
//		if (command == "size")
//			cout << top + 1 << '\n';
//
//		if (command == "empty")
//		{
//			if (top == -1)
//				cout << 1 << '\n';
//			else
//				cout << 0 << '\n';
//		}
//
//		if (command == "pop")
//		{
//			if (top == -1)
//				cout << top << '\n';
//			else
//			{
//				cout << arr[top] << '\n';
//				top--;
//			}
//		}
//
//
//	}
//
//
//
//
//	return 0;
//}