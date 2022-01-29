// 문제 3. 인자로 전달된 수만큼의 피보나치 수열을 출력하는 함수를 정의해보자.
// 예를 들어서 프로그램 사용자가 5를 입력하면 0에서부터 시작해서 총 5개의 피보나치 수열을 출력해야 한다.
// 참고로 피보나치 수열은 다음과 같다.
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 .......
#include <stdio.h>
/*
// 실습 사용 코드
void showFiboSeries(int n) {
	//피보나치 수열에 대한 알고리즘(로직)
	int f1 = 0, f2 = 1, temp;
	// if n == 1
	if (n == 1) {
		printf("%d", f1);
	}
	else {
		printf("%d, %d", f1, f2);
	}
	for (int i = 0; i < n - 2; i++) {
		temp = f2;
		f2 = f1 + f2;
		f1 = temp;
		printf(", %d", f2);
	}
}
*/
void fibo(int n) 
{
	long long fiboArray[3] = { 0, 1, 1 };
	int fiboCount = 1;
	if (n == 1) {
		printf("%llu ", fiboArray[n - 1]);
		return;
	}
	if (n == 2) {
		printf("%llu %llu ", fiboArray[n - 2],  fiboArray[n - 1]);
		return;
	}
	while (fiboCount != n) {
		if (fiboCount < 3) {
			for (int i = 0; i < n; i++) {
				printf("%llu ", fiboArray[i]);
				fiboCount++;
				if (fiboCount > 3) {
					fiboCount--;
					break;
				}

			}
		}
		else {
			fiboArray[0] = fiboArray[1];
			fiboArray[1] = fiboArray[2];
			fiboArray[2] = fiboArray[0] + fiboArray[1];
			printf("%llu ", fiboArray[2]);
			fiboCount++;
			if (fiboCount % 10 == 0)
				printf("\n");
		}
	}
}
int main(void) 
{
	int fiboInput;
	printf("피보나치 수열을 출력하는 프로그램 입니다.\n");
	printf("Input N : ");
	scanf_s("%d", &fiboInput);

	fibo(fiboInput);
	//showFiboSeries(fiboInput);


	return 0;
}