#include <stdio.h>
// 함수 프로토 타입 선언(C만)
int funcRtn1();
int funcRtn2();

int main_fucn3(void)
{
	// 3번째 함수 유형
	// 리턴 값의 타입 함수명()
	// 함수가 종료할 때 어떤 값을 반환함.

	int n = funcRtn1();
	printf("함수로 부터 받은 리턴(반환) 값 : %d\n", n);
	int n2 = funcRtn2();
	printf("함수 2로부터 받은 리턴(반환) 값 : %d\n", n2);

	printf("메인 프로그램 종료\n");
	return 0;
}
int funcRtn1()
{
	return 100;
}
int funcRtn2()
{
	int n = 100 + 20;
	return n;
}