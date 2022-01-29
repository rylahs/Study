#include <stdio.h>

int main_loop1 (void) {
	// 1. for
	// 2. while
	// 3. do-while
	// for (시작값; 조건; 증가 또는 감소)

#pragma region for문
	printf("for문 증가\n");
	for (int i = 0; i < 5; i++)
		printf("반복문 테스트 : %d\n", i);
	
	printf("\nfor문 감소\n");
	for (int i = 5; i > 0; i--)
		printf("반복문 테스트 : %d\n", i);
	printf("\n");
#pragma endregion 
#pragma region While
	// while (조건) -> 조건이 참인 동안 반복 수행
	int num = 0; // 시작 값
	while (num < 5) // 조건
	{
		printf("while문 증가 : %d\n", num++);
	}
	printf("---------------------\n");
	num = 5;
	while (num > 0)
	{
		printf("while문 감소 : %d\n", num--);
	}
#pragma endregion
#pragma region Do-While
	// do-while
	int loopnum = 0;
	printf("\n");
	do {
		printf("do-while 반복 : %d\n", loopnum++);
		

	} while (loopnum < 5);
#pragma endregion


	return 0;
}