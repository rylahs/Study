#include <stdio.h>
int sum(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	return a / b;
}
void ptrFunc(int(*ptr)(int, int), int n, int n2)
{
	printf("����� : %d\n", ptr(n, n2));
}
int main(void)
{
	int (*funcPtr)(int, int);
	int num1, num2;
	printf("���� 1 �Է� : ");
	scanf_s("%d", &num1);
	printf("���� 2 �Է� : ");
	scanf_s("%d", &num2);
	funcPtr = sum;
	printf("���� ��� : %d\n", funcPtr(num1, num2));

	funcPtr = sub;
	printf("���� ��� : %d\n", funcPtr(num1, num2));

	funcPtr = mul;
	printf("���� ��� : %d\n", funcPtr(num1, num2));

	funcPtr = div;
	printf("������ ��� : %d\n", funcPtr(num1, num2));

	printf("\n\n");
	ptrFunc(mul, num1, num2);
	return 0;
}
/*
#include <stdio.h>

int sum(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int div(int a, int b) {
	return a / b;
}

void ptrFunc(int(*ptr)(int, int), int n, int n2) {
	printf("�����: %d\n", ptr(n, n2));
}

int main()
{
	int (*funcPtr)(int, int);
	int num, num2;
	printf("����1 �Է�: ");
	scanf_s("%d", &num);
	printf("����2 �Է�: ");
	scanf_s("%d", &num2);

	funcPtr = sum;
	printf("���� ���: %d\n", funcPtr(num, num2));

	funcPtr = sub;
	printf("���� ���: %d\n", funcPtr(num, num2));
	// �Լ������� �Ű�����
	ptrFunc(funcPtr, num, num2);
}

*/