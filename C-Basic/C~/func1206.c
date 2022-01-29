#include <stdio.h>

// 함수(메쏘드)의 의미 
void func1() // void func1(void) 같은 의미
{
	for (int i = 0; i < 5; i++)
	{
		printf("void 함수 유형1 \n");
	}
}
int main_23423() {
	//함수의 여러가지 유형
	//1. void 함수명()
	//   void : 없다
	// 함수를 사용하기 위해서는 다른 함수에서
	// 함수의 이름을 호출(사용)해야만 함
	func1(); // func1 함수를 호출 하는 의미
	return 0;
}