#include <stdio.h>

void func2(int num)
{
	printf("�Լ� ���� 2��°-> �Ű����� �� : %d\n", num);
}
// ���̸� ��� �ϴ� �Լ�
void funcAge(int age)
{
	printf("���� ���� : %d\n", age);
}
// �̸��� ����ϴ� �Լ�
void funcName(char* name)
{
	printf("�̸� : %s\n", name);
}
// �����Ը� ����ϴ� �Լ�
void funcWeight(double weight)
{
	printf("������ : %.2lf", weight);
}
void showAll(char* name, int age, double weight)
{
	printf("�̸�   : %s\n", name);
	printf("����   : %d\n", age);
	printf("������ : %.1lf\n", weight);
}
int main_fnc2() {
	// �Ű�����(�μ�, ����, �Ķ����)
	// -> �Լ�()�ȿ� ���� ����
	// 2. void �Լ�(�޽��)��(�Ű�����)

	func2(100); // func2 �Լ��� ȣ��(���)
	funcName((char*)("ȫ�浿"));
	funcAge(100); // funcAge �Լ� ȣ��
	funcWeight(71.5);
	printf("\n\n");
	showAll((char*)"ȫ�浿", 100, 71.5);
	return 0;
}
