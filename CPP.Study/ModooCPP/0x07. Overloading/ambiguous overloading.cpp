// ��ȣ�� �����ε�
#include <iostream>

void print(int x) { std::cout << "int : " << x << std::endl; }
void print(char x) { std::cout << "double : " << x << std::endl; }

int main() {
	int a = 1;
	char b = 'c';
	double c = 3.2;

	print(a);
	print(b);
	// print(c); // error C2668 : 'print' : �����ε�� �Լ��� ���� ȣ���� ��ȣ�մϴ�.

	// 1. double ��ġ ����
	// 2. double �����ص� ����
	// 
	// Char, unsigned char, short �� int �� ��ȯ�ȴ�.
	// Unsigned short �� int �� ũ�⿡ ���� int Ȥ�� unsigned int �� ��ȯ�ȴ�.
	//	Float �� double �� ��ȯ�ȴ�.
	//	Enum �� int �� ��ȯ�ȴ�.
	// 
	// 3. �������� ����ȯ
	// ������ ����(numeric) Ÿ���� �ٸ� ���� Ÿ������ ��ȯ�ȴ�. (���� ��� float -> int)
	// Enum �� ������ ���� Ÿ������ ��ȯ�ȴ�(���� ��� Enum -> double)
	//	0 �� ������ Ÿ���̳� ���� Ÿ������ ��ȯ�� 0 �� ������ Ÿ���̳� ���� Ÿ������ ��ȯ�ȴ�
	//	�����ʹ� void �����ͷ� ��ȯ�ȴ�.
	
	// ���⼭ double�� int�� char�� �Ѵ� ���� �ֱ� ������ ��ȣ������.

	return 0;
}