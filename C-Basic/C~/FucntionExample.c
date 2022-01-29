// P208~ 220 Example.c
#include <stdio.h>

// P212 SimpleAddFunc.c : AddFunc && P214 SmartAddFunc.c - Add Function
int Add(int num1, int num2) { // 인자 전달 (O), 반환 결과 (O), int
	return num1 + num2;
}
// P214 SmartAddFunc.c : AddShowResult Func - Print Function
void AddShowResult(int num) { // 인자 전달 (O), 반환 결과 (X) , void
	printf("덧셈 결과 출력 : %d\n", num);
}
// P214 SmartAddFunc.c : ReadNum Func - Input Function
int ReadNum() { // 인자 전달 (X), 반환 결과(O)
	int num;
	scanf_s("%d", &num);
	return num;
} 

// P214 SmartAddFunc.c : ReadNum Func - Init Print Function
void HowToUseThisProg(void) { // 인자전달 (X), 반환 결과 (X)
	printf("두 개의 정수를 입력하면 덧셈 결과가 출력됩니다.\n");
	printf("자! 그러면 두 개의 정수를 입력하세요\n");
}

// P218 NumCompare.c : NumberCompare - Number Compare Function
int NumberCompare(int num1, int num2); // 함수 정의

// P219 AbsoCompare.c : AbsoCompare - Absolute Number Compare Function
int AbsoCompare(int num1, int num2); // 함수 정의
// P219 AbsoCompare.c : GetAbsoValue - Get Absolute Number Function
int GetAbsoValue(int num); // 함수 정의

int main(void) {
	// P209 PrinfOutput.c
	int num1, num2;
	num1 = printf("12345\n");
	num2 = printf("I love my home\n");
	printf("%d %d \n", num1, num2);
	printf("\n\n");
	// P212 SimpleAddFunc.c
	int result;
	result = Add(3, 4);
	printf("Add Result : %d\n", result);
	result = Add(5, 8);
	printf("Add Result : %d\n", result);

	//P214 SmartAddFunc.c
	printf("\n\n");
	int result2, num3, num4;
	HowToUseThisProg();
	num3 = ReadNum();
	num4 = ReadNum();
	result2 = Add(num3, num4);
	AddShowResult(result2);
	printf("\n\n");
	//P218 NumCompare.c
	printf("3과 4 중에서 큰 수는 %d이다.\n", NumberCompare(3, 4));
	printf("7과 2 중에서 큰 수는 %d이다.\n", NumberCompare(7, 2));
	printf("\n\n");

	//P129 AbsoCompare.c
	int num5, num6;
	printf("두 개의 정수 입력 : ");
	scanf_s("%d %d", &num5, &num6);

	printf("%d와 %d중 절대값이 큰 정수 : %d\n", num5, num6, AbsoCompare(num5, num6));

	return 0;
}

// P218 NumCompare.c : NumberCompare - Number Compare Function
int NumberCompare(int num1, int num2) { // 함수 구현
	if (num1 > num2)
		return num1;
	else
		return num2;
}

// P219 AbsoCompare.c : AbsoCompare - Absolute Number Compare Function
int AbsoCompare(int num1, int num2) {
	if (GetAbsoValue(num1) > GetAbsoValue(num2))
		return num1; // num1의 절대값이 더 크다면 num1 반환
	else
		return num2; // 아니라면 num2 반환
}

// P219 AbsoCompare.c : GetAbsoValue - Get Absolute Number Function
int GetAbsoValue(int num) { // 함수 구현
	if (num < 0) // 음수라면
		return num * (-1); // -1을 곱한 값을 반환
	else
		return num; // 아니라면 그대로를 반환
}