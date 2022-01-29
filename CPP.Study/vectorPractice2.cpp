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
	
	vector<int>::iterator iter; // ������ �ݺ���
	vector<int>::reverse_iterator r_iter; //������ �ݺ���

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
	// iter1�� ����Ű�� ��ġ�� ���� 100�� ����
	// iter2�� ������ ������ ����Ű�� �ݺ���

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
	//iter�� ����Ű�� ��ġ�� ���� 100�� 3�� ����1
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
	// iter3�� ����Ű�� ��ġ�� [v3.begin(), v3.end()) ������ ���� ����
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
	// iter�� ����Ű�� ��ġ�� ���Ҹ� �����ϱ� �����̴�. iter4�� ���� ���Ҵ� 40�̰� ���� 30�� �����Ѵ�.
	iter5 = v4.erase(iter4);

	for (iter4 = v4.begin(); iter4 != v4.end(); ++iter4)
		cout << *iter4 << " ";
	cout << endl;

	// [v4.begin() + 1, v4.end() ) ���� ���� ����
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

	vector<int> v6(v5.begin(), v5.end()); // ������ v5.begin(), v5.end()�� v6 �ʱ�ȭ �����ڷ� �ʱ�ȭ �ϴ� ���
	vector<int>::iterator iter6;
	for (iter6 = v6.begin(); iter6 != v6.end(); ++iter6)
		cout << *iter6 << " ";
	cout << endl;

	vector<int> v7;
	v7.assign(v5.begin(), v5.end());
	// v7�� ������ [v5.begin(), v5.end()) �Ҵ� , assign���� �ʱ�ȭ �ϴ� ���
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

	if (v8 == v9) // ���� ����, ���Ұ��� ��� ��ġ�ؾ� ���
		cout << "v1 == v2" << endl;
	if (v8 != v9) // ��� ���Ұ� ������ �ƴϸ� ���
		cout << "v1 != v2" << endl;
	if (v8 < v9) // ���� �ϳ��ϳ� ���ؼ� v9 ���Ұ� ũ�� true 
		cout << "v1 < v2" << endl;

	return 0;
}