#include <stdio.h>

int main_marray(void) {

	// 다차원 배열 Miltdimensional Array
//	int i; 
	// □
	
//	int arr[5]; 
	// □□□□□
	// [0] [1] [2] [3] [4]
	
//	int arr2[2][5];
	//□□□□□
	//□□□□□
	// 
	// [0, 0] [0, 1] [0, 2] [0, 3] [0, 4] -> ex) arr2[0][0]
	// [1, 0] [1, 1] [1, 2] [1, 3] [1, 4] -> ex) arr2[1][4]

//	int arr3[4][2];
	//□□
	//□□
	//□□
	//□□

	// [0, 0] [0, 1] -> ex) arr3[0][1]
	// [1, 0] [1, 1]
	// [2, 0] [2, 1]
	// [3, 0] [3, 1] -> ex) arr3[3][0]

//	int arr4[3][3][3];
	//□□□
	//□□□
	//□□□
	
	//□□□
	//□□□
	//□□□
	
	//□□□
	//□□□
	//□□□

	//[0,0,0] [0,0,1] [0,0,2]
	//[0,1,0] [0,1,1] [0,1,2]
	//[0,2,0] [0,2,1] [0,2,2]

	//[1,0,0] [1,0,1] [1,0,2]
	//[1,1,0] [1,1,1] [1,1,2]
	//[1,2,0] [1,2,1] [1,2,2]

	//[2,0,0] [2,0,1] [2,0,2]
	//[2,1,0] [2,1,1] [2,1,2]
	//[2,2,0] [2,2,1] [2,2,2]

	int arr_a[5] = { 1, 2, 3, 4, 5 };
	int arr_a2[2][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10} 
	};
	int arr_a3[4][2] = { 
		{11,12},
		{13,14},
		{15,16},
		{17,18}
	};
	int arr_a4[3][3][3] = { 
		{ 
			{11,12,13},
			{21,22,23},
			{31,32,33}
		}, 
		{
			{44,45,46},
			{54,55,56},
			{64,65,66}
		},
		{
			{77,78,79},
			{87,88,89},
			{97,98,99}
		} 
	};
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("2차원 배열 [%d, %d] 의 값 : %d\n", i, j, arr_a3[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				printf("3차원 배열 [%d, %d, %d] 의 값 : %d\n", i, j, k, arr_a4[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}


	return 0;
}