#include <stdio.h> // 표준 입출력 함수 printf, scanf
#include <stdlib.h> // 표준 라이브러리 srand
#include <time.h> // 시간 함수 time
// 배열 매개변수를 사용하여 홀,짝 구분
void checkOdd(int arr[]) {
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) { // 2로 나눈 나머지가 0이면
			printf("%d: 짝수\n", arr[i]);
		}
		else {
			printf("%d: 홀수\n", arr[i]);
		}
	}
}


int main()
{
	// NULL : 참조되지 않음
	int arr[10] = { 0, };
	srand(time(0)); // 랜덤값을 뽑기위해서 시드값 설정

	for (int i = 0; i < 10; i++) {
		int num = (rand() % 100) + 1; // 1 ~ 100
		arr[i] = num;
		printf("%d ", num);
	}
	printf("\n");
	checkOdd(arr);
}
