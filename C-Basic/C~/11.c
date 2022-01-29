#include <stdio.h>
void showArr(int arr[], int size)
{
	//arrNum�� ��ġ������ arr ��ġ������ ����
	for (int i = 0; i < size; i++)
		printf("arr[%d]=%d\n", i, arr[i]);
	arr[0] = 100;
	arr[4] = 500;
}

void showVar(int a, int b)
{
	a = 200;
	b = 300;
	printf("n:%d, n2:%d\n", a, b);
}

// hard coding : ���ڳ� ���ڿ� ������ ���� ���� ����ϴ� ����
void showArr2(int arr[][3], int row, int col)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			printf("arr[%d][%d] : %d", i, j, arr[i][j]);
	arr[0][0] = 100;
	arr[1][2] = 600;
}
int main_12345234()
{
	// �迭 ũ�� 5�� ������ �迭 ����
	// �迭 �ʱⰪ ������ ���� ũ�� ���� ����
	int arr_a[5]; //�ʱⰪ�������� ũ�� ���� �Ұ���
	int arrNum[] = { 10, 20, 30, 40, 50 };
	printf("�迭�� ù��° ��Ұ� : %d\n", arrNum[0]);
	int n = sizeof(arrNum) / sizeof(int);
	printf("�迭�� ũ�� : %d\n", n);
	showArr(arrNum, n); // �迭 �Ű����� ����

	int arrNum2[2][3] = {
		{10, 20, 30},
		{40, 50, 60}
	};
	showArr2(arrNum2, 2, 3);
	// \n : �ٹٲ�, \t: ��Ű ����
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", arrNum2[i][j]);
		}
		printf("\n");
	}

	// �Ϲ� ���� �Ű� ���� ����
	int n11 = 10;
	int n21 = 20;
	// �Ϲݺ��� �Ű����� ���� (Call by Value)
	showVar(n, n21);
	printf("n:%d, n2:%d\n", n11, n21);
	
	return 0;
}