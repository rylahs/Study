#include <iostream>
#include <deque>
#include <vector>

using namespace std;
int main_deque(void) {
	deque<int> dq;

	for (deque<int>::size_type i = 0; i < 10; ++i)
		dq.push_back((i + 1) * 10);

	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
		cout << dq[i] << ' ';
	cout << endl;

	//vector와의 차이점은 메모리할당 정책이다. 원소가 추가될때 메모리가 부족하면 새로운 메모리 블록을 할당해서 원소를 추가한다.

	vector<int> v(4, 100); // 100으로 초기화 한 size 4의 컨테이너 v
	deque<int> dq1(4, 100); // 100으로 초기화 한 4개의 원소를 갖는 컨테이너 dq

	v.push_back(200); // v에 200 insert
	dq1.push_back(200); // dq1에 200 insert

	for (vector<int>::size_type i = 0; i < v.size(); i++) // v는 메모리 블록을 재할당-> 이전 원소 복사 -> 새로운 원소 추가
		cout << v[i] << " ";
	cout << endl;

	for (deque<int>::size_type i = 0; i < dq1.size(); i++) // dq는 새로운 메모리 블록을 할당하고 새 원소 추가
		cout << dq1[i] << " ";
	cout << endl << endl;
	dq1.push_front(300); // dq1의 맨 앞에 300을 삽입 // 앞쪽에 원소를 추가하므로 앞쪽으로 메모리 블록을 할당하며 추가한다.
	dq1.push_back(1000); // dq1의 맨 뒤에 1000 삽입
	for (deque<int>::size_type i = 0; i < dq1.size(); i++)
		cout << dq1[i] << " ";
	cout << endl << endl;

	deque<int> dq2;
	dq2.push_back(10);
	dq2.push_back(22);
	dq2.push_back(33);
	dq2.push_back(40);
	dq2.push_back(50);

	deque<int>::iterator iter;
	for (iter = dq2.begin(); iter != dq2.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	iter = dq2.begin() + 2; // 반복자에 + 2 : begin + 2 = 33
	cout << *iter << endl;

	iter += 2; // 반복자에 +2  : 33 -> 40 -> 50
	cout << *iter << endl;
	
	iter -= 3; // 반복자에 -3 : 50 -> 40-> 33 -> 22 !
	cout << *iter << endl << endl;

	deque<int> dq3;
	for (int i = 0; i < 10; i++) {
		dq3.push_back((i + 1) * 10);
	}
	deque<int>::iterator iter1;
	deque<int>::iterator iter2;

	for (iter1 = dq3.begin(); iter1 != dq3.end(); ++iter1)
		cout << *iter1 << " ";
	cout << endl;

	iter1 = dq3.begin() + 2; // 시작 + 2에 반복자를 가리킴
	iter2 = dq3.insert(iter1, 500); // 삽입된 원소를 가리키는 반복자
	cout << *iter2 << endl;

	for (iter1 = dq3.begin(); iter1 != dq3.end(); ++iter1)
		cout << *iter1 << " ";
	cout << endl << endl;


	return 0;
}