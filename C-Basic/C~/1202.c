//반복문 for , while
//for 할수 있는건 while, while -> for
//for - 확정적인 반복 횟수
//while - 불확실한 반복
//temporary=임시의
//부품화 모듈화 단위화 - 함수
// 만약에 ~할때 만약에 1을 입력했을때 -> if
// scanf -> 버퍼 오버플로우
// 8bit = 1byte
// 1024byte = 1KB
// 1024KB = 1MB
// 1024MB = 1GB
// 1024GB =- 1TB
// int -> 4byte
// 8 * 4 = 32bit
// unsigned(양수)= 4 294,967,296 => -21억 ~ 21억

//P221 문제1, 문제2


#include <stdio.h>
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
void fibo(int n) {
	long long fiboArray[3] = { 0, 1, 1};
	int fiboCount = 1;
	if (n == 1) {
		printf("%llu ", fiboArray[n - 1]);
		return;
	}

	while(fiboCount != n) {
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

int main_1202(void) {
	// Page 221. Function
	// 12/01 함수 기본 문법, 함수 작성
	// 12/02 스스로 함수 정의
	// 12/03 챕터9
	// Problem 3. 인자로 전달된 수 만큼의 피보나치 수열을 출력하는 함수를 정의해보자.
	// 예를 들어서 프로그램 사용자가 5를 입력하면 0에서부터 시작해서 총 5개의 피보나치 수열을 출력해야 한다. 참고로 피보나치 수열은 다음과 같다.
	// 0, 1, 1, 2, 3, 5, 8, 21, 34
	// 이렇듯 피보나치 수열은 0과 1에서 시작한다. 그리고 세 번쨰 이후의 수열부터는 이전의 두 값의 합으로 구성된다. 즉, 세 번째 수는 0과 1의 합으로 이뤄져서 1이 되고,
	// 네번째 수는 1과 1의 합으로 이뤄져서 2가 된다.
	int fiboInput;
	printf("피보나치 수열을 출력하는 프로그램 입니다.\n");
	printf("Input N : ");
	scanf_s("%d", &fiboInput);

	//fibo(fiboInput);
	showFiboSeries(fiboInput);
	

	return 0;
}