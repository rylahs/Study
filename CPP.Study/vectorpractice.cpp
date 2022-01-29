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

	cout << v[0] << ", " << v.front() << endl; // ù��° ����
	cout << v[4] << ", " << v.back() << endl; // ������ ����
	cout << endl;
	v.front() = 32768; // ù��° ���� ����
	v.back() = 65536; // ������ ���� ����
	for (vector<int>::size_type i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl << endl;
	v[0] = 5030; // ���� ���� ���� 0 index ����
	v[4] = 2105; // ���� ���� ���� 4 index ����
	for (vector<int>::size_type i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl << endl;

	v.at(0) = 249495; // ���� ���� �ִ� 0 index ������ ����
	v.at(4) = 594942; // ���� ���� �ִ� 4 index ������ ����
	for (vector<int>::size_type i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl << endl;
	// [] �����ڿ� at�� ����̳� ����� ����
	// ���� ������ ���ΰ� ������ at �Լ��� in range�̸� �����ؼ� ��ȯ�ϰ� �ƴϸ� out of range ���ܸ� �߻���.

	try {
		cout << v.at(0) << endl;
		cout << v.at(3) << endl;
		cout << v.at(6) << endl; // throw out_of_range ����
	}
	catch (out_of_range& e) {
		cout << e.what() << endl << endl;
	}
	
	vector<int> v1(5, 1); // �ʱⰪ 1�� 5���� ���Ҹ� ������ �����̳� vector ����

	for (vector<int>::size_type i = 0; i < v1.size(); ++i) {
		cout << v1[i] << " ";
	}
	cout << endl;

	v1.assign(5, 2); // 5�� ���� ���� 2�� �Ҵ�
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

	vector<int>::iterator iter = v3.begin(); // ���� ���� 50�� ����Ų��.
	cout << *iter << endl;

	iter += 2; // ���� 603�� ����Ų��.
	cout << *iter << endl;

	iter -= 1; // ���� 150�� ����Ų��.
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

	cout << *iter_a << endl; // ����Ű�� ������ ����
	cout << *c_iter_a << endl;

	cout << *++iter_a << endl;
	cout << *++c_iter_a << endl;

	*iter_a = 100; // �Ϲ� �ݺ��ڴ� ����Ű�� ���Ҹ� ���� �� �� ����
	//*c_iter_a = 500; // const�� ����� ������ �Ұ���
	cout << *iter_a << endl;
	cout << endl << endl;

	vector<int> v5;
	int arrayF[5]{ 83000, 73000, 13000, 53000, 23000 };
	v5.push_back(83204);
	v5.push_back(73201);
	v5.push_back(13202);
	v5.push_back(53203);
	v5.push_back(23206);

	vector<int>::iterator iter5 = v5.begin(); // iter5�� ���� ���ҷ� �̵� �����ϰ� ������ ������ ������ �ݺ����̴�.
	int* p = arrayF;
	cout << *iter << ", " << *p << endl; // iter5�� pó�� �����Ѵ�.

	vector<int>::const_iterator citer5 = v5.begin(); // citer5�� ���� ���ҷ� �̵��� ���������� ������ ������ �Ұ����� �ݺ����̴�.
	const int* cp = arrayF;
	cout << *citer5 << ", " << *cp << endl; //citer5�� cpó�� �����Ѵ�.

	const vector<int>::iterator iter5_const = v5.begin(); // iter5_const�� ���� ���ҷ� �̵��� �Ұ����ϰ� ������ ������ ������ �ݺ����̴�.
	int* const p_const = arrayF; // iter5_const�� p_constó�� �����Ѵ�.
	cout << *iter5_const << ", " << *p_const << endl;

	const vector<int>::const_iterator citer5_const = v5.begin(); // citer5_const�� ���� ���ҷ� �̵��� �Ұ����ϰ� ������ ������ �Ұ����� �ݺ����̴�.
	const int* const cp_const = arrayF; // citer5_const�� cp_constó�� �����Ѵ�.
	cout << *citer5_const << ", " << *cp_const << endl;


	return 0;
}