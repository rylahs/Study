#include <iostream>
#include <vector>

using namespace std;

int main_vp(void) {
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(70);
	v.push_back(120);
	v.push_back(150);

	for (vector<int>::size_type i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl;

	cout << v[0] << ", " << v.front() << endl; // 첫번째 원소
	cout << v[4] << ", " << v.back() << endl; // 마지막 원소
	cout << endl;
	v.front() = 32768; // 첫번째 원소 수정
	v.back() = 65536; // 마지막 원소 수정
	for (vector<int>::size_type i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl << endl;
	v[0] = 5030; // 범위 점검 없는 0 index 참조
	v[4] = 2105; // 범위 점검 없는 4 index 참조
	for (vector<int>::size_type i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl << endl;

	v.at(0) = 249495; // 범위 점검 있는 0 index 원소의 참조
	v.at(4) = 594942; // 범위 점검 있는 4 index 원소의 참조
	for (vector<int>::size_type i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl << endl;
	// [] 연산자와 at의 기능이나 결과는 동일
	// 범위 점검의 여부가 차이임 at 함수는 in range이면 참조해서 반환하고 아니면 out of range 예외를 발생함.

	try {
		cout << v.at(0) << endl;
		cout << v.at(3) << endl;
		cout << v.at(6) << endl; // throw out_of_range 예외
	}
	catch (out_of_range& e) {
		cout << e.what() << endl << endl;
	}
	
	vector<int> v1(5, 1); // 초기값 1의 5개의 원소를 가지는 컨테이너 vector 생성

	for (vector<int>::size_type i = 0; i < v1.size(); ++i) {
		cout << v1[i] << " ";
	}
	cout << endl;

	v1.assign(5, 2); // 5개 원소 값을 2로 할당
	for (vector<int>::size_type i = 0; i < v1.size(); ++i) {
		cout << v1[i] << " ";
	}
	cout << endl << endl;

	vector<int> v2;
	v2.push_back(50);
	v2.push_back(550);
	v2.push_back(750);
	v2.push_back(1250);
	v2.push_back(2250);

	for (vector<int>::size_type i = 0; i < v2.size(); ++i) {
		cout << v2[i] << " ";
	}
	cout << endl;

	for (vector<int>::iterator iter = v2.begin(); iter != v2.end(); ++iter)
		cout << *iter << " ";
	cout << endl << endl;

	vector<int> v3; 
	v3.push_back(50);
	v3.push_back(150);
	v3.push_back(603);
	v3.push_back(202);
	v3.push_back(6035);

	vector<int>::iterator iter = v3.begin(); // 시작 원소 50을 가리킨다.
	cout << *iter << endl;

	iter += 2; // 원소 603을 가리킨다.
	cout << *iter << endl;

	iter -= 1; // 원소 150을 가리킨다.
	cout << *iter << endl;
	cout << endl << endl;

	vector<int> v4;
	v4.push_back(3204);
	v4.push_back(3201);
	v4.push_back(3202);
	v4.push_back(3203);
	v4.push_back(3206);

	vector<int>::iterator iter_a = v4.begin();
	vector<int>::const_iterator c_iter_a = v4.begin();

	cout << *iter_a << endl; // 가리키는 원소의 참조
	cout << *c_iter_a << endl;

	cout << *++iter_a << endl;
	cout << *++c_iter_a << endl;

	*iter_a = 100; // 일반 반복자는 가리키는 원소를 변경 할 수 있음
	//*c_iter_a = 500; // const는 상수라서 변경이 불가능
	cout << *iter_a << endl;
	cout << endl << endl;

	vector<int> v5;
	int arrayF[5]{ 83000, 73000, 13000, 53000, 23000 };
	v5.push_back(83204);
	v5.push_back(73201);
	v5.push_back(13202);
	v5.push_back(53203);
	v5.push_back(23206);

	vector<int>::iterator iter5 = v5.begin(); // iter5는 다음 원소로 이동 가능하고 원소의 변경이 가능한 반복자이다.
	int* p = arrayF;
	cout << *iter << ", " << *p << endl; // iter5는 p처럼 동작한다.

	vector<int>::const_iterator citer5 = v5.begin(); // citer5는 다음 원소로 이동이 가능하지만 원소의 변경이 불가능한 반복자이다.
	const int* cp = arrayF;
	cout << *citer5 << ", " << *cp << endl; //citer5는 cp처럼 동작한다.

	const vector<int>::iterator iter5_const = v5.begin(); // iter5_const는 다음 원소로 이동이 불가능하고 원소의 변경은 가능한 반복자이다.
	int* const p_const = arrayF; // iter5_const는 p_const처럼 동작한다.
	cout << *iter5_const << ", " << *p_const << endl;

	const vector<int>::const_iterator citer5_const = v5.begin(); // citer5_const는 다음 원소로 이동이 불가능하고 원소의 변경이 불가능한 반복자이다.
	const int* const cp_const = arrayF; // citer5_const는 cp_const처럼 동작한다.
	cout << *citer5_const << ", " << *cp_const << endl;


	return 0;
}