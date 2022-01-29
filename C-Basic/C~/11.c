#include <stdio.h>
void showArr(int arr[], int size)
{
	//arrNum의 위치정보와 arr 위치정보는 동일
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

// hard coding : 숫자나 문자열 정보를 변수 없이 사용하는 행위
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
	// 배열 크기 5인 정수형 배열 선언
	// 배열 초기값 지정할 때는 크기 생략 가능
	int arr_a[5]; //초기값없을떄는 크기 생략 불가능
	int arrNum[] = { 10, 20, 30, 40, 50 };
	printf("배열의 첫번째 요소값 : %d\n", arrNum[0]);
	int n = sizeof(arrNum) / sizeof(int);
	printf("배열의 크기 : %d\n", n);
	showArr(arrNum, n); // 배열 매개변수 전달

	int arrNum2[2][3] = {
		{10, 20, 30},
		{40, 50, 60}
	};
	showArr2(arrNum2, 2, 3);
	// \n : 줄바꿈, \t: 탭키 적용
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", arrNum2[i][j]);
		}
		printf("\n");
	}

	// 일반 변수 매개 변수 전달
	int n11 = 10;
	int n21 = 20;
	// 일반변수 매개변수 전달 (Call by Value)
	showVar(n, n21);
	printf("n:%d, n2:%d\n", n11, n21);
	
	return 0;
}