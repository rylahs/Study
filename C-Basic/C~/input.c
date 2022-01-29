#include <stdio.h>

int main_input(void) { // 메인 함수 : 프로그램이 처음 시작하는 위치
	// 표준 C문법 : ANSI C
	int num = 0;
	printf("Input Number : ");
	scanf_s("%d", &num); // num 변수의 주소값에 값을 키보드로 입력 받아서 저장
	printf("Number : %d\n", num);
	
	char ch;
	printf("Input Character : ");
	scanf_s(" %c", &ch);
	printf("Char : %c\n", ch);


	double dNum = 0.0;
	printf("Input double Num : ");
	scanf_s("%lf", &dNum);
	printf("Double : %lf\n", dNum);

	char name[70];
	printf("Input String : ");
	scanf_s("%s", name);
	printf("String : %s\n", name);

	return 0;
}