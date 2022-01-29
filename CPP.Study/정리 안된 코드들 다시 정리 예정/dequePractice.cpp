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

	//vector���� �������� �޸��Ҵ� ��å�̴�. ���Ұ� �߰��ɶ� �޸𸮰� �����ϸ� ���ο� �޸� ����� �Ҵ��ؼ� ���Ҹ� �߰��Ѵ�.

	vector<int> v(4, 100); // 100���� �ʱ�ȭ �� size 4�� �����̳� v
	deque<int> dq1(4, 100); // 100���� �ʱ�ȭ �� 4���� ���Ҹ� ���� �����̳� dq

	v.push_back(200); // v�� 200 insert
	dq1.push_back(200); // dq1�� 200 insert

	for (vector<int>::size_type i = 0; i < v.size(); i++) // v�� �޸� ����� ���Ҵ�-> ���� ���� ���� -> ���ο� ���� �߰�
		cout << v[i] << " ";
	cout << endl;

	for (deque<int>::size_type i = 0; i < dq1.size(); i++) // dq�� ���ο� �޸� ����� �Ҵ��ϰ� �� ���� �߰�
		cout << dq1[i] << " ";
	cout << endl << endl;
	dq1.push_front(300); // dq1�� �� �տ� 300�� ���� // ���ʿ� ���Ҹ� �߰��ϹǷ� �������� �޸� ����� �Ҵ��ϸ� �߰��Ѵ�.
	dq1.push_back(1000); // dq1�� �� �ڿ� 1000 ����
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

	iter = dq2.begin() + 2; // �ݺ��ڿ� + 2 : begin + 2 = 33
	cout << *iter << endl;

	iter += 2; // �ݺ��ڿ� +2  : 33 -> 40 -> 50
	cout << *iter << endl;
	
	iter -= 3; // �ݺ��ڿ� -3 : 50 -> 40-> 33 -> 22 !
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

	iter1 = dq3.begin() + 2; // ���� + 2�� �ݺ��ڸ� ����Ŵ
	iter2 = dq3.insert(iter1, 500); // ���Ե� ���Ҹ� ����Ű�� �ݺ���
	cout << *iter2 << endl;

	for (iter1 = dq3.begin(); iter1 != dq3.end(); ++iter1)
		cout << *iter1 << " ";
	cout << endl << endl;


	return 0;
}