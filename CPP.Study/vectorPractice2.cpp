#include <iostream>
#include <vector>
using namespace std;
int main_vec2(void) {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter; // 정방향 반복자
	vector<int>::reverse_iterator r_iter; //역방향 반복자

	for (iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	for (r_iter = v.rbegin(); r_iter != v.rend(); ++r_iter)
		cout << *r_iter << " ";
	cout << endl << endl;

	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int>::iterator iter1 = v1.begin() + 2;
	vector<int>::iterator iter2;
	// iter1가 가리키는 위치에 정수 100을 삽입
	// iter2는 삽입한 정수를 가리키는 반복자

	iter2 = v1.insert(iter1, 100);
	for (iter1 = v1.begin(); iter1 != v1.end(); ++iter1)
		cout << *iter1 << " ";
	cout << endl;
	cout << *iter2 << endl;
	cout << endl;

	vector<int> v2;
	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(30);
	v2.push_back(40);
	v2.push_back(50);

	vector<int>::iterator iter3 = v2.begin() + 2;
	//iter가 가리키는 위치에 정수 100을 3개 삽입1
	v2.insert(iter3, 3, 100);
	for (iter3 = v2.begin(); iter3 != v2.end(); ++iter3) {
		cout << *iter3 << " ";
	}
	cout << endl;

	vector<int> v3;
	v3.push_back(100);
	v3.push_back(200);
	v3.push_back(300);

	iter3 = v3.begin() + 1;
	// iter3가 가리키는 위치에 [v3.begin(), v3.end()) 구간의 원소 삽입
	v3.insert(iter3, v2.begin(), v2.end());

	for (iter3 = v3.begin(); iter3 != v3.end(); ++iter3)
		cout << *iter3 << " ";
	cout << endl << endl;

	vector<int> v4;
	v4.push_back(10);
	v4.push_back(20);
	v4.push_back(30);
	v4.push_back(40);
	v4.push_back(50);
	v4.push_back(60);
	
	vector<int>::iterator iter4;
	vector<int>::iterator iter5;

	for (iter4 = v4.begin(); iter4 != v4.end(); ++iter4)
		cout << *iter4 << " ";
	cout << endl;

	iter4 = v4.begin() + 2;
	// iter가 가리키는 위치의 원소를 제거하기 위함이다. iter4의 다음 원소는 40이고 원소 30을 제거한다.
	iter5 = v4.erase(iter4);

	for (iter4 = v4.begin(); iter4 != v4.end(); ++iter4)
		cout << *iter4 << " ";
	cout << endl;

	// [v4.begin() + 1, v4.end() ) 구간 원소 제거
	iter5 = v4.erase(v4.begin() + 1, v4.end());

	for (iter4 = v4.begin(); iter4 != v4.end(); ++iter4)
		cout << *iter4 << " ";
	cout << endl << endl;

	vector<int> v5;
	v5.push_back(50);
	v5.push_back(150);
	v5.push_back(250);
	v5.push_back(350);
	v5.push_back(450);

	vector<int> v6(v5.begin(), v5.end()); // 순차열 v5.begin(), v5.end()로 v6 초기화 생성자로 초기화 하는 방법
	vector<int>::iterator iter6;
	for (iter6 = v6.begin(); iter6 != v6.end(); ++iter6)
		cout << *iter6 << " ";
	cout << endl;

	vector<int> v7;
	v7.assign(v5.begin(), v5.end());
	// v7에 순차열 [v5.begin(), v5.end()) 할당 , assign으로 초기화 하는 방법
	for (iter6 = v7.begin(); iter6 != v7.end(); ++iter6)
		cout << *iter6 << " ";
	cout << endl;


	vector<int> v8;
	v8.push_back(10);
	v8.push_back(120);
	v8.push_back(140);
	v8.push_back(160);
	v8.push_back(180);
	v8.push_back(200);

	vector<int> v9;
	v9.push_back(10);
	v9.push_back(120);
	v9.push_back(150);

	if (v8 == v9) // 원소 갯수, 원소값이 모두 일치해야 출력
		cout << "v1 == v2" << endl;
	if (v8 != v9) // 모든 원소가 같은게 아니면 출력
		cout << "v1 != v2" << endl;
	if (v8 < v9) // 원소 하나하나 비교해서 v9 원소가 크면 true 
		cout << "v1 < v2" << endl;

	return 0;
}