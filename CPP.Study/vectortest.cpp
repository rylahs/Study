#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

int main(void) {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(40);
	v.push_back(60);
	v.push_back(120);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	cout << typeid(vector<int>::size_type).name() << endl;

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl << endl;

	cout << "v.size() : " << v.size() << endl;
	cout << "v.capacity() : " << v.capacity() << endl;
	cout << "v.max_size() : " << v.max_size() << endl;
	cout << endl << endl;

	vector<int> v2;
	cout << "vector's capacity() " << endl;
	cout << "size : " << v2.size() << "  capacity() : " << v2.capacity() << endl;
	v2.push_back(10);
	cout << "size : " << v2.size() << "  capacity() : " << v2.capacity() << endl;
	v2.push_back(20);
	cout << "size : " << v2.size() << "  capacity() : " << v2.capacity() << endl;
	v2.push_back(40);
	cout << "size : " << v2.size() << "  capacity() : " << v2.capacity() << endl;
	v2.push_back(80);
	cout << "size : " << v2.size() << "  capacity() : " << v2.capacity() << endl;
	v2.push_back(120);
	cout << "size : " << v2.size() << "  capacity() : " << v2.capacity() << endl;
	v2.push_back(240);
	cout << "size : " << v2.size() << "  capacity() : " << v2.capacity() << endl;
	v2.push_back(480);
	cout << "size : " << v2.size() << "  capacity() : " << v2.capacity() << endl;
	v2.push_back(960);
	cout << "size : " << v2.size() << "  capacity() : " << v2.capacity() << endl;
	v2.push_back(1920);
	cout << "size : " << v2.size() << "  capacity() : " << v2.capacity() << endl;
	v2.push_back(3840);
	cout << "size : " << v2.size() << "  capacity() : " << v2.capacity() << endl;
	cout << endl << endl;

	vector<int> v3;
	v3.reserve(8);
	cout << "vector's capacity() " << endl;
	cout << "size : " << v3.size() << "  capacity() : " << v3.capacity() << endl;
	v3.push_back(10);
	cout << "size : " << v3.size() << "  capacity() : " << v3.capacity() << endl;
	v3.push_back(20);
	cout << "size : " << v3.size() << "  capacity() : " << v3.capacity() << endl;
	v3.push_back(40);
	cout << "size : " << v3.size() << "  capacity() : " << v3.capacity() << endl;
	v3.push_back(80);
	cout << "size : " << v3.size() << "  capacity() : " << v3.capacity() << endl;
	v3.push_back(120);
	cout << "size : " << v3.size() << "  capacity() : " << v3.capacity() << endl;
	v3.push_back(240);
	cout << "size : " << v3.size() << "  capacity() : " << v3.capacity() << endl;
	v3.push_back(480);
	cout << "size : " << v3.size() << "  capacity() : " << v3.capacity() << endl;
	v3.push_back(960);
	cout << "size : " << v3.size() << "  capacity() : " << v3.capacity() << endl;
	v3.push_back(1920);
	cout << "size : " << v3.size() << "  capacity() : " << v3.capacity() << endl;
	v3.push_back(3840);
	cout << "size : " << v3.size() << "  capacity() : " << v3.capacity() << endl;

	for (vector<int>::size_type i = 0; i < v3.size(); ++i) {
		cout << v3[i] << " ";
	}
	cout << endl;
	cout << endl << endl;

	vector<int> v4(5); // 0으로 초기화된 size가 5인 vector 컨테이너
	v4.push_back(10);
	v4.push_back(20);
	v4.push_back(40);
	v4.push_back(80);
	v4.push_back(160);

	for (vector<int>::size_type i = 0; i < v4.size(); ++i) {
		cout << v4[i] << " ";
	}
	cout << endl;
	vector<int> v5(5); // 0으로 초기화된 size가 5인 vector 컨테이너
	v5[0] = 10; // 0 -> 10
	v5[1] = 20; // 0 -> 20
	v5[2] = 40; // 0 -> 40
	v5[3] = 80; // 0 -> 80
	v5[4] = 160;// 0 -> 160
	for (vector<int>::size_type i = 0; i < v5.size(); ++i)
		cout << v5[i] << " ";
	cout << endl;

	vector<int> v6(5); // 기본값 0 으로 초기화된 size가 5인 컨테이터 vector
	for (vector<int>::size_type i = 0; i < v6.size(); ++i) {
		cout << v6[i] << " ";
	}
	cout << endl;

	vector<int> v7(5, 0); // 기본값 0으로 초기화된 size가 5인 컨테이너 vector
	for (vector<int>::size_type i = 0; i < v7.size(); ++i) {
		cout << v7[i] << " ";
	}
	cout << endl;

	vector<int> v8(5, 10); // 기본값 10으로 초기화 된 size가 5인 컨테이너 vector 
	for (vector<int>::size_type i = 0; i < v8.size(); ++i) {
		cout << v8[i] << " ";
	}
	cout << endl;
	cout << endl << endl;
	vector<int> v9(5); // 기본값이 0으로 초기화된 size가 5인 컨테이너 vector 

	v9[0] = 10;
	v9[1] = 50;
	v9[2] = 105;
	v9[3] = 185;
	v9[4] = 204;
	for (vector<int>::size_type i = 0; i < v9.size(); ++i) {
		cout << v9[i] << " ";
	}
	cout << endl;

	cout << "Size : " << v9.size() << "  Capacity : " << v9.capacity() << endl;


	v9.resize(10); // 기본값이 0으로 초기화된 size가 10인 컨테이너로 변경 
	for (vector<int>::size_type i = 0; i < v9.size(); ++i) {
		cout << v9[i] << " ";
	}
	cout << endl;
	cout << "Size : " << v9.size() << "  Capacity : " << v9.capacity() << endl;

	v9.resize(5); // 기본값이 0으로 초기화된 size가 5인 컨테이너로 변경 capacity는 변하지 않음
	for (vector<int>::size_type i = 0; i < v9.size(); ++i) {
		cout << v9[i] << " ";
	}
	cout << endl;
	cout << "Size : " << v9.size() << "  Capacity : " << v9.capacity() << endl;




	return 0;
}