#include <iostream>
#include <list>

using namespace std;

int main_lpr(void) {
	list<int> lt;

	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);

	list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;

	lt.push_front(100);
	lt.push_front(200);
	for (iter = lt.begin(); iter != lt.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl << endl << endl;
	// list의 큰 특징은 순차열 중간에 원소를 삽입, 제거하더라도 상수 시간 복잡도와 수행 성능을 보인다. 노드를 연결하기만 하면 되서

	list<int> lt1;
	lt1.push_back(10);
	lt1.push_back(20);
	lt1.push_back(30);
	lt1.push_back(40);
	lt1.push_back(50);

	list<int>::iterator iter_lt1 = lt1.begin();
	list<int>::iterator iter_lt2;
	for (iter_lt1 = lt1.begin(); iter_lt1 != lt1.end(); iter_lt1++) {
		cout << *iter_lt1 << " ";
	}
	cout << endl;
	iter_lt1 = lt1.begin();
	++iter_lt1;
	++iter_lt1;
	cout << "iter_lt1 : " << *iter_lt1 << endl;
	iter_lt2 = lt1.erase(iter_lt1);

	for (iter_lt1 = lt1.begin(); iter_lt1 != lt1.end(); iter_lt1++) {
		cout << *iter_lt1 << " ";
	}
	cout << endl;
	cout << "iter_lt2 : " << *iter_lt2 << endl;

	iter_lt1 = iter_lt2;
	iter_lt2 = lt1.insert(iter_lt1, 300); // 30 가리키는 위치에 300 삽입
	for (iter_lt1 = lt1.begin(); iter_lt1 != lt1.end(); iter_lt1++) {
		cout << *iter_lt1 << " ";
	}
	cout << endl;

	cout << "iter_lt2 : " << *iter_lt2 << endl;



	return 0;
}
