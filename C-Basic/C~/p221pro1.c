// 문제 1. 세 개의 정수를 인자로 전달 받아서 그 중 가장 큰 수를 반환하는 함수와 가장 작은 수를 반환하는 함수를 정의해보자.
//        그리고 이 함수들을 호출하는 적절한 main 함수도 작성해보자.

#include <stdio.h>

int maxNum(int a, int b, int c) { // MAX 값을 반환
	if (a > b) // a b 비교해서 a가 크면 
		return (a > c) ? a : c; // a c를 비교해서 큰 값을 반환
	else // b가 크면
		return (b > c) ? b : c; // b c를 비교해서 큰 값을 반환
}

int minNum(int a, int b, int c) { // MIN 값을 반환 
	if (a < b) // a b 비교해서 a가 작으면
		return (a < c) ? a : c; // a c 비교해서 작은 값 반환
	else // b가 작으면
		return (b < c) ? b : c; // b c 비교해서 작은 값 반환
}
int main_1(void)
{
	int inputnum1, inputnum2, inputnum3;
	printf("세 정수를 입력받아 가장 큰 값과 가장 작은 값을 출력합니다.\n");
	printf("세 수를 입력해주세요 : ");

	scanf_s("%d%d%d", &inputnum1, &inputnum2, &inputnum3);

	printf("가장 큰 수는 %d 입니다.\n", maxNum(inputnum1, inputnum2, inputnum3));
	printf("가장 작은 수는 %d 입니다.\n", minNum(inputnum1, inputnum2, inputnum3));
}

