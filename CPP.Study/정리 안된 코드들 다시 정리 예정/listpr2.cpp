#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main_list2() {
	vector<int> v;
	list<int> lt;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);

	vector<int>::iterator viter = v.begin();
	++viter; // 20
	list<int>::iterator liter = lt.begin();
	++liter; // 20

	viter = v.insert(viter, 600); // vector 두번째 요소에 600 삽입
	liter = lt.insert(liter, 600); // list 두번째 요소에 600 삽입

	cout << "vector : " << *viter << endl;
	cout << "list : " << *liter << endl;

	cout << "vector : ";
	for (viter = v.begin(); viter != v.end(); viter++)
		cout << *viter << " ";
	cout << endl;

	cout << "list : ";
	for (liter = lt.begin(); liter != lt.end(); liter++)
		cout << *liter << " ";
	cout << endl << endl;

	list<int> lt_e;
	lt_e.push_back(10);
	lt_e.push_back(20);
	lt_e.push_back(30);
	lt_e.push_back(40);
	lt_e.push_back(50);
	lt_e.push_back(10);
	lt_e.push_back(10);
	lt_e.push_back(10);

	list<int>::iterator liter_e;
	for (liter_e = lt_e.begin(); liter_e != lt_e.end(); liter_e++) {
		cout << *liter_e << " ";
	}
	cout << endl;

	lt_e.remove(10); // 10이라는 원소 모두 제거
	for (liter_e = lt_e.begin(); liter_e != lt_e.end(); liter_e++) {
		cout << *liter_e << " ";
	}
	cout << endl;

	return 0;
}