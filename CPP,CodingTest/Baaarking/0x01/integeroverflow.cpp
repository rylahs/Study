#include <bits/stdc++.h>
using namespace std;

void func1() // overflow
{
	// 128���� ���ļ� hi�� ����ϴ� �Լ�
	// s = 127 => s++ => -128 overflow
	for (char s = 0; s < 128; s++) // invinity loop
		cout << "hi";
}

int func2() {
	// 50!�� 61�� ���� �������� ��ȯ�ϴ� �Լ�
	int r = 1;
	for (int i = 1; i <= 50; i++) {
		r = r * i % 61;
	}
	return r;
}

int func3() {
	// 10�� 10 �ŵ������� 1000000007�� ���� �������� ��ȯ�ϴ� �Լ�
	// 10������� overflow�� �ɸ��� ������ 10�￡ 10�� ���ϰ� �Ǹ� 100������ Integer OverFlow�� �ɸ���.
	int a = 10;
	int mod = 1000000007;
	for (int i = 0; i < 10; i++) {
		a = 10 * a % mod;
	}
	
	return a;
}

int main()
{
	//func1();
	cout << func2() << "\n";
	cout << func3() << "\n";
	return 0;
}