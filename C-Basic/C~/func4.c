#include <stdio.h>

int addSum(int n1, int n2)
{
	return n1 + n2;
}
int addSum2(int n1, int n2)
{
	int sum = n1 + n2;
	return sum;
}
int sub(int n1, int n2)
{
	return n1 - n2;
}
int main_func4(void)
{
	// 1. void 함수명()
	// 2. void 함수명(매개변수)
	// 3. 리턴타입 함수명()
	// 4. 리턴타입 함수명(매개변수)

	// 함수유형 4번째
	// 리턴타입 함수명 매개변수
	int n = addSum(10, 20);
	printf("덧셈 1: %d\n덧셈 2: %d\n", n , addSum2(10, 200));
	int n2 = sub(500, 200);
	printf("500 - 200 = %d\n", n2);
	return 0;
}