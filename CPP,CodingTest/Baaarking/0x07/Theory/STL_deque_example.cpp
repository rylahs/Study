#include <bits/stdc++.h>
using namespace std;

int main(void) {
	deque<int> DQ;
	DQ.emplace_front(10); // 10
	DQ.emplace_back(50); // 10 50
	DQ.emplace_front(24); // 24 10 50

	for (auto& e : DQ)
		cout << e << " ";
	cout << "\n";
	cout << DQ.size() << "\n"; // 3

	if (DQ.empty())
		cout << "Deque is Empty\n";
	else
		cout << "Deque is not Empty\n"; // Deque is not Empty

	DQ.pop_front(); // 10 50
	DQ.pop_back(); // 10
	cout << DQ.back() << "\n"; // 10
	
	DQ.emplace_back(72); // 10 72
	cout << DQ.front() << "\n"; // 10
	
	DQ.emplace_back(12); // 10 72 12
	DQ[2] = 17; // 10 72 17

	DQ.insert(DQ.begin() + 1, 33); // 10 33 72 17
	DQ.insert(DQ.begin() + 4, 60); // 10 33 72 17 60

	for (auto& e : DQ)
		cout << e << " ";
	cout << "\n";

	DQ.erase(DQ.begin() + 3); // 10 33 72 60
	cout << DQ[3] << "\n"; // 60
	DQ.clear(); // Empty

	if (DQ.empty())
		cout << "Deque is Empty\n"; // Deque is Empty
	else
		cout << "Deque is not Empty\n";

}