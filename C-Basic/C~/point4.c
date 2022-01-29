#include <stdio.h>
int sum(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	return a / b;
}
void ptrFunc(int(*ptr)(int, int), int n, int n2)
{
	printf("결과값 : %d\n", ptr(n, n2));
}
int main(void)
{
	int (*funcPtr)(int, int);
	int num1, num2;
	printf("숫자 1 입력 : ");
	scanf_s("%d", &num1);
	printf("숫자 2 입력 : ");
	scanf_s("%d", &num2);
	funcPtr = sum;
	printf("덧셈 결과 : %d\n", funcPtr(num1, num2));

	funcPtr = sub;
	printf("뺄셈 결과 : %d\n", funcPtr(num1, num2));

	funcPtr = mul;
	printf("곱셈 결과 : %d\n", funcPtr(num1, num2));

	funcPtr = div;
	printf("나눗셈 결과 : %d\n", funcPtr(num1, num2));

	printf("\n\n");
	ptrFunc(mul, num1, num2);
	return 0;
}
/*
#include <stdio.h>

int sum(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int div(int a, int b) {
	return a / b;
}

void ptrFunc(int(*ptr)(int, int), int n, int n2) {
	printf("결과값: %d\n", ptr(n, n2));
}

int main()
{
	int (*funcPtr)(int, int);
	int num, num2;
	printf("숫자1 입력: ");
	scanf_s("%d", &num);
	printf("숫자2 입력: ");
	scanf_s("%d", &num2);

	funcPtr = sum;
	printf("덧셈 결과: %d\n", funcPtr(num, num2));

	funcPtr = sub;
	printf("뺄셈 결과: %d\n", funcPtr(num, num2));
	// 함수포인터 매개변수
	ptrFunc(funcPtr, num, num2);
}

*/