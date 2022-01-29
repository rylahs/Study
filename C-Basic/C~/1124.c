#include <stdio.h>

int main_1124(void) {
	//연산자
	// % 나머지 연산자
	int num1 = 10;
	int num2 = 3;
	int res = num1 % num2;
	printf("나머지 : %d\n", res);

	// 비교 연산자 결과값은 참 1 , 거짓 0
	// > < >= <= ==
	printf("%d\n", num1 > num2);
	printf("%d\n", num1 == num2);

	// 복합연산자
	// +=
	int test = num1 + num2;
	printf("합 : %d\n", test);
	test = test + num1;
	printf("합 : %d\n", test);
	test += num1;
	printf("합 : %d\n", test);

	//논리 연산자 (참, 거짓)
	//비교연산자와 결합해서 많이 사용한다.
	// &&(AND) , ||(OR) !(NOT)

	// 비트 연산자
	// 컴퓨터의 최소 단위 : 비트 (이진수 0, 1 표현)
	// 8bit = 1byte
	// 1024byte = 1kb
	// 1024kb = 1mb
	// 1024mb = 1gb
	// 1024gb = 1tb
	// 1024tb = 1pt

	// 삼항 연산자
	int num3 = 20;
	char ch = (num3 > 39) ? 'A' : 'Z';
	printf("%c\n", ch);

	return 0;
}