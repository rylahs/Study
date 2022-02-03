#include <bits/stdc++.h>
using namespace std;

int main(void) {
	queue<int> Q;
	Q.push(10); // 10
	Q.push(20); // 10 20
	Q.push(30); // 10 20 30
	cout << Q.size() << "\n"; // 3
	if (Q.empty())
		cout << "Queue is Empty\n";
	else
		cout << "Queue is not Empty\n"; // Queue is not Empty
	Q.pop(); // 20 30
	cout << Q.front() << "\n"; // 20
	cout << Q.back() << "\n"; // 30
	Q.push(40); // 20 30 40
	Q.pop(); // 30 40
	cout << Q.front() << "\n"; // 30
	cout << Q.back() << "\n"; // 40
	Q.pop(); // 40
	cout << Q.front() << "\n"; // 40
	cout << Q.back() << "\n"; // 40
	Q.pop(); // Empty
	//cout << Q.front() << "\n"; // Runtime Error
}