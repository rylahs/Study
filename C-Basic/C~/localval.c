#include <stdio.h>
// �ǽ� 09-02 ~ 09-04 
// 
// LocalVariable.c
void SimpleFuncOne(void)
{
	int num = 10;
	num++;
	printf("SimpleFuncOne num : %d\n", num);
	return 0; // SimpleFuncOne�� ������ ����
}

void SimpleFuncTwo(void)
{
	int num1 = 20;
	int num2 = 30;
	num1++, num2--;
	printf("SimpleFuncTwo num1 & num2 : %d %d\n", num1, num2);

	return 0; // SimpleFuncOne�� ������ ����
}
int main_local (void)
{
	int num = 17;
	SimpleFuncOne();
	SimpleFuncTwo();
	printf("main num : %d\n\n\n", num);
	int count;
	for (count = 0; count < 3; count++)
	{
		int num3 = 0;
		num3++;
		printf("%d�� �ݺ�, �������� num3�� %d \n", count + 1, num3);
	}
	if (count == 3)
	{
		int num3 = 7;
		num3++;
		printf("if�� ���� �������� num3�� %d \n", num3);
	}
	printf("\n\n");

	int num4 = 1;
	if (num4 == 1)
	{
		int num4 = 7; // �ּ�ó���ϸ� �Ѵ� 11
		num4 += 10; // ���ϸ� 17 1
		printf("if�� ���� �������� num4 :  %d \n", num4);
	}
	printf("main �Լ� ���� ���� ���� num4 : %d \n", num4);


	return 0;
}