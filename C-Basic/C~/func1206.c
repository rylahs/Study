#include <stdio.h>

// �Լ�(�޽��)�� �ǹ� 
void func1() // void func1(void) ���� �ǹ�
{
	for (int i = 0; i < 5; i++)
	{
		printf("void �Լ� ����1 \n");
	}
}
int main_23423() {
	//�Լ��� �������� ����
	//1. void �Լ���()
	//   void : ����
	// �Լ��� ����ϱ� ���ؼ��� �ٸ� �Լ�����
	// �Լ��� �̸��� ȣ��(���)�ؾ߸� ��
	func1(); // func1 �Լ��� ȣ�� �ϴ� �ǹ�
	return 0;
}