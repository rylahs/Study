#include <stdio.h>

int main_array3(void) {
	//다차원 배열
	int arr1[10];		// 1차원 배열
	int arr2[4][5];		// 2차원 배열
	//int arr3[2][3][4];	// 3차원 배열

	arr1[0] = 10;
	arr2[0][0] = 10;
	arr2[3][4] = 100;

	int arr4[2][2];
	arr4[0][0] = 10;
	arr4[0][1] = 20;
	arr4[1][0] = 30;
	arr4[1][1] = 40;

	int arr5[2][3] = {
		{10, 20, 30}, // 1행
		{40, 50, 60}  // 2행
	};

	printf("[%d][%d] : %d\n", 0, 0, arr5[0][0]);
	arr5[1][1] = 100; // 50 -> 100
	printf("[%d][%d] : %d\n", 0, 0, arr5[1][1]);

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			printf("arr5[%d][%d] : %d ", i, j, arr5[i][j]);
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			printf("%d\t", arr5[i][j]);
		printf("\n");
	}

	// 3차원 배열
	// A, B, C 학급의 학생 1, 2, 3의 국어, 수학 점수
	int arr6[3][3][2] = {
		{
			{70, 80},
			{90, 80},
			{90, 90}
		},
		{
			{70, 80},
			{90, 80},
			{90, 90}
		},
		{
			{70, 80},
			{90, 80},
			{90, 90}
		}
	};
	int sumC = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			sumC += arr6[2][i][j];
		}
	}

	printf("C학급 총점 : %d\n", sumC);
	printf("\n");

	// 2행 5열 2차원 배열을 만들고 아래와 같이 출력
	// 출력
	// 1 2 3 4 5
	// 6 7 8 9 10
	
	int arr7[2][5];
	int iter = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			arr7[i][j] = ++iter;
			printf("%d ", arr7[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	// 구구단의 결과 값을 2차원 배열에 저장한 후에 출력
	// 2x1=2  3x1=3  4x1=4 ........... 9x1=9
	// 2x2=4  3x2=6  4x2=8 ........... 9x2=18
	//.....................................
	// 2x9=18 3x9=27 4x9=36 .......... 9x9=81

	int arrayGugu[9][8];
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			arrayGugu[i - 1][j - 2] = i * j;
			printf("%dx%d=%2d\t",j , i, arrayGugu[i - 1][j - 2]);
		}
		printf("\n");
	}
	

	return 0;
}