// �Լ�?
// Hello World! -> 100�� loop

// Integer Return
// Add : Function Name
// () : �Ű�����, ����, �μ�, �Ķ����
// ���ڸ� �޾Ƽ� ó���� �ϰ� ����� ����
// return ���� ��ȯ
// ; -> �ٹٲ��� �ǹ�
// ��ǰȭ, ���ȭ, ����ȭ�� ���ڴ� - �̷�
// �ڵ��� �������� �������� ��������, Ȯ�强�� ����.

#include <stdio.h>

int Add_1201(int a, int b) {
	return a + b;
	// int c = a + b;
	// return c;
}

//Void : ����, ��, ���
int AddOne(int a) {
	a += a;
	return a;
}

// �Լ� �̸� ���� get_name �ҹ���, �ܾ ���յ� �� ����� ��� ����
// strict(������) ���� �ƴ�
// ���� ����� ǥ���ؼ� �̸��� �����ϸ� 100��


// 212 SimpleAddFunc.c 30��;;


int main_1201(void) {
	// for �Լ� function
	// 212p
	// �μ��� �ٲ�� ������ 100�� -> �Լ�
	/*int result;
	result = Add(5, 10);
	printf("%d\n", result);

	result = Add(10, 55);
	printf("%d\n", result);*/

	//���ϱ� 
	//�Լ� ȣ�� (Function Call)
	//�Լ� �̸� (�Ұ�ȣ)
	// RAM 16GB : �ֹ߼� �� �޸�
	// CPU :
	// SSD / HARD : ������ ���� -> ���Ϸ� ����

	int result; // ����
	result = Add_1201(743, 593); //�ʱ�ȭ
	// ���� �� �ʱ�ȭ
	// int result = 0;
	

	printf("%d\n", result);
	result = AddOne(result);
	printf("%d\n", result);

	return 0;
}